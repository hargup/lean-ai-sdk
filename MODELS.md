# Supported AI Models

This document lists all supported AI models across Google Gemini, Anthropic Claude, OpenAI, and xAI providers.

## Google Gemini Models

### Stable Models (Recommended for Production)

| Model ID | Name | Description | Context Window | Best For |
|----------|------|-------------|----------------|----------|
| `gemini-2.5-flash` | Gemini 2.5 Flash | **Default** - Best price-performance for large-scale processing | 1M input / 65K output | High-volume tasks, agentic workflows, thinking tasks |
| `gemini-2.5-flash-lite` | Gemini 2.5 Flash-Lite | Fastest flash model, optimized for cost-efficiency | 1M input / 65K output | High throughput, cost-sensitive applications |
| `gemini-2.5-pro` | Gemini 2.5 Pro | Advanced reasoning over code, math, STEM | 1M input / 65K output | Complex problem-solving, code analysis |
| `gemini-2.5-flash-image` | Gemini 2.5 Flash Image | Image generation and understanding | 65K input / 32K output | Image tasks |
| `gemini-2.0-flash` | Gemini 2.0 Flash | Second generation workhorse | 1M input / 8K output | General purpose, legacy support |
| `gemini-2.0-flash-lite` | Gemini 2.0 Flash-Lite | Cost-efficient small model | 1M input / 8K output | Low-cost applications |

### Preview/Experimental Models

| Model ID | Name | Status | Description |
|----------|------|--------|-------------|
| `gemini-3-pro-preview` | Gemini 3 Pro | Preview | Next-gen multimodal understanding |
| `gemini-3-pro-image-preview` | Gemini 3 Pro Image | Preview | Next-gen image generation |
| `gemini-2.5-flash-preview-09-2025` | Gemini 2.5 Flash Preview | Preview | Latest preview version |
| `gemini-2.5-flash-native-audio-preview-09-2025` | Gemini 2.5 Flash Live | Preview | Audio streaming variant |

### Key Features by Model

**All Gemini 2.5 Models Support:**
- ✅ Text input/output
- ✅ Function calling
- ✅ Structured outputs
- ✅ Batch API
- ✅ Caching
- ✅ Code execution
- ✅ 1M+ token context windows

**Gemini 2.5 Flash Unique Features:**
- ✅ Thinking mode for complex reasoning
- ✅ Optimized for agentic workflows
- ✅ Best price-performance ratio
- ✅ Low latency at scale

## Anthropic Claude Models

### Available Models

| Model ID | Name | Description | Context Window | Best For |
|----------|------|-------------|----------------|----------|
| `claude-sonnet-4-20250514` | Claude Sonnet 4 | **Default** - Balanced performance | 200K | General purpose, balanced tasks |
| `claude-opus-4-20250514` | Claude Opus 4 | Most capable model | 200K | Complex reasoning, creative tasks |
| `claude-haiku-3-20240307` | Claude Haiku 3 | Fastest model | 200K | Quick responses, simple tasks |

### Claude Model Features

**All Claude Models Support:**
- ✅ Text input/output
- ✅ Vision (image understanding)
- ✅ Tool use / function calling
- ✅ Large context windows (200K tokens)
- ✅ Strong reasoning capabilities

**Claude Opus 4 Unique Features:**
- ✅ Best-in-class reasoning
- ✅ Complex task handling
- ✅ Extended thinking capabilities

## OpenAI GPT Models

### Available Models

| Model ID | Name | Description | Context Window | Best For |
|----------|------|-------------|----------------|----------|
| `gpt-4o` | GPT-4o | **Default** - Optimized for chat and multimodal tasks | 128K | General purpose, chat, vision |
| `gpt-4o-mini` | GPT-4o Mini | Smaller, faster, more affordable | 128K | Cost-sensitive applications |
| `gpt-4-turbo` | GPT-4 Turbo | High-capability with vision support | 128K | Complex tasks, vision |
| `o1` | o1 | Advanced reasoning model | 200K | Complex reasoning, STEM |
| `o1-mini` | o1 Mini | Fast reasoning model | 128K | Quick reasoning tasks |
| `o3-mini` | o3 Mini | Latest generation mini reasoning | 200K | Balanced reasoning and speed |

### OpenAI Model Features

**All GPT-4 Models Support:**
- ✅ Text input/output
- ✅ Vision (image understanding)
- ✅ Function calling / tool use
- ✅ JSON mode
- ✅ Large context windows

**o1/o3 Reasoning Models:**
- ✅ Chain-of-thought reasoning
- ✅ Complex problem solving
- ✅ STEM and coding tasks

## xAI Grok Models

### Available Models

| Model ID | Name | Description | Context Window | Best For |
|----------|------|-------------|----------------|----------|
| `grok-3` | Grok 3 | **Default** - Balanced performance | 131K | General purpose tasks |
| `grok-3-fast` | Grok 3 Fast | Optimized for speed | 131K | Low-latency applications |
| `grok-3-mini` | Grok 3 Mini | Smaller, faster model | 131K | Simple tasks, cost-sensitive |
| `grok-3-mini-fast` | Grok 3 Mini Fast | Fastest variant | 131K | Maximum speed |
| `grok-2` | Grok 2 | Previous generation | 131K | Legacy support |

### xAI Model Features

**All Grok Models Support:**
- ✅ Text input/output
- ✅ Real-time knowledge (trained on X/Twitter data)
- ✅ Function calling
- ✅ Large context windows
- ✅ OpenAI-compatible API

## Model Selection Guide

### For CLI Usage

```bash
# Use default (Gemini 2.5 Flash - recommended)
./cli-ai

# Use Gemini Pro for complex reasoning
./cli-ai --model gemini-2.5-pro

# Use Claude Opus for advanced tasks
./cli-ai --provider anthropic --model claude-opus-4-20250514

# Use OpenAI GPT-4o
./cli-ai --provider openai

# Use xAI Grok
./cli-ai --provider xai

# Switch models in interactive mode
> /model google gemini-2.5-flash
> /model anthropic claude-sonnet-4-20250514
> /model openai gpt-4-turbo
> /model xai grok-3-fast
```

### For Library Usage

```lean
-- Default Gemini 2.5 Flash
match ← AiSdk.google with
| .ok model => ...

-- Specific Gemini model
match ← AiSdk.google "gemini-2.5-pro" with
| .ok model => ...

-- Default Claude Sonnet
match ← AiSdk.anthropic with
| .ok model => ...

-- Specific Claude model
match ← AiSdk.anthropic "claude-opus-4-20250514" with
| .ok model => ...

-- Default OpenAI GPT-4o
match ← AiSdk.openai with
| .ok model => ...

-- Specific OpenAI model
match ← AiSdk.openai "gpt-4-turbo" with
| .ok model => ...

-- Default xAI Grok 3
match ← AiSdk.xai with
| .ok model => ...

-- Specific xAI model
match ← AiSdk.xai "grok-3-fast" with
| .ok model => ...
```

## Default Models

- **Google Default**: `gemini-2.5-flash` (best price-performance)
- **Anthropic Default**: `claude-sonnet-4-20250514` (balanced)
- **OpenAI Default**: `gpt-4o` (optimized for chat)
- **xAI Default**: `grok-3` (balanced performance)

## Model Versioning

### Stability Levels

1. **Stable** - Recommended for production use
2. **Preview** - Can be used in production, 2+ weeks notice before deprecation
3. **Experimental** - Not for production, subject to change

### Version Pinning

Some model IDs include date suffixes (e.g., `claude-sonnet-4-20250514`) to pin to specific versions. Using non-dated names (e.g., `gemini-2.5-flash`) automatically uses the latest stable version.

## Rate Limits and Quotas

Check the respective provider documentation:
- **Google**: https://ai.google.dev/gemini-api/docs/quota
- **Anthropic**: https://docs.anthropic.com/en/api/rate-limits
- **OpenAI**: https://platform.openai.com/docs/guides/rate-limits
- **xAI**: https://console.x.ai/

## Knowledge Cutoffs

- **Gemini 2.5 Models**: January 2025
- **Gemini 2.0 Models**: August 2024
- **Claude Models**: Varies by model (check Anthropic documentation)
- **OpenAI GPT-4o**: October 2023 (with web browsing for some models)
- **xAI Grok**: Real-time access to X/Twitter data

## Updates

This document is current as of December 2025. Check provider documentation for the latest model releases:
- Google Gemini: https://ai.google.dev/gemini-api/docs/models
- Anthropic Claude: https://docs.anthropic.com/en/docs/models-overview
- OpenAI: https://platform.openai.com/docs/models
- xAI: https://console.x.ai/
