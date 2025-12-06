# Lean4 AI SDK Roadmap

## ✅ Phase 1: Functional Core, Imperative Shell
*Goal: Establish a clean, testable architecture.*

- [x] **Refactoring**: Separate pure logic (request/response processing) from side effects (HTTP/IO).
- [x] **Providers**: Refactor `OpenAI`, `Anthropic`, `Google`, `Xai` to follow FCIS.
- [x] **Testing**: Add unit tests for pure core functions.

## ✅ Phase 2: Multimodal Support
*Goal: Support images and other content types.*

- [x] **Data Types**: Update `ContentPart` to support `image` (base64).
- [x] **Provider Updates**: Update request builders for multimodal inputs.
- [x] **Testing**: Add multimodal test cases.

## ✅ Phase 3: Structured Outputs
*Goal: Generate JSON and type-safe objects.*

- [x] **`generateObject`**: Implement generic function for typed output.
- [x] **JSON Mode**: Support `jsonMode` in `CallSettings` and providers.
- [x] **Validation**: Verify output against schema (basic).

## ✅ Phase 4: Streaming
*Goal: Real-time response streaming.*

- [x] **Types**: Define `StreamChunk` and `Stream` types.
- [x] **Parsers**: Implement SSE parsers for OpenAI, Anthropic, Google, Ollama.
- [x] **Execution**: Implement `streamText` and `streamRequest` logic.
- [x] **Ollama**: Add full Ollama support (local LLMs).

## 🌊 Phase 5: Helpers & DX (Current)
*Goal: Improve developer experience and utility.*

- [ ] **`streamObject`**: Streaming partial JSON parsing.
- [ ] **`streamUI`**: Helpers for streaming UI components (e.g., for web integration).
- [ ] **File Helpers**: Utilities for reading files as base64/text.
- [ ] **CLI**: Update CLI to support new features (streaming, images).

## 🛡️ Phase 6: Robustness & Security
*Goal: Production-readiness.*

- [ ] **Retries**: Implement exponential backoff for failed requests.
- [ ] **Rate Limiting**: Basic handling of 429 responses.
- [ ] **Secrets Management**: Better handling of API keys (keychain integration?).
