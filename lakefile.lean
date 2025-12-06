import Lake
open Lake DSL

package "ai-sdk" where
  moreLeanArgs := #["-DautoImplicit=false"]

require "http-client" from "../http-client"

lean_lib "AiSdk" where

@[default_target]
lean_exe "ai-sdk-tests" where
  root := `Tests.CoreTests
