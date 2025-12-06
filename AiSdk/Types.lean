/-
  AiSdk/Types.lean
  Core types for the AI SDK
-/

import Lean.Data.Json

namespace AiSdk

open Lean (Json)

instance : Repr Json where
  reprPrec j _ := j.compress

/-- Supported AI Providers -/
inductive Provider where
  | openai
  | anthropic
  | google
  | xai
  | ollama
  deriving Repr, BEq, Inhabited

namespace Provider
  def toString : Provider → String
    | openai => "openai"
    | anthropic => "anthropic"
    | google => "google"
    | xai => "xai"
    | ollama => "ollama"

  def fromString (s : String) : Option Provider :=
    match s.toLower with
    | "openai" => some openai
    | "anthropic" => some anthropic
    | "google" => some google
    | "xai" => some xai
    | "ollama" => some ollama
    | _ => none

  instance : ToString Provider where
    toString := Provider.toString
end Provider

/-- Message roles in a conversation -/
inductive Role where
  | system
  | user
  | assistant
  deriving Repr, BEq, Inhabited

namespace Role
  def toString : Role → String
    | system => "system"
    | user => "user"
    | assistant => "assistant"

  def fromString (s : String) : Option Role :=
    match s with
    | "system" => some system
    | "user" => some user
    | "assistant" => some assistant
    | _ => none

  instance : ToString Role where
    toString := Role.toString
end Role

open Lean (Json)

/-- A part of a message content -/
inductive ContentPart where
  | text (text : String)
  | image (data : String) (mimeType : String) -- Base64 encoded image
  | toolResult (toolCallId : String) (result : String)
  deriving Repr, BEq, Inhabited

/-- A message in a conversation -/
structure Message where
  role : Role
  content : List ContentPart
  deriving Repr, Inhabited

namespace Message
  /-- Create a system message -/
  def system (content : String) : Message :=
    { role := .system, content := [.text content] }

  /-- Create a user message from string -/
  def user (content : String) : Message :=
    { role := .user, content := [.text content] }

  /-- Create a user message from parts -/
  def userParts (parts : List ContentPart) : Message :=
    { role := .user, content := parts }

  /-- Create an assistant message -/
  def assistant (content : String) : Message :=
    { role := .assistant, content := [.text content] }

  /-- Create a tool result message (usually role is irrelevant or implicitly 'tool' based on content) -/
  def tool (toolCallId : String) (result : String) : Message :=
    { role := .user, content := [.toolResult toolCallId result] } -- Providers will remap role if needed
    
  /-- Helper to get text content from a message (concatenates all text parts) -/
  def textContent (m : Message) : String :=
    m.content.foldl (fun acc part =>
      match part with
      | .text t => acc ++ t
      | .toolResult _ res => acc ++ res -- Maybe include tool results in text content?
      | _ => acc
    ) ""
end Message

/-- Definition of a tool that can be called by the model -/
structure ToolDefinition where
  name : String
  description : String
  parameters : Json -- JSON Schema
  deriving Repr, Inhabited

/-- A request from the model to call a tool -/
structure ToolCall where
  id : String
  name : String
  arguments : Json -- Parsed arguments
  deriving Repr, Inhabited

/-- Settings for text generation -/
structure CallSettings where
  /-- Sampling temperature (0.0 to 1.0+) -/
  temperature : Option Float := none
  /-- Maximum tokens to generate -/
  maxTokens : Option Nat := none
  /-- Nucleus sampling parameter -/
  topP : Option Float := none
  /-- Top-K sampling parameter -/
  topK : Option Nat := none
  /-- Sequences that stop generation -/
  stopSequences : List String := []
  /-- Tools available to the model -/
  tools : List ToolDefinition := []
  /-- Force output format (e.g. JSON) -/
  jsonMode : Bool := false
  deriving Repr, Inhabited

/-- Token usage statistics -/
structure Usage where
  inputTokens : Nat
  outputTokens : Nat
  deriving Repr, Inhabited

namespace Usage
  def total (u : Usage) : Nat := u.inputTokens + u.outputTokens

  def zero : Usage := { inputTokens := 0, outputTokens := 0 }
end Usage

/-- Reasons why generation finished -/
inductive FinishReason where
  | stop           -- Normal completion
  | length         -- Hit max tokens
  | toolUse        -- Model wants to use a tool
  | contentFilter  -- Content was filtered
  | other          -- Unknown reason
  deriving Repr, BEq, Inhabited

namespace FinishReason
  def toString : FinishReason → String
    | stop => "stop"
    | length => "length"
    | toolUse => "tool_use"
    | contentFilter => "content_filter"
    | other => "other"

  instance : ToString FinishReason where
    toString := FinishReason.toString
end FinishReason

/-- Result of text generation -/
structure GenerateTextResult where
  /-- The generated text -/
  text : String
  /-- Why generation stopped -/
  finishReason : FinishReason
  /-- Token usage statistics -/
  usage : Usage
  /-- Tool calls made by the model -/
  toolCalls : List ToolCall := []
  deriving Repr, Inhabited

/-- API errors that can occur -/
inductive ApiError where
  | httpError (status : Nat) (body : String)
  | parseError (msg : String)
  | configError (msg : String)
  | networkError (msg : String)
  deriving Repr, Inhabited

namespace ApiError
  def toString : ApiError → String
    | httpError status body => s!"HTTP {status}: {body}"
    | parseError msg => s!"Parse error: {msg}"
    | configError msg => s!"Config error: {msg}"
    | networkError msg => s!"Network error: {msg}"

  instance : ToString ApiError where
    toString := ApiError.toString
end ApiError

/-- Result type for API operations -/
abbrev ApiResult (α : Type) := Except ApiError α

/-- A pure representation of an HTTP request (for Functional Core) -/
structure RawRequest where
  method : String
  url : String
  headers : List (String × String)
  body : String
  deriving Repr, Inhabited

/-- A chunk of a streaming response -/
inductive StreamChunk where
  | textDelta (text : String)
  | toolCallDelta (id : String) (argsText : String)
  | finish (reason : FinishReason) (usage : Usage)
  | error (msg : String)
  deriving Repr, Inhabited

/-- A stream of chunks -/
structure Stream (α : Type) where
  /-- Function to get the next chunk. Returns none if stream is closed. -/
  next : IO (Option α)

namespace Stream
  /-- Map a function over a stream -/
  def map {α β : Type} (f : α → IO β) (s : Stream α) : Stream β :=
    { next := do
        match ← s.next with
        | some a => 
          let b ← f a
          return some b
        | none => return none
    }

  /-- Filter and Map a stream -/
  partial def filterMap {α β : Type} (f : α → IO (Option β)) (s : Stream α) : Stream β :=
    { next := do
        let rec loop : IO (Option β) := do
          match ← s.next with
          | some a =>
            match ← f a with
            | some b => return some b
            | none => loop
          | none => return none
        loop
    }
end Stream

end AiSdk
