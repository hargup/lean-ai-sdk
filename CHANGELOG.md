# Changelog

All notable changes to this project will be documented in this file.

## [Unreleased]

### Added
- **Streaming Support**: Added `streamText` and `streamTextFromMessages` for real-time responses.
- **Ollama Provider**: Added support for local LLMs via Ollama (`AiSdk.ollama`).
- **Multimodal Support**: `Message` content now supports images via `ContentPart.image`.
- **Tool Use**: Added `ToolDefinition` and `ToolCall` types for function calling.
- **Structured Outputs**: Added `generateObject` for type-safe JSON generation.
- **JSON Mode**: Added `jsonMode` to `CallSettings`.
- **Configuration**: Added support for `extras` in config (e.g., `ollama_base_url`).
- **Tests**: Added comprehensive unit tests for core logic and streaming parsers.

### Changed
- **Architecture**: Refactored to "Functional Core, Imperative Shell" pattern for better testability.
- **Providers**: `Provider` is now an inductive type instead of a string.
- **HTTP Client**: Switched to `HttpClient.Request.post` and optimized request building.
- **Stream Handling**: Implemented custom `curl`-based streaming to bypass buffering.

### Fixed
- **Git**: Removed `.lake/` build artifacts from version control.
- **Types**: Improved type definitions for `Message`, `ContentPart`, and `FinishReason`.

