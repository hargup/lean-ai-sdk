/-
  AiSdk/Agent.lean
  The Agent Loop: processing tool calls and continuing conversation
-/

import AiSdk.Types
import AiSdk.Provider
import AiSdk.Tool
import AiSdk.GenerateText

namespace AiSdk.Agent

/-- Result of an agent step -/
inductive StepResult where
  | finished (text : String) (usage : Usage)
  | toolCalled (calls : List ToolCall) (usage : Usage)
  deriving Repr, Inhabited

/-- Process tool calls and return results messages -/
def processToolCalls (calls : List ToolCall) (tools : List AiSdk.Tool.Tool) : IO (List Message) := do
  let results ← calls.mapM fun call => do
    match tools.find? (·.definition.name == call.name) with
    | some tool =>
      try
        let output ← tool.execute call.arguments
        pure (Message.user s!"Tool {call.name} result: {output}") -- In reality, this should be a 'tool' role message
      catch e =>
        pure (Message.user s!"Tool {call.name} failed: {e}")
    | none =>
      pure (Message.user s!"Tool {call.name} not found")
  pure results

/-- Run a single turn of the agent loop -/
def runStep (model : Model) (messages : List Message) (tools : List AiSdk.Tool.Tool) 
    (settings : CallSettings := {}) : IO StepResult := do
  let toolDefs := tools.map (·.definition)
  let settingsWithTools := { settings with tools := toolDefs }
  
  match ← AiSdk.generateTextFromMessages model messages settingsWithTools with
  | .ok result =>
    if result.toolCalls.isEmpty then
      return .finished result.text result.usage
    else
      return .toolCalled result.toolCalls result.usage
  | .error e =>
    -- Simple error handling: return as text
    return .finished s!"Error: {e}" Usage.zero

end AiSdk.Agent

