/-
  AiSdk/GenerateObject.lean
  Structured output generation
-/

import AiSdk.Types
import AiSdk.Provider
import AiSdk.Json
import Lean.Data.Json

namespace AiSdk

open Lean (Json FromJson)

/-- Result of object generation -/
structure GenerateObjectResult (α : Type) where
  object : α
  usage : Usage
  deriving Repr

/-- Generate a structured object from a model -/
-- Note: This currently relies on the model following instructions or "JSON mode".
-- Providers like OpenAI have specific 'response_format' settings which we should expose in CallSettings.
def generateObject {α : Type} [FromJson α] (model : Model) (schema : Json) (prompt : String)
    (settings : CallSettings := {}) : IO (ApiResult (GenerateObjectResult α)) := do
  
  -- Inject schema into system prompt (basic approach)
  -- Ideally we use provider-specific structured output features
  let systemPrompt := s!"You are a JSON generation assistant. You must return a valid JSON object strictly matching this schema:\n{schema.compress}\nDo not return markdown blocks or other text."
  
  -- Force JSON mode if possible (via settings, though we need to add it to CallSettings)
  -- For now, just prompt engineering.
  
  let result ← model.generate [Message.system systemPrompt, Message.user prompt] settings
  
  match result with
  | .error e => return .error e
  | .ok genResult =>
    match Json.parse genResult.text with
    | .error e => return .error (.parseError s!"Failed to parse response as JSON: {e}\nResponse: {genResult.text}")
    | .ok json =>
      match FromJson.fromJson? json with
      | .error e => return .error (.parseError s!"JSON does not match expected type: {e}")
      | .ok obj => return .ok { object := obj, usage := genResult.usage }

end AiSdk

