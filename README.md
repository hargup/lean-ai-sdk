# Lean4 AI SDK

A minimal AI SDK for Lean4, supporting Anthropic Claude and Google Gemini models. Inspired by Vercel's AI SDK.

## Features

- ✅ Support for Anthropic Claude models
- ✅ Support for Google Gemini models
- ✅ Simple, type-safe API
- ✅ Configuration file support (~/.ai-sdk.config)
- ✅ Environment variable fallback

## Installation

This SDK requires [Lean 4.25.2](https://leanprover.github.io/) and the [http-client](https://github.com/hargup/lean-http-client) library.

```bash
cd ai-sdk
lake update
lake build
```

## Usage

### As a Library

```lean
import AiSdk

def main : IO Unit := do
  -- Create a Google Gemini model
  match ← AiSdk.google with
  | .error e => IO.eprintln s!"Error: {e}"
  | .ok model =>
    -- Generate text
    match ← AiSdk.generateText model "What is 2+2?" with
    | .error e => IO.eprintln s!"Error: {e}"
    | .ok result =>
      IO.println result.text
      IO.println s!"Tokens: {result.usage.inputTokens}→{result.usage.outputTokens}"
```

### With Custom Settings

```lean
import AiSdk

def main : IO Unit := do
  match ← AiSdk.anthropic "claude-opus-4-20250514" with
  | .error e => IO.eprintln s!"Error: {e}"
  | .ok model =>
    let settings : CallSettings := {
      temperature := some 0.7
      maxTokens := some 1000
      topP := some 0.9
    }
    match ← AiSdk.generateText model "Write a haiku" settings with
    | .error e => IO.eprintln s!"Error: {e}"
    | .ok result => IO.println result.text
```

### With System Prompts

```lean
match ← AiSdk.generateTextWithSystem model
  "You are a helpful assistant that speaks like a pirate."
  "What is the capital of France?" with
| .error e => IO.eprintln s!"Error: {e}"
| .ok result => IO.println result.text
```

## Configuration

API keys can be provided in three ways (in order of precedence):

1. **Function parameter**:
   ```lean
   AiSdk.google "gemini-2.0-flash" (some "your-api-key")
   ```

2. **Config file** (`~/.ai-sdk.config`):
   ```
   GOOGLE_API_KEY=your-google-key
   ANTHROPIC_API_KEY=your-anthropic-key
   ```

3. **Environment variables**:
   ```bash
   export GOOGLE_API_KEY=your-google-key
   export ANTHROPIC_API_KEY=your-anthropic-key
   ```

## API Reference

### Models

```lean
-- Create Anthropic Claude model
def anthropic (modelId : String := "claude-sonnet-4-20250514")
    (apiKey : Option String := none) : IO (ApiResult Model)

-- Create Google Gemini model
def google (modelId : String := "gemini-2.0-flash")
    (apiKey : Option String := none) : IO (ApiResult Model)
```

### Text Generation

```lean
-- Generate text from a prompt
def generateText (model : Model) (prompt : String)
    (settings : CallSettings := {}) : IO (ApiResult GenerateTextResult)

-- Generate text with system prompt
def generateTextWithSystem (model : Model) (system : String) (prompt : String)
    (settings : CallSettings := {}) : IO (ApiResult GenerateTextResult)

-- Generate from message list
def generateTextFromMessages (model : Model) (messages : List Message)
    (settings : CallSettings := {}) : IO (ApiResult GenerateTextResult)
```

### Types

```lean
structure CallSettings where
  temperature : Option Float := none
  maxTokens : Option Nat := none
  topP : Option Float := none
  topK : Option Nat := none
  stopSequences : List String := []

structure GenerateTextResult where
  text : String
  finishReason : FinishReason
  usage : Usage

structure Usage where
  inputTokens : Nat
  outputTokens : Nat
```

## CLI Application

See [cli-ai](../cli-ai/README.md) for the command-line interface.

## Dependencies

- Lean 4.25.2
- [hargup/lean-http-client](https://github.com/hargup/lean-http-client)

## License

MIT
