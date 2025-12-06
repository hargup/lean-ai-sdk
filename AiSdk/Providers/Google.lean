/-
  AiSdk/Providers/Google.lean
  Google Gemini provider implementation
-/

import AiSdk.Types
import AiSdk.Json
import AiSdk.Provider
import AiSdk.Config
import AiSdk.Stream
import HttpClient

namespace AiSdk.Google

open AiSdk.Json
open Lean (Json ToJson)

/-- Google Generative AI API base URL -/
def baseUrl : String := "https://generativelanguage.googleapis.com/v1beta"

/-- Default model - Gemini 2.5 Flash (best price-performance) -/
def defaultModel : String := "gemini-2.5-flash"

namespace Core

/-- Convert SDK Role to Google role string -/
def roleToString : Role → String
  | .user => "user"
  | .assistant => "model"
  | .system => "user"  -- System is handled via systemInstruction

/-- Convert ContentPart to Google JSON format -/
def contentPartToJson (part : ContentPart) : Json :=
  match part with
  | .text t => Json.mkObj [("text", Json.str t)]
  | .image d mime => Json.mkObj [
      ("inlineData", Json.mkObj [
        ("mimeType", mime),
        ("data", d)
      ])
    ]
  | .toolResult id res => Json.mkObj [ -- Google functionResponse format
      ("functionResponse", Json.mkObj [
        ("name", id), -- NOTE: Google uses name as ID effectively in stateless, but here we might need the actual function name.
                      -- The 'id' in toolResult should ideally be the call ID or name depending on provider.
                      -- For Google, it expects 'name'. We assume 'id' passed here is the function name if we don't have a separate ID map.
                      -- Actually, for Agent loop, we might need to store the function name in the toolResult if needed.
                      -- But standard `ToolCall` has `name`. The `toolResult` has `toolCallId`.
                      -- OpenAI uses ID. Google uses Name.
                      -- We might need to lookup the name if we only have ID, or store name in toolResult.
                      -- For now, let's assume `toolCallId` holds the function name for Google, or we change `toolResult` to hold name too.
                      -- Let's assume for now the user/agent handles this mapping or `id` is sufficient.
        ("response", Json.parse res |>.toOption |>.getD (Json.mkObj [("result", res)]))
      ])
    ]

/-- Convert ToolDefinition to Google JSON format -/
def toolToJson (tool : ToolDefinition) : Json :=
  Json.mkObj [
    ("name", tool.name),
    ("description", tool.description),
    ("parameters", tool.parameters) -- Google uses standard JSON schema, same as OpenAI roughly
  ]

/-- Build the request JSON for Google API -/
def buildRequestJson (messages : List Message) (settings : CallSettings) : Json :=
  -- Separate system message from other messages
  let systemContent := messages.filter (·.role == .system)
    |>.map (·.textContent)
    |> String.intercalate "\n\n"
  let chatMessages := messages.filter (·.role != .system)

  -- Build contents array
  let contentsJson := chatMessages.map fun msg =>
    let partsJson := msg.content.map contentPartToJson
    Json.mkObj [
      ("role", Json.str (roleToString msg.role)),
      ("parts", Json.arr partsJson.toArray)
    ]
  
  -- Build tools config
  let toolsJson := if settings.tools.isEmpty then Json.null
    else Json.arr #[Json.mkObj [("functionDeclarations", Json.arr (settings.tools.map toolToJson).toArray)]]

  -- Build generation config
  let genConfigPairs : List (String × Json) := []

  let genConfigPairs := match settings.temperature with
    | some t => genConfigPairs ++ [("temperature", ToJson.toJson t)]
    | none => genConfigPairs

  let genConfigPairs := match settings.maxTokens with
    | some m => genConfigPairs ++ [("maxOutputTokens", ToJson.toJson m)]
    | none => genConfigPairs

  let genConfigPairs := match settings.topP with
    | some p => genConfigPairs ++ [("topP", ToJson.toJson p)]
    | none => genConfigPairs

  let genConfigPairs := match settings.topK with
    | some k => genConfigPairs ++ [("topK", ToJson.toJson k)]
    | none => genConfigPairs

  let genConfigPairs := if settings.stopSequences.isEmpty then genConfigPairs
    else genConfigPairs ++ [("stopSequences", Json.arr (settings.stopSequences.map Json.str).toArray)]

  let genConfigPairs := if settings.jsonMode then genConfigPairs ++ [("responseMimeType", Json.str "application/json")]
    else genConfigPairs

  -- Build request object
  let pairs : List (String × Json) := [
    ("contents", Json.arr contentsJson.toArray)
  ]

  -- Add tools if present
  let pairs := if toolsJson.isNull then pairs
    else pairs ++ [("tools", toolsJson)]

  -- Add system instruction if present
  let pairs := if systemContent.isEmpty then pairs
    else pairs ++ [("systemInstruction", Json.mkObj [
      ("parts", Json.arr #[Json.mkObj [("text", Json.str systemContent)]])
    ])]

  -- Add generation config if not empty
  let pairs := if genConfigPairs.isEmpty then pairs
    else pairs ++ [("generationConfig", Json.mkObj genConfigPairs)]

  Json.mkObj pairs

/-- Construct the RawRequest -/
def constructRequest (apiKey : String) (modelId : String) (messages : List Message) (settings : CallSettings) : RawRequest :=
  let requestJson := buildRequestJson messages settings
  let requestBody := requestJson.compress
  let url := s!"{baseUrl}/models/{modelId}:generateContent?key={apiKey}"
  {
    method := "POST",
    url := url,
    headers := [("Content-Type", "application/json")],
    body := requestBody
  }

/-- Construct the RawRequest for streaming -/
def constructStreamRequest (apiKey : String) (modelId : String) (messages : List Message) (settings : CallSettings) : RawRequest :=
  let requestJson := buildRequestJson messages settings
  let requestBody := requestJson.compress
  -- Use streamGenerateContent?alt=sse
  let url := s!"{baseUrl}/models/{modelId}:streamGenerateContent?alt=sse&key={apiKey}"
  {
    method := "POST",
    url := url,
    headers := [("Content-Type", "application/json")],
    body := requestBody
  }

/-- Parse finish reason from Google response -/
def parseFinishReason (reason : String) : FinishReason :=
  match reason with
  | "STOP" => .stop
  | "MAX_TOKENS" => .length
  | "SAFETY" => .contentFilter
  | "RECITATION" => .contentFilter
  | _ => .other

/-- Parse tool calls from Google response -/
def parseToolCalls (candidate : Json) : List ToolCall :=
  let parts := getPathArr candidate ["content", "parts"] |>.getD #[]
  parts.toList.filterMap fun part => do
    let funcCall ← getField part "functionCall"
    let name ← getFieldStr funcCall "name"
    let args ← getField funcCall "args"
    -- Google doesn't provide ID in the same way, we might generate one or leave empty?
    -- Using name as ID for now or empty string since the protocol is stateful
    some { id := "", name := name, arguments := args }

/-- Parse the Google API response -/
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
      -- Get first candidate
      let candidates := getFieldArr json "candidates" |>.getD #[]
      if candidates.isEmpty then
        .error (.parseError "No candidates in response")
      else
        let candidate := candidates[0]!

        -- Extract text from content.parts
        let parts := getPathArr candidate ["content", "parts"] |>.getD #[]
        let text := parts.toList.filterMap (fun p => getFieldStr p "text")
          |> String.intercalate ""

        -- Extract finish reason
        let finishReasonStr := getFieldStr candidate "finishReason" |>.getD "STOP"
        let finishReason := parseFinishReason finishReasonStr

        -- Extract tool calls
        let toolCalls := parseToolCalls candidate

        -- Extract usage (may be in different locations)
        let usageMetadata := getField json "usageMetadata"
        let inputTokens := usageMetadata.bind (fun u => getFieldNat u "promptTokenCount") |>.getD 0
        let outputTokens := usageMetadata.bind (fun u => getFieldNat u "candidatesTokenCount") |>.getD 0

        .ok {
          text := text
          finishReason := finishReason
          usage := { inputTokens := inputTokens, outputTokens := outputTokens }
          toolCalls := toolCalls
        }

/-- Parse stream chunk from Google -/
def parseStreamChunk (chunkJson : Json) : Option StreamChunk :=
  -- Google stream format is array of candidates similar to unary response
  let candidates := getFieldArr chunkJson "candidates" |>.getD #[]
  if candidates.isEmpty then
     -- Check for usage metadata only chunk?
     match getField chunkJson "usageMetadata" with
     | some usage =>
       let inputTokens := getFieldNat usage "promptTokenCount" |>.getD 0
       let outputTokens := getFieldNat usage "candidatesTokenCount" |>.getD 0
       some (.finish .stop { inputTokens, outputTokens })
     | none => none
  else
    let candidate := candidates[0]!
    
    -- Check for content text
    let parts := getPathArr candidate ["content", "parts"] |>.getD #[]
    let text := parts.toList.filterMap (fun p => getFieldStr p "text") |> String.intercalate ""
    
    if text != "" then
      some (.textDelta text)
    else
      -- Check for tool calls (functionCall)
      let toolCalls := parts.toList.filterMap fun part => do
          let funcCall ← getField part "functionCall"
          let name ← getFieldStr funcCall "name"
          let args ← getField funcCall "args"
          some (name, args.compress)
      
      if !toolCalls.isEmpty then
        let (name, args) := toolCalls.head!
        some (.toolCallDelta name args)
      else
        -- Check finish reason
        match getFieldStr candidate "finishReason" with
        | some reason =>
          if reason != "STOP" then 
             let finishReason := parseFinishReason reason
             some (.finish finishReason { inputTokens := 0, outputTokens := 0 })
          else none
        | none => none

end Core

/-- Create the generate function for Google -/
private def makeGenerateFn (apiKey : String) (modelId : String) : GenerateFn :=
  fun messages settings => do
    -- Core: Construct request
    let request := Core.constructRequest apiKey modelId messages settings

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

/-- Create the stream function for Google -/
private def makeStreamFn (apiKey : String) (modelId : String) : StreamFn :=
  fun messages settings => do
    let request := Core.constructStreamRequest apiKey modelId messages settings
    
    -- Execute request using curl stream helper
    let lineStream ← AiSdk.Stream.streamRequest request
    
    -- Map lines to StreamChunks
    let chunkStream := lineStream.filterMap fun line => do
      match AiSdk.Stream.parseSseLine line with
      | some data =>
        match Json.parse data with
        | .ok json => return Core.parseStreamChunk json
        | .error e => return some (.error s!"JSON parse error: {e} in line: {data}")
      | none => return none
      
    return .ok chunkStream

/-- Create a Google model -/
def createModel (apiKey : String) (modelId : String := defaultModel) : Model :=
  { provider := .google
    modelId := modelId
    generateFn := makeGenerateFn apiKey modelId
    streamFn := some (makeStreamFn apiKey modelId) }

/-- Create a Google model, loading API key from config -/
def create (modelId : String := defaultModel)
    (apiKey : Option String := none) : IO (ApiResult Model) := do
  match apiKey with
  | some key => return .ok (createModel key modelId)
  | none =>
    let config ← ApiConfig.load
    match config.getGoogleKey with
    | .ok key => return .ok (createModel key modelId)
    | .error e => return .error e

end AiSdk.Google
