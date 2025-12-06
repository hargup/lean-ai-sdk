/-
  AiSdk/Tool.lean
  Tool definition and execution logic
-/

import AiSdk.Types
import AiSdk.Json
import Lean.Data.Json

namespace AiSdk.Tool

open Lean (Json ToJson FromJson)

/-- A tool with execution logic -/
structure Tool where
  definition : ToolDefinition
  execute : Json → IO String

/-- Create a tool from a function (simplified) -/
-- Note: In a full implementation, we would use metaprogramming to auto-generate schemas.
def create (name : String) (description : String) (parameters : Json) 
    (fn : Json → IO String) : Tool :=
  { definition := { name := name, description := description, parameters := parameters },
    execute := fn }

end AiSdk.Tool

