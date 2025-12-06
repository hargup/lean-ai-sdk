/-
  AiSdk/Config.lean
  Configuration and API key loading
-/

import AiSdk.Types

namespace AiSdk

/-- API configuration containing keys for different providers -/
structure ApiConfig where
  anthropicApiKey : Option String := none
  googleApiKey : Option String := none
  openaiApiKey : Option String := none
  xaiApiKey : Option String := none
  deriving Repr, Inhabited

namespace ApiConfig
  /-- Parse a line from config file (KEY=VALUE format) -/
  private def parseLine (line : String) : Option (String × String) :=
    let trimmed := line.trim
    if trimmed.isEmpty || trimmed.startsWith "#" then
      none
    else
      match trimmed.splitOn "=" with
      | [key, value] => some (key.trim, value.trim.dropWhile (· == '"') |>.dropRightWhile (· == '"'))
      | key :: rest =>
        -- Handle values containing '='
        let value := "=".intercalate rest
        some (key.trim, value.trim.dropWhile (· == '"') |>.dropRightWhile (· == '"'))
      | _ => none

  /-- Parse config file content into key-value pairs -/
  private def parseConfig (content : String) : List (String × String) :=
    content.splitOn "\n" |>.filterMap parseLine

  /-- Build ApiConfig from key-value pairs -/
  private def fromPairs (pairs : List (String × String)) : ApiConfig := Id.run do
    let mut config : ApiConfig := {}
    for (key, value) in pairs do
      match key with
      | "ANTHROPIC_API_KEY" => config := { config with anthropicApiKey := some value }
      | "GOOGLE_API_KEY" => config := { config with googleApiKey := some value }
      | "GEMINI_API_KEY" =>
        -- Also accept GEMINI_API_KEY as alias for Google
        if config.googleApiKey.isNone then
          config := { config with googleApiKey := some value }
      | "OPENAI_API_KEY" => config := { config with openaiApiKey := some value }
      | "XAI_API_KEY" => config := { config with xaiApiKey := some value }
      | _ => pure ()
    return config

  /-- Get the path to the config file -/
  def configPath : IO System.FilePath := do
    let home ← IO.getEnv "HOME"
    match home with
    | some h => return System.FilePath.mk h / ".ai-sdk.config"
    | none => return System.FilePath.mk ".ai-sdk.config"

  /-- Load configuration from file -/
  def loadFromFile (path : System.FilePath) : IO ApiConfig := do
    try
      let content ← IO.FS.readFile path
      let pairs := parseConfig content
      return fromPairs pairs
    catch _ =>
      return {}

  /-- Load configuration from environment variables -/
  def loadFromEnv : IO ApiConfig := do
    let anthropic ← IO.getEnv "ANTHROPIC_API_KEY"
    let google ← IO.getEnv "GOOGLE_API_KEY"
    let gemini ← IO.getEnv "GEMINI_API_KEY"
    let openai ← IO.getEnv "OPENAI_API_KEY"
    let xai ← IO.getEnv "XAI_API_KEY"
    return {
      anthropicApiKey := anthropic
      googleApiKey := google.orElse (fun _ => gemini)
      openaiApiKey := openai
      xaiApiKey := xai
    }

  /-- Merge two configs, preferring values from the first -/
  def merge (a b : ApiConfig) : ApiConfig :=
    { anthropicApiKey := a.anthropicApiKey.orElse (fun _ => b.anthropicApiKey)
      googleApiKey := a.googleApiKey.orElse (fun _ => b.googleApiKey)
      openaiApiKey := a.openaiApiKey.orElse (fun _ => b.openaiApiKey)
      xaiApiKey := a.xaiApiKey.orElse (fun _ => b.xaiApiKey) }

  /-- Load configuration from default locations.
      Priority: 1) ~/.ai-sdk.config 2) environment variables -/
  def load : IO ApiConfig := do
    let path ← configPath
    let fileConfig ← loadFromFile path
    let envConfig ← loadFromEnv
    return merge fileConfig envConfig

  /-- Get Anthropic API key or error -/
  def getAnthropicKey (config : ApiConfig) : ApiResult String :=
    match config.anthropicApiKey with
    | some key => .ok key
    | none => .error (.configError "ANTHROPIC_API_KEY not found in config file or environment")

  /-- Get Google API key or error -/
  def getGoogleKey (config : ApiConfig) : ApiResult String :=
    match config.googleApiKey with
    | some key => .ok key
    | none => .error (.configError "GOOGLE_API_KEY not found in config file or environment")

  /-- Get OpenAI API key or error -/
  def getOpenAIKey (config : ApiConfig) : ApiResult String :=
    match config.openaiApiKey with
    | some key => .ok key
    | none => .error (.configError "OPENAI_API_KEY not found in config file or environment")

  /-- Get xAI API key or error -/
  def getXaiKey (config : ApiConfig) : ApiResult String :=
    match config.xaiApiKey with
    | some key => .ok key
    | none => .error (.configError "XAI_API_KEY not found in config file or environment")

end ApiConfig

end AiSdk
