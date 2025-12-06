/-
  AiSdk/Provider.lean
  Provider interface and Model wrapper
-/

import AiSdk.Types

namespace AiSdk

/-- Function type for generating text -/
def GenerateFn := List Message → CallSettings → IO (ApiResult GenerateTextResult)

/-- Function type for streaming text -/
def StreamFn := List Message → CallSettings → IO (ApiResult (Stream StreamChunk))

/-- A model that can generate text -/
structure Model where
  /-- Provider name (e.g., "anthropic", "google") -/
  provider : Provider
  /-- Model identifier (e.g., "claude-sonnet-4-20250514", "gemini-2.0-flash") -/
  modelId : String
  /-- The function to call for generation -/
  generateFn : GenerateFn
  /-- The function to call for streaming (optional) -/
  streamFn : Option StreamFn := none

namespace Model
  /-- Generate text using this model -/
  def generate (m : Model) (messages : List Message)
      (settings : CallSettings := {}) : IO (ApiResult GenerateTextResult) :=
    m.generateFn messages settings

  /-- Stream text using this model -/
  def stream (m : Model) (messages : List Message)
      (settings : CallSettings := {}) : IO (ApiResult (Stream StreamChunk)) :=
    match m.streamFn with
    | some fn => fn messages settings
    | none => return .error (.configError "Model does not support streaming")

  /-- Generate text from a single prompt -/
  def generateFromPrompt (m : Model) (prompt : String)
      (settings : CallSettings := {}) : IO (ApiResult GenerateTextResult) :=
    m.generate [Message.user prompt] settings

  /-- Generate text with a system prompt -/
  def generateWithSystem (m : Model) (system : String) (prompt : String)
      (settings : CallSettings := {}) : IO (ApiResult GenerateTextResult) :=
    m.generate [Message.system system, Message.user prompt] settings

  instance : ToString Model where
    toString m := s!"{m.provider}/{m.modelId}"
end Model

end AiSdk
