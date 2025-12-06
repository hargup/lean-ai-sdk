/-
  AiSdk/Providers/Xai.lean
  xAI (Grok) provider implementation

  xAI uses an OpenAI-compatible API at https://api.x.ai/v1
-/

import AiSdk.Types
import AiSdk.Json
import AiSdk.Provider
import AiSdk.Config
import HttpClient

namespace AiSdk.Xai

open AiSdk.Json
open Lean (Json ToJson)

/-- xAI API base URL -/
def baseUrl : String := "https://api.x.ai/v1"

/-- Default model - Grok 3 (balanced performance) -/
def defaultModel : String := "grok-3"

/-- Default model - Grok 3 (balanced performance) -/
def defaultModel : String := "grok-3"

namespace Core

/-- Convert SDK Role to xAI role string (OpenAI-compatible) -/
def roleToString : Role → String
  | .user => "user"
  | .assistant => "assistant"
  | .system => "system"

/-- Convert ContentPart to xAI JSON format (OpenAI compatible) -/
def contentPartToJson (part : ContentPart) : Json :=
  match part with
  | .text t => Json.mkObj [("type", "text"), ("text", t)]
  | .image d mime => Json.mkObj [
      ("type", "image_url"),
      ("image_url", Json.mkObj [("url", s!"data:{mime};base64,{d}")])
    ]

/-- Build the request JSON for xAI API (OpenAI-compatible format) -/
def buildRequestJson (modelId : String) (messages : List Message) (settings : CallSettings) : Json :=
  -- Build messages array
  let messagesJson := messages.map fun msg =>
    let contentJson := 
      if msg.content.length == 1 then
        match msg.content.head! with
        | .text t => Json.str t
        | part => Json.arr #[contentPartToJson part]
      else
        Json.arr (msg.content.map contentPartToJson).toArray

    Json.mkObj [
      ("role", Json.str (roleToString msg.role)),
      ("content", contentJson)
    ]

  -- Start with required fields
  let pairs : List (String × Json) := [
    ("model", Json.str modelId),
    ("messages", Json.arr messagesJson.toArray)
  ]

  -- Add optional settings
  let pairs := match settings.temperature with
    | some t => pairs ++ [("temperature", ToJson.toJson t)]
    | none => pairs

  let pairs := match settings.maxTokens with
    | some m => pairs ++ [("max_tokens", ToJson.toJson m)]
    | none => pairs

  let pairs := match settings.topP with
    | some p => pairs ++ [("top_p", ToJson.toJson p)]
    | none => pairs

  let pairs := if settings.stopSequences.isEmpty then pairs
    else pairs ++ [("stop", Json.arr (settings.stopSequences.map Json.str).toArray)]

  Json.mkObj pairs

/-- Construct the RawRequest -/
def constructRequest (apiKey : String) (modelId : String) (messages : List Message) (settings : CallSettings) : RawRequest :=
  let requestJson := buildRequestJson modelId messages settings
  let requestBody := requestJson.compress
  {
    method := "POST",
    url := s!"{baseUrl}/chat/completions",
    headers := [("Authorization", s!"Bearer {apiKey}"), ("Content-Type", "application/json")],
    body := requestBody
  }

/-- Parse finish reason from xAI response -/
def parseFinishReason (reason : String) : FinishReason :=
  match reason with
  | "stop" => .stop
  | "length" => .length
  | "tool_calls" => .toolUse
  | "content_filter" => .contentFilter
  | _ => .other

/-- Parse the xAI API response (OpenAI-compatible format) -/
def parseResponse (body : String) : ApiResult GenerateTextResult := do
  match parse body with
  | .error e => .error (.parseError s!"Failed to parse JSON: {e}")
  | .ok json =>
    -- Check for error response
    match getField json "error" with
    | some errorObj =>
      let errorMsg := getFieldStr errorObj "message" |>.getD "Unknown error"
      .error (.httpError 400 errorMsg)
    | none =>
      -- Get first choice
      let choices := getFieldArr json "choices" |>.getD #[]
      if choices.isEmpty then
        .error (.parseError "No choices in response")
      else
        let choice := choices[0]!

        -- Extract text from message.content
        let text := getPathStr choice ["message", "content"] |>.getD ""

        -- Extract finish reason
        let finishReasonStr := getFieldStr choice "finish_reason" |>.getD "stop"
        let finishReason := parseFinishReason finishReasonStr

        -- Extract usage
        let usage := getField json "usage"
        let inputTokens := usage.bind (fun u => getFieldNat u "prompt_tokens") |>.getD 0
        let outputTokens := usage.bind (fun u => getFieldNat u "completion_tokens") |>.getD 0

        .ok {
          text := text
          finishReason := finishReason
          usage := { inputTokens := inputTokens, outputTokens := outputTokens }
        }

end Core

/-- Create the generate function for xAI -/
private def makeGenerateFn (apiKey : String) (modelId : String) : GenerateFn :=
  fun messages settings => do
    -- Core: Construct request
    let request := Core.constructRequest apiKey modelId messages settings

    -- Shell: Execute request
    match HttpClient.Url.parse request.url with
    | none => return .error (.networkError "Failed to parse URL")
    | some url =>
      -- Build request with Bearer token auth
      let mut httpReq := HttpClient.Request.create request.method url
      
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

/-- Create an xAI model -/
def createModel (apiKey : String) (modelId : String := defaultModel) : Model :=
  { provider := .xai
    modelId := modelId
    generateFn := makeGenerateFn apiKey modelId }

/-- Create an xAI model, loading API key from config -/
def create (modelId : String := defaultModel)
    (apiKey : Option String := none) : IO (ApiResult Model) := do
  match apiKey with
  | some key => return .ok (createModel key modelId)
  | none =>
    let config ← ApiConfig.load
    match config.getXaiKey with
    | .ok key => return .ok (createModel key modelId)
    | .error e => return .error e

end AiSdk.Xai
