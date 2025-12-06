/-
  AiSdk/GenerateText.lean
  Main text generation API
-/

import AiSdk.Types
import AiSdk.Provider

namespace AiSdk

/-- Generate text from a model using a simple prompt -/
def generateText (model : Model) (prompt : String)
    (settings : CallSettings := {}) : IO (ApiResult GenerateTextResult) :=
  model.generateFromPrompt prompt settings

/-- Generate text from a model with a system prompt -/
def generateTextWithSystem (model : Model) (system : String) (prompt : String)
    (settings : CallSettings := {}) : IO (ApiResult GenerateTextResult) :=
  model.generateWithSystem system prompt settings

/-- Generate text from a model using a full message list -/
def generateTextFromMessages (model : Model) (messages : List Message)
    (settings : CallSettings := {}) : IO (ApiResult GenerateTextResult) :=
  model.generate messages settings

/-- Helper to run generation and print result -/
def runAndPrint (model : Model) (prompt : String)
    (settings : CallSettings := {}) : IO Unit := do
  match ← generateText model prompt settings with
  | .ok result =>
    IO.println result.text
    IO.println s!"[{result.finishReason}, tokens: {result.usage.inputTokens}→{result.usage.outputTokens}]"
  | .error e =>
    IO.eprintln s!"Error: {e}"

end AiSdk
