/-
  Tests/CoreTests.lean
  Unit tests for Functional Core logic (Providers)
-/

import AiSdk.Types
import AiSdk.Providers.OpenAI
import AiSdk.Providers.Anthropic
import AiSdk.Providers.Google
import AiSdk.Providers.Ollama
import AiSdk.Json

open AiSdk
open Lean (Json ToJson)

def assertEq {α : Type} [BEq α] [Repr α] (actual : α) (expected : α) (msg : String := "") : IO Unit := do
  if actual != expected then
    throw <| IO.userError s!"Assertion failed: {msg}\nExpected: {repr expected}\nActual:   {repr actual}"
  else
    IO.println s!"✅ {msg}"

def main : IO Unit := do
  IO.println "Running Core Tests..."

  -- Test 1: OpenAI Request Building (Text)
  let messages := [Message.user "Hello"]
  let settings : CallSettings := { temperature := some 0.7 }
  let json := AiSdk.OpenAI.Core.buildRequestJson "gpt-4o" messages settings
  
  let model := AiSdk.Json.getFieldStr json "model"
  assertEq model (some "gpt-4o") "OpenAI model correct"
  
  -- Test 2: Anthropic Request Building (Multimodal)
  let parts := [
    ContentPart.text "Look at this:",
    ContentPart.image "base64data" "image/png"
  ]
  let messages2 := [Message.userParts parts]
  let json2 := AiSdk.Anthropic.Core.buildRequestJson "claude-3-opus" messages2 {}
  
  let msgArr := AiSdk.Json.getFieldArr json2 "messages" |>.getD #[]
  assertEq msgArr.size 1 "Anthropic messages length"
  
  let contentArr := AiSdk.Json.getFieldArr msgArr[0]! "content" |>.getD #[]
  assertEq contentArr.size 2 "Anthropic content parts length"

  -- Test 3: Tool Result handling (OpenAI)
  let toolMsg := Message.tool "call_123" "42"
  let json3 := AiSdk.OpenAI.Core.buildRequestJson "gpt-4o" [toolMsg] {}
  let msgs3 := AiSdk.Json.getFieldArr json3 "messages" |>.getD #[]
  let role3 := AiSdk.Json.getFieldStr msgs3[0]! "role"
  assertEq role3 (some "tool") "OpenAI tool role mapping"

  -- Test 4: OpenAI Streaming Parse (Text Delta)
  let deltaJson := Json.mkObj [
    ("choices", Json.arr #[
      Json.mkObj [("delta", Json.mkObj [("content", "Hello")])]
    ])
  ]
  let chunk := AiSdk.OpenAI.Core.parseStreamChunk deltaJson
  match chunk with
  | some (.textDelta t) => assertEq t "Hello" "OpenAI text delta parsed"
  | _ => throw <| IO.userError "Failed to parse OpenAI text delta"

  -- Test 5: Ollama Streaming Parse (Text Delta)
  let ollamaJson := Json.mkObj [
    ("message", Json.mkObj [
      ("role", "assistant"),
      ("content", "World")
    ]),
    ("done", false)
  ]
  let chunk2 := AiSdk.Ollama.Core.parseStreamChunk ollamaJson
  match chunk2 with
  | some (.textDelta t) => assertEq t "World" "Ollama text delta parsed"
  | _ => throw <| IO.userError "Failed to parse Ollama text delta"

  IO.println "All tests passed!"
