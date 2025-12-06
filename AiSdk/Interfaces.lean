/-
  AiSdk/Interfaces.lean
  Definition of External Systems and Interfaces (The Imperative Shell).

  This file documents the boundaries of the system where side effects occur.
  The Shell is responsible for communicating with these external systems
  and converting their "dirty" output into "clean" Core types.
-/

namespace AiSdk

/--
  # External Systems

  The AI SDK interacts with several external AI Model Providers via HTTP APIs.
  Each provider implements a specific protocol (headers, JSON structure),
  but they all share a common communication pattern: Request/Response over HTTP.

  ## 1. OpenAI API
  - **URL**: `https://api.openai.com/v1`
  - **Protocol**: HTTPS POST
  - **Auth**: Bearer Token in `Authorization` header.
  - **Format**: JSON
  - **Capabilities**: Chat Completions (`/chat/completions`)

  ## 2. Anthropic API
  - **URL**: `https://api.anthropic.com/v1`
  - **Protocol**: HTTPS POST
  - **Auth**: `x-api-key` header.
  - **Versioning**: Requires `anthropic-version` header.
  - **Format**: JSON
  - **Capabilities**: Messages (`/messages`)

  ## 3. Google Gemini API
  - **URL**: `https://generativelanguage.googleapis.com/v1beta`
  - **Protocol**: HTTPS POST
  - **Auth**: API key in query parameter (`?key=...`).
  - **Format**: JSON
  - **Capabilities**: Generate Content (`models/{model}:generateContent`)

  ## 4. xAI (Grok) API
  - **URL**: `https://api.x.ai/v1`
  - **Protocol**: HTTPS POST
  - **Auth**: Bearer Token in `Authorization` header.
  - **Format**: JSON (OpenAI Compatible)
  - **Capabilities**: Chat Completions (`/chat/completions`)

  # The Interface Boundary

  The interface between the Functional Core and the External Systems is defined
  by the `HttpClient` library and the `RawRequest` structure.

  ## The Boundary Contract
  1. **Core -> Shell**: The Core produces a `RawRequest` (pure data description of an HTTP request).
  2. **Shell -> System**: The Shell executes this request using `HttpClient`.
  3. **System -> Shell**: The System returns an HTTP Response (status, headers, body).
  4. **Shell -> Core**: The Shell passes the raw response body (String) to the Core's parser.

  ## Side Effects
  The following side effects are contained strictly within the Shell (`GenerateFn` implementations):
  - Network I/O (DNS resolution, TCP connection, TLS handshake)
  - Data transmission (sending request body)
  - Data reception (reading response body)
  - System time access (for timeouts/logging)
  - File I/O (reading configuration/API keys)
-/

end AiSdk

