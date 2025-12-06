# Roadmap: Lean AI SDK

This roadmap aims to achieve feature compliance with [Vercel's AI SDK Core](https://sdk.vercel.ai/docs/ai-sdk-core), adapted for the Lean programming environment and adhering to the **Functional Core, Imperative Shell (FCIS)** architecture.

## 🏗 Phase 1: Multimodal & File Support (High Priority)
*Goal: Support images, files, and mixed content in messages.*

- [ ] **Refactor `Message` Content**: Change `content : String` to a mixed-media type (e.g., `List ContentPart`).
- [ ] **Define `ContentPart` Inductive Type**:
  - `text (s : String)`
  - `image (data : Base64) (mimeType : String)`
  - `file (data : Base64) (mimeType : String)`
- [ ] **Provider Updates**: Update `OpenAI`, `Anthropic`, `Google`, and `Xai` providers to serialize `ContentPart` into their respective JSON formats.
- [ ] **Helper Utilities**: Functions to load files/images from disk as Base64.

## 🛠 Phase 2: Tool Use & Function Calling
*Goal: Allow models to call defined functions (Tools).*

- [ ] **Tool Definition**: Create a structure for `Tool` that includes:
  - Name and Description.
  - Input Schema (JSON Schema).
  - Execution Logic (Lean function).
- [ ] **Schema Generation**: Utilities to generate JSON Schema from Lean types (for tool inputs).
- [ ] **API Request Update**: Add `tools` parameter to `generateText`.
- [ ] **Response Handling**: Handle `tool_calls` finish reason and parsed arguments.
- [ ] **The Agent Loop**: Implement a higher-level function that handles the "Model -> Tool Call -> Execution -> Model" loop.

## 📦 Phase 3: Structured Outputs (`generateObject`)
*Goal: Force the model to return data adhering to a specific schema/type.*

- [ ] **Type-Safe Schemas**: Leverage Lean's type system to define expected output structures.
- [ ] **`generateObject` Function**: A wrapper around `generateText` that:
  - Injects the schema into the system prompt or uses "JSON Mode" / "Structured Output" features of providers.
  - Parses the resulting JSON string into a Lean type.
  - Returns `Except` (Success/Failure) with validation proofs.

## 🌊 Phase 4: Streaming (`streamText`)
*Goal: Process responses chunk-by-chunk for real-time feedback.*

- [ ] **Streaming Interface**: Define a `Stream` type or callback mechanism in the Imperative Shell.
- [ ] **Provider Support**: Implement Server-Sent Events (SSE) parsing for `OpenAI`, `Anthropic`, `Google`, `Xai`.
- [ ] **Core Logic**: Pure function to parse incremental chunks into a coherent stream of events (`text-delta`, `tool-call-delta`, etc.).

## 🧠 Phase 5: Embeddings & RAG
*Goal: Support vector embeddings for semantic search.*

- [ ] **`embed` Function**: Single input embedding.
- [ ] **`embedMany` Function**: Batch embedding support.
- [ ] **Vector Operations**: `cosineSimilarity` and other distance metrics.

## 🛡 Phase 6: Middleware & Resilience
*Goal: Robustness and observability.*

- [ ] **Retry Logic**: Exponential backoff for rate limits (429) and server errors (5xx).
- [ ] **Hooks/Callbacks**: `onFinish`, `onStep` hooks for logging and tracing.
- [ ] **Mock Provider**: A provider for testing that returns deterministic responses without network calls.

## 🔮 Future: Framework Integration
- [ ] **HTTP Server Handlers**: Integration with a Lean web server (e.g., `Alloy` or `Http`) to serve API endpoints compatible with Vercel AI SDK frontend hooks.

