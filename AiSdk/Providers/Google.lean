/-
  AiSdk/Providers/Google.lean
  Google Gemini provider implementation
-/

import AiSdk.Types
import AiSdk.Json
import AiSdk.Provider
import AiSdk.Config
import HttpClient

namespace AiSdk.Google

open AiSdk.Json
open Lean (Json ToJson)

/-- Google Generative AI API base URL -/
def baseUrl : String := "https://generativelanguage.googleapis.com/v1beta"

/-- Default model - Gemini 2.5 Flash (best price-performance) -/
def defaultModel : String := "gemini-2.5-flash"

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

  -- Build request object
  let pairs : List (String × Json) := [
    ("contents", Json.arr contentsJson.toArray)
  ]

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

/-- Parse finish reason from Google response -/
def parseFinishReason (reason : String) : FinishReason :=
  match reason with
  | "STOP" => .stop
  | "MAX_TOKENS" => .length
  | "SAFETY" => .contentFilter
  | "RECITATION" => .contentFilter
  | _ => .other

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

        -- Extract usage (may be in different locations)
        let usageMetadata := getField json "usageMetadata"
        let inputTokens := usageMetadata.bind (fun u => getFieldNat u "promptTokenCount") |>.getD 0
        let outputTokens := usageMetadata.bind (fun u => getFieldNat u "candidatesTokenCount") |>.getD 0

        .ok {
          text := text
          finishReason := finishReason
          usage := { inputTokens := inputTokens, outputTokens := outputTokens }
        }

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

/-- Create a Google model -/
def createModel (apiKey : String) (modelId : String := defaultModel) : Model :=
  { provider := .google
    modelId := modelId
    generateFn := makeGenerateFn apiKey modelId }

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
