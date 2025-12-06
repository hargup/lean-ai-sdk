/-
  AiSdk/Providers/Anthropic.lean
  Anthropic Claude provider implementation
-/

import AiSdk.Types
import AiSdk.Json
import AiSdk.Provider
import AiSdk.Config
import AiSdk.Stream
import HttpClient

namespace AiSdk.Anthropic

open AiSdk.Json
open Lean (Json ToJson)

/-- Anthropic API base URL -/
def baseUrl : String := "https://api.anthropic.com"

/-- Default model -/
def defaultModel : String := "claude-sonnet-4-20250514"

namespace Core

/-- Convert SDK Role to Anthropic role string -/
def roleToString : Role → String
  | .user => "user"
  | .assistant => "assistant"
  | .system => "user"  -- System is handled separately in Anthropic API

/-- Convert ContentPart to Anthropic JSON format -/
def contentPartToJson (part : ContentPart) : Json :=
  match part with
  | .text t => Json.mkObj [("type", "text"), ("text", t)]
  | .image d mime => Json.mkObj [
      ("type", "image"),
      ("source", Json.mkObj [
        ("type", "base64"),
        ("media_type", mime),
        ("data", d)
      ])
    ]
  | .toolResult id res => Json.mkObj [
      ("type", "tool_result"),
      ("tool_use_id", id),
      ("content", res)
    ]

/-- Convert ToolDefinition to Anthropic JSON format -/
def toolToJson (tool : ToolDefinition) : Json :=
  Json.mkObj [
    ("name", tool.name),
    ("description", tool.description),
    ("input_schema", tool.parameters)
  ]

/-- Build the request JSON for Anthropic API -/
def buildRequestJson (modelId : String) (messages : List Message)
    (settings : CallSettings) : Json :=
  -- Separate system message from other messages
  let systemContent := messages.filter (·.role == .system)
    |>.map (·.textContent)
    |> String.intercalate "\n\n"
  let chatMessages := messages.filter (·.role != .system)

  -- Build messages array
  let messagesJson := chatMessages.map fun msg =>
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

  -- Build request object
  let pairs : List (String × Json) := [
    ("model", Json.str modelId),
    ("max_tokens", Json.num (settings.maxTokens.getD 4096)),
    ("messages", Json.arr messagesJson.toArray)
  ]

  -- Add tools if present
  let pairs := if settings.tools.isEmpty then pairs
    else pairs ++ [("tools", Json.arr (settings.tools.map toolToJson).toArray)]

  -- Add optional system prompt
  let pairs := if systemContent.isEmpty then pairs
    else pairs ++ [("system", Json.str systemContent)]

  -- Add optional temperature
  let pairs := match settings.temperature with
    | some t => pairs ++ [("temperature", ToJson.toJson t)]
    | none => pairs

  -- Add optional top_p
  let pairs := match settings.topP with
    | some p => pairs ++ [("top_p", ToJson.toJson p)]
    | none => pairs

  -- Add optional top_k
  let pairs := match settings.topK with
    | some k => pairs ++ [("top_k", ToJson.toJson k)]
    | none => pairs

  -- Add stop sequences
  let pairs := if settings.stopSequences.isEmpty then pairs
    else pairs ++ [("stop_sequences", Json.arr (settings.stopSequences.map Json.str).toArray)]

  Json.mkObj pairs

/-- Build the request JSON for Anthropic API with streaming -/
def buildRequestJsonWithStream (modelId : String) (messages : List Message) (settings : CallSettings) : Json :=
  let json := buildRequestJson modelId messages settings
  json.mergeObj (Json.mkObj [("stream", true)])

/-- Construct the RawRequest -/
def constructRequest (apiKey : String) (modelId : String) (messages : List Message) (settings : CallSettings) : RawRequest :=
  let requestJson := buildRequestJson modelId messages settings
  let requestBody := requestJson.compress
  {
    method := "POST",
    url := s!"{baseUrl}/v1/messages",
    headers := [
      ("x-api-key", apiKey),
      ("anthropic-version", "2023-06-01"),
      ("Content-Type", "application/json")
    ],
    body := requestBody
  }

/-- Construct the RawRequest for streaming -/
def constructStreamRequest (apiKey : String) (modelId : String) (messages : List Message) (settings : CallSettings) : RawRequest :=
  let requestJson := buildRequestJsonWithStream modelId messages settings
  let requestBody := requestJson.compress
  {
    method := "POST",
    url := s!"{baseUrl}/v1/messages",
    headers := [
      ("x-api-key", apiKey),
      ("anthropic-version", "2023-06-01"),
      ("Content-Type", "application/json")
    ],
    body := requestBody
  }

/-- Parse finish reason from Anthropic response -/
def parseFinishReason (reason : String) : FinishReason :=
  match reason with
  | "end_turn" => .stop
  | "stop_sequence" => .stop
  | "max_tokens" => .length
  | "tool_use" => .toolUse
  | _ => .other

/-- Parse tool calls from Anthropic response -/
def parseToolCalls (content : Array Json) : List ToolCall :=
  content.toList.filterMap fun item => do
    match getFieldStr item "type" with
    | some "tool_use" =>
      let id ← getFieldStr item "id"
      let name ← getFieldStr item "name"
      let input ← getField item "input"
      some { id := id, name := name, arguments := input }
    | _ => none

/-- Parse the Anthropic API response -/
def parseResponse (body : String) : ApiResult GenerateTextResult := do
  match parse body with
  | .error e => .error (.parseError s!"Failed to parse JSON: {e}")
  | .ok json =>
    -- Check for error response
    match getFieldStr json "type" with
    | some "error" =>
      let errorMsg := getPathStr json ["error", "message"] |>.getD "Unknown error"
      .error (.httpError 400 errorMsg)
    | _ =>
      -- Extract content text
      let contentArr := getFieldArr json "content" |>.getD #[]
      let text := contentArr.toList.filterMap (fun c => 
        if getFieldStr c "type" == some "text" then getFieldStr c "text" else none
      ) |> String.intercalate ""

      -- Extract finish reason
      let stopReason := getFieldStr json "stop_reason" |>.getD "end_turn"
      let finishReason := parseFinishReason stopReason

      -- Extract tool calls
      let toolCalls := parseToolCalls contentArr

      -- Extract usage
      let inputTokens := getPathNat json ["usage", "input_tokens"] |>.getD 0
      let outputTokens := getPathNat json ["usage", "output_tokens"] |>.getD 0

      .ok {
        text := text
        finishReason := finishReason
        usage := { inputTokens := inputTokens, outputTokens := outputTokens }
        toolCalls := toolCalls
      }

/-- Parse stream chunk from Anthropic -/
def parseStreamChunk (chunkJson : Json) : Option StreamChunk :=
  match getFieldStr chunkJson "type" with
  | some "content_block_delta" =>
    let delta := getField chunkJson "delta" |>.getD (Json.mkObj [])
    match getFieldStr delta "type" with
    | some "text_delta" =>
      let text := getFieldStr delta "text" |>.getD ""
      some (.textDelta text)
    | some "input_json_delta" =>
       -- Partial JSON for tool calls - accumulation happens in the shell or specialized handler
       -- For now just return raw text of arguments to be appended?
       -- Or we need a dedicated delta type for tool call partials?
       -- Types.lean defines: toolCallDelta (id : String) (argsText : String)
       -- Anthropic separates tool_use_id in 'content_block_start' from 'input_json_delta'
       -- We need stateful parsing to associate deltas with IDs, OR we just emit delta args
       -- and let the consumer stitch it if they track the active tool.
       -- But `toolCallDelta` requires ID.
       -- For stateless chunk parsing, we might miss the ID if it was in a previous chunk.
       -- A common pattern: if ID is empty string, it appends to current tool call.
       let partialJson := getFieldStr delta "partial_json" |>.getD ""
       some (.toolCallDelta "" partialJson) 
    | _ => none
  | some "content_block_start" =>
     let contentBlock := getField chunkJson "content_block" |>.getD (Json.mkObj [])
     match getFieldStr contentBlock "type" with
     | some "tool_use" =>
       let id := getFieldStr contentBlock "id" |>.getD ""
       let name := getFieldStr contentBlock "name" |>.getD ""
       -- We can emit a tool call delta with ID and Name (encoded in argsText or similar hack?)
       -- Or we update StreamChunk to support 'toolCallStart'?
       -- For now, let's send ID and empty args to signal start.
       some (.toolCallDelta id "") 
     | _ => none
  | some "message_delta" =>
    let delta := getField chunkJson "delta" |>.getD (Json.mkObj [])
    match getFieldStr delta "stop_reason" with
    | some reason =>
      -- Usage is in 'usage' field of message_delta
      let usage := getField chunkJson "usage" |>.getD (Json.mkObj [])
      let outputTokens := getFieldNat usage "output_tokens" |>.getD 0
      some (.finish (parseFinishReason reason) { inputTokens := 0, outputTokens := outputTokens })
    | none => none
  | some "message_start" =>
    -- Usage (input tokens) is here
    let msg := getField chunkJson "message" |>.getD (Json.mkObj [])
    let usage := getField msg "usage" |>.getD (Json.mkObj [])
    let inputTokens := getFieldNat usage "input_tokens" |>.getD 0
    -- We can't send a 'finish' chunk yet.
    -- Maybe we need a 'usage' chunk? Or just ignore for now until finish?
    -- Let's ignore input tokens in stream for simplicity or send a dummy finish? No.
    none
  | _ => none

end Core

/-- Create the generate function for Anthropic -/
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

/-- Create the stream function for Anthropic -/
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

/-- Create an Anthropic model -/
def createModel (apiKey : String) (modelId : String := defaultModel) : Model :=
  { provider := .anthropic
    modelId := modelId
    generateFn := makeGenerateFn apiKey modelId
    streamFn := some (makeStreamFn apiKey modelId) }

/-- Create an Anthropic model, loading API key from config -/
def create (modelId : String := defaultModel)
    (apiKey : Option String := none) : IO (ApiResult Model) := do
  match apiKey with
  | some key => return .ok (createModel key modelId)
  | none =>
    let config ← ApiConfig.load
    match config.getAnthropicKey with
    | .ok key => return .ok (createModel key modelId)
    | .error e => return .error e

end AiSdk.Anthropic
