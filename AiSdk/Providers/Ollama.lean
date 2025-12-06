/-
  AiSdk/Providers/Ollama.lean
  Ollama provider implementation (Local LLMs)
  
  Uses the standard Ollama API at http://localhost:11434/api/chat
-/

import AiSdk.Types
import AiSdk.Json
import AiSdk.Provider
import AiSdk.Config
import AiSdk.Stream
import HttpClient

namespace AiSdk.Ollama

open AiSdk.Json
open Lean (Json ToJson)

/-- Ollama default base URL -/
def defaultBaseUrl : String := "http://localhost:11434"

/-- Default model - llama3 -/
def defaultModel : String := "llama3"

namespace Core

/-- Convert SDK Role to Ollama role string -/
def roleToString : Role → String
  | .user => "user"
  | .assistant => "assistant"
  | .system => "system"

/-- Convert ContentPart to Ollama JSON format -/
def contentPartToJson (part : ContentPart) : Json :=
  match part with
  | .text t => Json.str t -- Ollama typically just takes text or list of images separate
  | .image d _ => Json.str "" -- Images are handled separately in Ollama API usually
  | .toolResult id res => Json.str s!"Tool Result [{id}]: {res}" -- Fallback for now

/-- Build the request JSON for Ollama API -/
def buildRequestJson (modelId : String) (messages : List Message) (settings : CallSettings) : Json :=
  -- Build messages array
  let messagesJson := messages.map fun msg =>
    -- Ollama expects 'content' as string and optional 'images' array for user messages
    -- We need to extract images if any
    let (textContent, images) := msg.content.foldl (fun (txt, imgs) part =>
      match part with
      | .text t => (txt ++ t, imgs)
      | .image d _ => (txt, imgs.push (Json.str d))
      | .toolResult id res => (txt ++ s!"\nTool Result [{id}]: {res}", imgs)
    ) ("", #[])

    let msgObj := [
      ("role", Json.str (roleToString msg.role)),
      ("content", Json.str textContent)
    ]
    
    if images.isEmpty then Json.mkObj msgObj
    else Json.mkObj (msgObj ++ [("images", Json.arr images)])

  -- Start with required fields
  let pairs : List (String × Json) := [
    ("model", Json.str modelId),
    ("messages", Json.arr messagesJson.toArray),
    ("stream", Json.bool false) -- Disable streaming for now
  ]

  -- Add optional settings (Ollama puts these in 'options')
  let optionsPairs : List (String × Json) := []
  
  let optionsPairs := match settings.temperature with
    | some t => optionsPairs ++ [("temperature", ToJson.toJson t)]
    | none => optionsPairs

  let optionsPairs := match settings.maxTokens with
    | some m => optionsPairs ++ [("num_predict", ToJson.toJson m)]
    | none => optionsPairs

  let optionsPairs := match settings.topP with
    | some p => optionsPairs ++ [("top_p", ToJson.toJson p)]
    | none => optionsPairs

  let optionsPairs := match settings.topK with
    | some k => optionsPairs ++ [("top_k", ToJson.toJson k)]
    | none => optionsPairs

  let optionsPairs := if settings.stopSequences.isEmpty then optionsPairs
    else optionsPairs ++ [("stop", Json.arr (settings.stopSequences.map Json.str).toArray)]

  let pairs := if optionsPairs.isEmpty then pairs
    else pairs ++ [("options", Json.mkObj optionsPairs)]

  let pairs := if settings.jsonMode then pairs ++ [("format", Json.str "json")]
    else pairs

  -- Tools are supported in newer Ollama versions via OpenAI compatible endpoint, 
  -- but native API also has tool support in some versions.
  -- For now, we skip tools for Ollama native implementation or minimal support.
  -- (Ollama tool support varies by model and version)

  Json.mkObj pairs

/-- Build the request JSON for Ollama API with streaming -/
def buildRequestJsonWithStream (modelId : String) (messages : List Message) (settings : CallSettings) : Json :=
  let json := buildRequestJson modelId messages settings
  json.mergeObj (Json.mkObj [("stream", true)])

/-- Construct the RawRequest -/
def constructRequest (baseUrl : String) (modelId : String) (messages : List Message) (settings : CallSettings) : RawRequest :=
  let requestJson := buildRequestJson modelId messages settings
  let requestBody := requestJson.compress
  {
    method := "POST",
    url := s!"{baseUrl}/api/chat",
    headers := [("Content-Type", "application/json")],
    body := requestBody
  }

/-- Construct the RawRequest for streaming -/
def constructStreamRequest (baseUrl : String) (modelId : String) (messages : List Message) (settings : CallSettings) : RawRequest :=
  let requestJson := buildRequestJsonWithStream modelId messages settings
  let requestBody := requestJson.compress
  {
    method := "POST",
    url := s!"{baseUrl}/api/chat",
    headers := [("Content-Type", "application/json")],
    body := requestBody
  }

/-- Parse finish reason from Ollama response -/
def parseFinishReason (done : Bool) (reason : String) : FinishReason :=
  if done then
    match reason with
    | "stop" => .stop
    | "length" => .length
    | _ => .stop -- Default to stop if done
  else
    .other

/-- Parse the Ollama API response -/
def parseResponse (body : String) : ApiResult GenerateTextResult := do
  match parse body with
  | .error e => .error (.parseError s!"Failed to parse JSON: {e}")
  | .ok json =>
    -- Check for error
    match getFieldStr json "error" with
    | some err => .error (.httpError 400 err)
    | none =>
      -- Extract text from message.content
      let text := getPathStr json ["message", "content"] |>.getD ""

      -- Extract finish reason
      let done := getFieldBool json "done" |>.getD true
      let doneReason := getFieldStr json "done_reason" |>.getD "stop"
      let finishReason := parseFinishReason done doneReason

      -- Extract usage
      let inputTokens := getFieldNat json "prompt_eval_count" |>.getD 0
      let outputTokens := getFieldNat json "eval_count" |>.getD 0

      .ok {
        text := text
        finishReason := finishReason
        usage := { inputTokens := inputTokens, outputTokens := outputTokens }
        toolCalls := [] -- Tools not yet fully supported in this simple Ollama implementation
      }

/-- Parse stream chunk from Ollama -/
def parseStreamChunk (chunkJson : Json) : Option StreamChunk :=
  let done := getFieldBool chunkJson "done" |>.getD false
  if done then
    let reasonStr := getFieldStr chunkJson "done_reason" |>.getD "stop"
    let finishReason := parseFinishReason true reasonStr
    
    let inputTokens := getFieldNat chunkJson "prompt_eval_count" |>.getD 0
    let outputTokens := getFieldNat chunkJson "eval_count" |>.getD 0
    
    some (.finish finishReason { inputTokens, outputTokens })
  else
    match getPathStr chunkJson ["message", "content"] with
    | some content => some (.textDelta content)
    | none => none

end Core

/-- Create the generate function for Ollama -/
private def makeGenerateFn (baseUrl : String) (modelId : String) : GenerateFn :=
  fun messages settings => do
    -- Core: Construct request
    let request := Core.constructRequest baseUrl modelId messages settings

    -- Shell: Execute request
    match HttpClient.Url.parse request.url with
    | none => return .error (.networkError "Failed to parse URL")
    | some url =>
      -- Build request
      let mut httpReq := HttpClient.Request.post url
      
      -- Add headers
      for (k, v) in request.headers do
        httpReq := httpReq.withHeader k v
        
      -- Add body
      httpReq := httpReq.withBody request.body

      -- Create client and send request
      let client ← HttpClient.Client.new
      match ← client.send httpReq with
      | .error e => return .error (.networkError s!"HTTP error: {e}")
      | .ok response =>
        if response.status.isSuccess then
          return Core.parseResponse response.body
        else
          return .error (.httpError response.status.code response.body)

/-- Create the stream function for Ollama -/
private def makeStreamFn (baseUrl : String) (modelId : String) : StreamFn :=
  fun messages settings => do
    let request := Core.constructStreamRequest baseUrl modelId messages settings
    
    -- Execute request using curl stream helper
    let lineStream ← AiSdk.Stream.streamRequest request
    
    -- Map lines to StreamChunks
    let chunkStream := lineStream.filterMap fun line => do
      -- Ollama sends one JSON object per line (NDJSON)
      match Json.parse line with
      | .ok json => return Core.parseStreamChunk json
      | .error e => return some (.error s!"JSON parse error: {e} in line: {line}")
      
    return .ok chunkStream

/-- Create an Ollama model -/
def createModel (modelId : String := defaultModel) (baseUrl : String := defaultBaseUrl) : Model :=
  { provider := .ollama
    modelId := modelId
    generateFn := makeGenerateFn baseUrl modelId
    streamFn := some (makeStreamFn baseUrl modelId) }

/-- Create an Ollama model, loading config if needed (mostly for custom URL) -/
def create (modelId : String := defaultModel) : IO (ApiResult Model) := do
  -- Ollama usually doesn't need an API key, just a URL which defaults to localhost
  let config ← ApiConfig.load
  let baseUrl := match config.extras.lookup "ollama_base_url" with
    | some url => url
    | none => defaultBaseUrl
    
  return .ok (createModel modelId baseUrl)

end AiSdk.Ollama

