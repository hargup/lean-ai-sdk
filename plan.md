# Lean4 AI SDK Implementation Plan

## Overview

Create a Lean4 AI SDK mirroring Vercel's AI SDK structure, supporting Google (Gemini) and Anthropic models. The SDK will use `lean-http-client` from `/Users/harshwork/code/thecentralhub/lean_learning/http-client` for HTTP requests.

## Project Structure

```
/Users/harshwork/code/thecentralhub/lean_learning/
├── ai-sdk/                          # Main AI SDK library
│   ├── lakefile.lean                # Lake build configuration
│   ├── lean-toolchain               # Lean version
│   ├── AiSdk.lean                   # Main entry point
│   └── AiSdk/
│       ├── Types.lean               # Core types (Message, Role, etc.)
│       ├── Json.lean                # JSON serialization utilities
│       ├── Provider.lean            # Provider typeclass/interface
│       ├── Config.lean              # Configuration and API key loading
│       ├── GenerateText.lean        # generateText function
│       └── Providers/
│           ├── Anthropic.lean       # Anthropic Claude provider
│           └── Google.lean          # Google Gemini provider
│
└── cli-ai/                          # CLI application
    ├── lakefile.lean
    ├── lean-toolchain
    └── Main.lean                    # CLI entry point
```

## Package 1: ai-sdk

### 1.1 Core Types (`AiSdk/Types.lean`)

```lean
-- Message roles
inductive Role where
  | system | user | assistant
  deriving Repr, BEq

-- Content types (text-only for now, extensible later)
inductive ContentPart where
  | text (value : String)
  deriving Repr

-- Message structure
structure Message where
  role : Role
  content : String  -- Simple string content for now
  deriving Repr

-- Generation settings
structure CallSettings where
  temperature : Option Float := none
  maxTokens : Option Nat := none
  topP : Option Float := none
  topK : Option Nat := none
  stopSequences : List String := []
  deriving Repr, Inhabited

-- Token usage tracking
structure Usage where
  inputTokens : Nat
  outputTokens : Nat
  deriving Repr

-- Finish reasons
inductive FinishReason where
  | stop | length | toolUse | contentFilter | other
  deriving Repr, BEq

-- Result of text generation
structure GenerateTextResult where
  text : String
  finishReason : FinishReason
  usage : Usage
  deriving Repr
```

### 1.2 JSON Utilities (`AiSdk/Json.lean`)

Use Lean4's built-in `Lean.Json` for JSON serialization/deserialization:
- Helper functions for building JSON objects
- Parsing API responses
- Converting between SDK types and JSON

### 1.3 Configuration (`AiSdk/Config.lean`)

```lean
-- API configuration
structure ApiConfig where
  anthropicApiKey : Option String := none
  googleApiKey : Option String := none
  deriving Repr, Inhabited

-- Load config from file (~/.ai-sdk.config)
def loadConfig : IO ApiConfig

-- Load from environment variables as fallback
def loadFromEnv : IO ApiConfig
```

### 1.4 Provider Interface (`AiSdk/Provider.lean`)

```lean
-- Error types
inductive ApiError where
  | httpError (status : Nat) (body : String)
  | parseError (msg : String)
  | configError (msg : String)
  | networkError (msg : String)
  deriving Repr

abbrev ApiResult (α : Type) := Except ApiError α

-- Provider typeclass
class Provider (p : Type) where
  name : String
  generate : p → List Message → CallSettings → IO (ApiResult GenerateTextResult)

-- Model wrapper
structure Model where
  provider : String
  modelId : String
  generateFn : List Message → CallSettings → IO (ApiResult GenerateTextResult)
```

### 1.5 Anthropic Provider (`AiSdk/Providers/Anthropic.lean`)

API endpoint: `https://api.anthropic.com/v1/messages`

Headers:
- `Content-Type: application/json`
- `x-api-key: {ANTHROPIC_API_KEY}`
- `anthropic-version: 2023-06-01`

Request format:
```json
{
  "model": "claude-sonnet-4-20250514",
  "max_tokens": 1024,
  "messages": [{"role": "user", "content": "Hello"}]
}
```

Response parsing:
- Extract `content[0].text`
- Map `stop_reason` to `FinishReason`
- Extract `usage.input_tokens` and `usage.output_tokens`

### 1.6 Google/Gemini Provider (`AiSdk/Providers/Google.lean`)

API endpoint: `https://generativelanguage.googleapis.com/v1beta/models/{model}:generateContent?key={API_KEY}`

Headers:
- `Content-Type: application/json`

Request format:
```json
{
  "contents": [{"role": "user", "parts": [{"text": "Hello"}]}],
  "generationConfig": {"temperature": 0.7, "maxOutputTokens": 1024}
}
```

Response parsing:
- Extract `candidates[0].content.parts[0].text`
- Map `finishReason` to `FinishReason`
- Extract `usageMetadata`

### 1.7 Main API (`AiSdk/GenerateText.lean`)

```lean
-- Main generateText function
def generateText (model : Model) (prompt : String)
    (settings : CallSettings := {}) : IO (ApiResult GenerateTextResult) := do
  let messages := [{ role := .user, content := prompt }]
  model.generateFn messages settings

-- With system prompt
def generateTextWithSystem (model : Model) (system : String) (prompt : String)
    (settings : CallSettings := {}) : IO (ApiResult GenerateTextResult)
```

### 1.8 Main Entry (`AiSdk.lean`)

```lean
import AiSdk.Types
import AiSdk.Provider
import AiSdk.Config
import AiSdk.GenerateText
import AiSdk.Providers.Anthropic
import AiSdk.Providers.Google

namespace AiSdk

-- Create Anthropic model
def anthropic (modelId : String := "claude-sonnet-4-20250514")
    (apiKey : Option String := none) : IO Model

-- Create Google model
def google (modelId : String := "gemini-2.0-flash")
    (apiKey : Option String := none) : IO Model

end AiSdk
```

## Package 2: cli-ai

### 2.1 CLI Features

- Interactive chat mode (REPL)
- Single prompt mode
- Model selection (--provider, --model)
- Configuration display
- History (optional, stretch goal)

### 2.2 Main CLI (`cli-ai/Main.lean`)

```lean
def main (args : List String) : IO UInt32 := do
  -- Parse arguments
  -- Load config from ~/.ai-sdk.config
  -- Create appropriate model
  -- Run interactive or single-shot mode
```

### 2.3 CLI Usage

```bash
# Interactive mode (default)
$ ./cli-ai
> Hello, how are you?
I'm doing well, thank you for asking!
> /quit

# Single prompt
$ ./cli-ai --prompt "What is 2+2?"
4

# Specify provider/model
$ ./cli-ai --provider anthropic --model claude-opus-4-20250514
$ ./cli-ai --provider google --model gemini-pro
```

## Configuration Setup

### ~/.ai-sdk.config Format

Copy from `/Users/harshwork/code/thecentralhub/.env`:
```
GOOGLE_API_KEY=AIzaSyASf8PwqVybfD_w6ZuYtEcc_P1LnBNxGDM
ANTHROPIC_API_KEY=sk-ant-api03-...
```

## Lakefile Configuration

### ai-sdk/lakefile.lean
```lean
import Lake
open Lake DSL

package "ai-sdk" where

require "http-client" from "../http-client"

lean_lib "AiSdk" where
```

### cli-ai/lakefile.lean
```lean
import Lake
open Lake DSL

package "cli-ai" where

require "ai-sdk" from "../ai-sdk"

@[default_target]
lean_exe "cli-ai" where
  root := `Main
```

## Implementation Order

1. **ai-sdk package setup** - lakefile.lean, lean-toolchain
2. **Core types** - AiSdk/Types.lean
3. **JSON utilities** - AiSdk/Json.lean
4. **Config loading** - AiSdk/Config.lean
5. **Provider interface** - AiSdk/Provider.lean
6. **Anthropic provider** - AiSdk/Providers/Anthropic.lean
7. **Google provider** - AiSdk/Providers/Google.lean
8. **GenerateText** - AiSdk/GenerateText.lean
9. **Main entry** - AiSdk.lean
10. **cli-ai package** - lakefile.lean, Main.lean
11. **Copy .env to ~/.ai-sdk.config**
12. **Build and test**

## Key Files to Create

| File | Purpose |
|------|---------|
| `ai-sdk/lakefile.lean` | Package configuration with http-client dependency |
| `ai-sdk/lean-toolchain` | `leanprover/lean4:v4.25.2` (matches http-client) |
| `ai-sdk/AiSdk.lean` | Main library entry |
| `ai-sdk/AiSdk/Types.lean` | Core types |
| `ai-sdk/AiSdk/Json.lean` | JSON helpers |
| `ai-sdk/AiSdk/Config.lean` | Config loading |
| `ai-sdk/AiSdk/Provider.lean` | Provider interface |
| `ai-sdk/AiSdk/Providers/Anthropic.lean` | Anthropic implementation |
| `ai-sdk/AiSdk/Providers/Google.lean` | Google implementation |
| `ai-sdk/AiSdk/GenerateText.lean` | Main API |
| `cli-ai/lakefile.lean` | CLI package config |
| `cli-ai/lean-toolchain` | Same as ai-sdk |
| `cli-ai/Main.lean` | CLI application |

## Dependencies

- Uses `http-client` from `/Users/harshwork/code/thecentralhub/lean_learning/http-client`
- Uses Lean4 built-in JSON (`Lean.Json`)
- Uses Lean4 file IO for config loading

## API Key Handling

1. Check if passed directly to function
2. Check `~/.ai-sdk.config` file
3. Check environment variables (ANTHROPIC_API_KEY, GOOGLE_API_KEY)
4. Fail with helpful error message if not found
