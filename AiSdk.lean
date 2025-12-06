/-
  AiSdk.lean
  Main entry point for the Lean4 AI SDK

  A minimal AI SDK for Lean4 supporting Anthropic Claude and Google Gemini models.

  ## Usage

  ```lean
  import AiSdk

  def main : IO Unit := do
    -- Create an Anthropic model
    match ← AiSdk.anthropic with
    | .error e => IO.eprintln s!"Error: {e}"
    | .ok model =>
      -- Generate text
      match ← AiSdk.generateText model "Hello, how are you?" with
      | .error e => IO.eprintln s!"Error: {e}"
      | .ok result => IO.println result.text
  ```
-/

import AiSdk.Types
import AiSdk.Json
import AiSdk.Config
import AiSdk.Provider
import AiSdk.Models
import AiSdk.GenerateText
import AiSdk.Providers.Anthropic
import AiSdk.Providers.Google
import AiSdk.Providers.OpenAI
import AiSdk.Providers.Xai

namespace AiSdk

/-- Create an Anthropic Claude model.
    If no API key is provided, loads from ~/.ai-sdk.config or ANTHROPIC_API_KEY env var. -/
def anthropic (modelId : String := Anthropic.defaultModel)
    (apiKey : Option String := none) : IO (ApiResult Model) :=
  Anthropic.create modelId apiKey

/-- Create a Google Gemini model.
    If no API key is provided, loads from ~/.ai-sdk.config or GOOGLE_API_KEY env var. -/
def google (modelId : String := Google.defaultModel)
    (apiKey : Option String := none) : IO (ApiResult Model) :=
  Google.create modelId apiKey

/-- Alias for google -/
def gemini (modelId : String := Google.defaultModel)
    (apiKey : Option String := none) : IO (ApiResult Model) :=
  google modelId apiKey

/-- Create an OpenAI GPT model.
    If no API key is provided, loads from ~/.ai-sdk.config or OPENAI_API_KEY env var. -/
def openai (modelId : String := OpenAI.defaultModel)
    (apiKey : Option String := none) : IO (ApiResult Model) :=
  OpenAI.create modelId apiKey

/-- Alias for openai -/
def gpt (modelId : String := OpenAI.defaultModel)
    (apiKey : Option String := none) : IO (ApiResult Model) :=
  openai modelId apiKey

/-- Create an xAI Grok model.
    If no API key is provided, loads from ~/.ai-sdk.config or XAI_API_KEY env var. -/
def xai (modelId : String := Xai.defaultModel)
    (apiKey : Option String := none) : IO (ApiResult Model) :=
  Xai.create modelId apiKey

/-- Alias for xai -/
def grok (modelId : String := Xai.defaultModel)
    (apiKey : Option String := none) : IO (ApiResult Model) :=
  xai modelId apiKey

end AiSdk
