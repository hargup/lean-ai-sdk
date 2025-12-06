# Lean4 AI SDK

A minimal AI SDK for Lean4, supporting **OpenAI**, **Anthropic Claude**, **Google Gemini**, **xAI** (Grok), and **Ollama** models. Designed with the "Functional Core, Imperative Shell" pattern. Inspired by Vercel's AI SDK.

## Features

- ✅ **Universal Provider Support**: OpenAI, Anthropic, Google, xAI, Ollama
- ✅ **Streaming**: Real-time response streaming (`streamText`)
- ✅ **Structured Outputs**: Type-safe JSON generation (`generateObject`)
- ✅ **Multimodal**: Support for images in messages
- ✅ **Tool Use**: Function calling support (Providers & Agents)
- ✅ **Simple API**: Type-safe, functional, and composable
- ✅ **Configuration**: `.ai-sdk.config` file or environment variables

## Installation

Add this to your `lakefile.lean`:

```lean
require "ai-sdk" from git "https://github.com/hargup/lean-ai-sdk"
```

Then run:

```bash
lake update
```

## Usage

### Basic Text Generation

```lean
import AiSdk

def main : IO Unit := do
  -- Create a Google Gemini model
  match ← AiSdk.google "gemini-2.0-flash" with
  | .error e => IO.eprintln s!"Error: {e}"
  | .ok model =>
    -- Generate text
    match ← AiSdk.generateText model "What is 2+2?" with
    | .error e => IO.eprintln s!"Error: {e}"
    | .ok result =>
      IO.println result.text
      IO.println s!"Tokens: {result.usage.inputTokens}→{result.usage.outputTokens}"
```

### Streaming Responses

```lean
import AiSdk

def main : IO Unit := do
  match ← AiSdk.openai "gpt-4o" with
  | .ok model =>
    match ← AiSdk.streamText model "Tell me a story" with
    | .ok stream =>
      let mut fullText := ""
      let chunkStream := stream.filterMap fun chunk => do
        match chunk with
        | .textDelta text => 
          IO.print text -- Print chunk as it arrives
          return some text
        | _ => return none
      
      -- Consume the stream
      for chunk in chunkStream do
        fullText := fullText ++ chunk
        
      IO.println "\n--- Done ---"
    | .error e => IO.eprintln s!"Error: {e}"
  | .error e => IO.eprintln s!"Error: {e}"
```

### Local LLMs with Ollama

```lean
import AiSdk

def main : IO Unit := do
  -- Uses http://localhost:11434 by default
  match ← AiSdk.ollama "llama3" with 
  | .ok model =>
    match ← AiSdk.generateText model "Explain quantum physics simply" with
    | .ok result => IO.println result.text
    | .error e => IO.eprintln s!"Error: {e}"
  | .error e => IO.eprintln s!"Error: {e}"
```

### Multimodal (Images)

```lean
import AiSdk

def main : IO Unit := do
  let imageBase64 := "..." -- Load your base64 image
  let message := Message.userParts [
    .text "What is in this image?",
    .image imageBase64 "image/png"
  ]
  
  match ← AiSdk.anthropic "claude-3-opus-20240229" with
  | .ok model =>
    match ← AiSdk.generateTextFromMessages model [message] with
    | .ok result => IO.println result.text
    | .error e => IO.eprintln s!"Error: {e}"
  | _ => pure ()
```

### Structured Outputs (JSON)

```lean
import AiSdk

def main : IO Unit := do
  let schema := Json.mkObj [
    ("type", "object"),
    ("properties", Json.mkObj [
      ("setup", Json.mkObj [("type", "string")]),
      ("punchline", Json.mkObj [("type", "string")])
    ])
  ]
  
  match ← AiSdk.openai "gpt-4-turbo" with
  | .ok model =>
    match ← AiSdk.generateObject model "Tell me a joke" schema with
    | .ok json => IO.println json.compress
    | .error e => IO.eprintln s!"Error: {e}"
  | _ => pure ()
```

## Configuration

API keys can be provided in three ways (in order of precedence):

1. **Function parameter**:
   ```lean
   AiSdk.google "gemini-2.0-flash" (some "your-api-key")
   ```

2. **Config file** (`~/.ai-sdk.config`):
   ```bash
   GOOGLE_API_KEY=your-google-key
   ANTHROPIC_API_KEY=your-anthropic-key
   OPENAI_API_KEY=your-openai-key
   XAI_API_KEY=your-xai-key
   # Optional extras
   ollama_base_url=http://localhost:11434
   ```

3. **Environment variables**:
   ```bash
   export GOOGLE_API_KEY=your-google-key
   export ANTHROPIC_API_KEY=your-anthropic-key
   ```

## Requirements

- [Lean 4.25.2](https://leanprover.github.io/)
- [curl](https://curl.se/) (installed on system for HTTP/Streaming)

## License

MIT
