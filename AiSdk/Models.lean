/-
  AiSdk/Models.lean
  Supported model definitions and metadata
-/

namespace AiSdk.Models

/-- Model metadata -/
structure ModelInfo where
  id : String
  name : String
  provider : String
  description : String
  contextWindow : Nat
  isDefault : Bool := false
  deriving Repr

namespace Google
  /-- Gemini 2.5 Flash - Default, best price-performance -/
  def gemini25Flash : ModelInfo := {
    id := "gemini-2.5-flash"
    name := "Gemini 2.5 Flash"
    provider := "google"
    description := "Best price-performance for large-scale processing and agentic workflows"
    contextWindow := 1048576
    isDefault := true
  }

  /-- Gemini 2.5 Flash Lite - Fastest, most cost-efficient -/
  def gemini25FlashLite : ModelInfo := {
    id := "gemini-2.5-flash-lite"
    name := "Gemini 2.5 Flash-Lite"
    provider := "google"
    description := "Fastest flash model optimized for cost-efficiency and high throughput"
    contextWindow := 1048576
  }

  /-- Gemini 2.5 Pro - Advanced reasoning -/
  def gemini25Pro : ModelInfo := {
    id := "gemini-2.5-pro"
    name := "Gemini 2.5 Pro"
    provider := "google"
    description := "Advanced thinking model for complex reasoning over code, math, STEM"
    contextWindow := 1048576
  }

  /-- Gemini 2.0 Flash - Second generation workhorse -/
  def gemini20Flash : ModelInfo := {
    id := "gemini-2.0-flash"
    name := "Gemini 2.0 Flash"
    provider := "google"
    description := "Second generation workhorse with 1M token context window"
    contextWindow := 1048576
  }

  /-- Gemini 2.0 Flash Lite - Cost-efficient small model -/
  def gemini20FlashLite : ModelInfo := {
    id := "gemini-2.0-flash-lite"
    name := "Gemini 2.0 Flash-Lite"
    provider := "google"
    description := "Second generation small model optimized for cost efficiency"
    contextWindow := 1048576
  }

  /-- Gemini 2.5 Flash Image - Image generation -/
  def gemini25FlashImage : ModelInfo := {
    id := "gemini-2.5-flash-image"
    name := "Gemini 2.5 Flash Image"
    provider := "google"
    description := "Image generation and understanding variant"
    contextWindow := 65536
  }

  /-- All stable Gemini models -/
  def allStable : List ModelInfo := [
    gemini25Flash,
    gemini25FlashLite,
    gemini25Pro,
    gemini25FlashImage,
    gemini20Flash,
    gemini20FlashLite
  ]
end Google

namespace Google.Preview
  /-- Preview/Experimental Google models (model IDs only) -/
  def gemini3ProPreview : String := "gemini-3-pro-preview"
  def gemini3ProImagePreview : String := "gemini-3-pro-image-preview"
  def gemini25FlashPreview : String := "gemini-2.5-flash-preview-09-2025"
  def gemini25FlashLive : String := "gemini-2.5-flash-native-audio-preview-09-2025"
end Google.Preview

namespace Anthropic
  /-- Claude Sonnet 4 - Default, balanced -/
  def claudeSonnet4 : ModelInfo := {
    id := "claude-sonnet-4-20250514"
    name := "Claude Sonnet 4"
    provider := "anthropic"
    description := "Balanced performance for general purpose tasks"
    contextWindow := 200000
    isDefault := true
  }

  /-- Claude Opus 4 - Most capable -/
  def claudeOpus4 : ModelInfo := {
    id := "claude-opus-4-20250514"
    name := "Claude Opus 4"
    provider := "anthropic"
    description := "Most capable model for complex reasoning and creative tasks"
    contextWindow := 200000
  }

  /-- Claude Haiku 3 - Fastest -/
  def claudeHaiku3 : ModelInfo := {
    id := "claude-haiku-3-20240307"
    name := "Claude Haiku 3"
    provider := "anthropic"
    description := "Fastest model for quick responses and simple tasks"
    contextWindow := 200000
  }

  /-- All Claude models -/
  def all : List ModelInfo := [
    claudeSonnet4,
    claudeOpus4,
    claudeHaiku3
  ]
end Anthropic

namespace OpenAI
  /-- GPT-4o - Default, optimized for chat -/
  def gpt4o : ModelInfo := {
    id := "gpt-4o"
    name := "GPT-4o"
    provider := "openai"
    description := "Optimized GPT-4 variant for chat and multimodal tasks"
    contextWindow := 128000
    isDefault := true
  }

  /-- GPT-4o Mini - Faster, more affordable -/
  def gpt4oMini : ModelInfo := {
    id := "gpt-4o-mini"
    name := "GPT-4o Mini"
    provider := "openai"
    description := "Smaller, faster, more affordable GPT-4o variant"
    contextWindow := 128000
  }

  /-- GPT-4 Turbo - High capability -/
  def gpt4Turbo : ModelInfo := {
    id := "gpt-4-turbo"
    name := "GPT-4 Turbo"
    provider := "openai"
    description := "High-capability model with vision support"
    contextWindow := 128000
  }

  /-- o1 - Advanced reasoning -/
  def o1 : ModelInfo := {
    id := "o1"
    name := "o1"
    provider := "openai"
    description := "Advanced reasoning model for complex tasks"
    contextWindow := 200000
  }

  /-- o1-mini - Fast reasoning -/
  def o1Mini : ModelInfo := {
    id := "o1-mini"
    name := "o1 Mini"
    provider := "openai"
    description := "Fast reasoning model optimized for speed"
    contextWindow := 128000
  }

  /-- o3-mini - Latest mini model -/
  def o3Mini : ModelInfo := {
    id := "o3-mini"
    name := "o3 Mini"
    provider := "openai"
    description := "Latest generation mini reasoning model"
    contextWindow := 200000
  }

  /-- All OpenAI models -/
  def all : List ModelInfo := [
    gpt4o,
    gpt4oMini,
    gpt4Turbo,
    o1,
    o1Mini,
    o3Mini
  ]
end OpenAI

namespace Xai
  /-- Grok 3 - Default, balanced performance -/
  def grok3 : ModelInfo := {
    id := "grok-3"
    name := "Grok 3"
    provider := "xai"
    description := "Balanced model for general purpose tasks"
    contextWindow := 131072
    isDefault := true
  }

  /-- Grok 3 Fast - Optimized for speed -/
  def grok3Fast : ModelInfo := {
    id := "grok-3-fast"
    name := "Grok 3 Fast"
    provider := "xai"
    description := "Fast variant optimized for speed"
    contextWindow := 131072
  }

  /-- Grok 3 Mini - Smaller, faster -/
  def grok3Mini : ModelInfo := {
    id := "grok-3-mini"
    name := "Grok 3 Mini"
    provider := "xai"
    description := "Smaller, faster model for simpler tasks"
    contextWindow := 131072
  }

  /-- Grok 3 Mini Fast - Fastest variant -/
  def grok3MiniFast : ModelInfo := {
    id := "grok-3-mini-fast"
    name := "Grok 3 Mini Fast"
    provider := "xai"
    description := "Fastest Grok model variant"
    contextWindow := 131072
  }

  /-- Grok 2 - Previous generation -/
  def grok2 : ModelInfo := {
    id := "grok-2"
    name := "Grok 2"
    provider := "xai"
    description := "Previous generation Grok model"
    contextWindow := 131072
  }

  /-- All xAI models -/
  def all : List ModelInfo := [
    grok3,
    grok3Fast,
    grok3Mini,
    grok3MiniFast,
    grok2
  ]
end Xai

/-- All supported models -/
def allModels : List ModelInfo :=
  Google.allStable ++ Anthropic.all ++ OpenAI.all ++ Xai.all

/-- Get model info by ID -/
def getModelInfo (id : String) : Option ModelInfo :=
  allModels.find? (·.id == id)

/-- Get default model for a provider -/
def getDefaultModel (provider : String) : Option ModelInfo :=
  match provider.toLower with
  | "google" | "gemini" => some Google.gemini25Flash
  | "anthropic" | "claude" => some Anthropic.claudeSonnet4
  | "openai" | "gpt" => some OpenAI.gpt4o
  | "xai" | "grok" => some Xai.grok3
  | _ => none

/-- List all models for a provider -/
def listModels (provider : String) : List ModelInfo :=
  match provider.toLower with
  | "google" | "gemini" => Google.allStable
  | "anthropic" | "claude" => Anthropic.all
  | "openai" | "gpt" => OpenAI.all
  | "xai" | "grok" => Xai.all
  | _ => []

end AiSdk.Models
