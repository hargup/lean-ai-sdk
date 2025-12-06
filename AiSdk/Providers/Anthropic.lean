/-
  AiSdk/Providers/Anthropic.lean
  Anthropic Claude provider implementation
-/

import AiSdk.Types
import AiSdk.Json
import AiSdk.Provider
import AiSdk.Config
import HttpClient

namespace AiSdk.Anthropic

open AiSdk.Json
open Lean (Json ToJson)

/-- Anthropic API base URL -/
def baseUrl : String := "https://api.anthropic.com"

/-- Default model -/
def defaultModel : String := "claude-sonnet-4-20250514"

/-- Default model -/
def defaultModel : String := "claude-sonnet-4-20250514"

namespace Core

/-- Convert SDK Role to Anthropic role string -/
def roleToString : Role → String
  | .user => "user"
  | .assistant => "assistant"
  | .system => "user"  -- System is handled separately in Anthropic API

/-- Build the request JSON for Anthropic API -/
def buildRequestJson (modelId : String) (messages : List Message)
    (settings : CallSettings) : Json :=
  -- Separate system message from other messages
  let systemContent := messages.filter (·.role == .system)
    |>.map (·.content)
    |> String.intercalate "\n\n"
  let chatMessages := messages.filter (·.role != .system)

  -- Build messages array
  let messagesJson := chatMessages.map fun msg =>
    Json.mkObj [
      ("role", Json.str (roleToString msg.role)),
      ("content", Json.str msg.content)
    ]

  -- Build request object
  let pairs : List (String × Json) := [
    ("model", Json.str modelId),
    ("max_tokens", Json.num (settings.maxTokens.getD 4096)),
    ("messages", Json.arr messagesJson.toArray)
  ]

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

/-- Parse finish reason from Anthropic response -/
def parseFinishReason (reason : String) : FinishReason :=
  match reason with
  | "end_turn" => .stop
  | "stop_sequence" => .stop
  | "max_tokens" => .length
  | "tool_use" => .toolUse
  | _ => .other

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
      let text := contentArr.toList.filterMap (fun c => getFieldStr c "text")
        |> String.intercalate ""

      -- Extract finish reason
      let stopReason := getFieldStr json "stop_reason" |>.getD "end_turn"
      let finishReason := parseFinishReason stopReason

      -- Extract usage
      let inputTokens := getPathNat json ["usage", "input_tokens"] |>.getD 0
      let outputTokens := getPathNat json ["usage", "output_tokens"] |>.getD 0

      .ok {
        text := text
        finishReason := finishReason
        usage := { inputTokens := inputTokens, outputTokens := outputTokens }
      }

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

/-- Create an Anthropic model -/
def createModel (apiKey : String) (modelId : String := defaultModel) : Model :=
  { provider := .anthropic
    modelId := modelId
    generateFn := makeGenerateFn apiKey modelId }

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
