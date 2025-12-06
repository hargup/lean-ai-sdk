import Lake
open Lake DSL

package "ai-sdk" where
  moreLeanArgs := #["-DautoImplicit=false"]

require "http-client" from "../http-client"

lean_lib "AiSdk" where
