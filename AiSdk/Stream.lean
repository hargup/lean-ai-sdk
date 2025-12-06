/-
  AiSdk/Stream.lean
  Utilities for parsing streaming responses (SSE) and executing streaming requests
-/

import AiSdk.Types
import AiSdk.Json

namespace AiSdk.Stream

/-- Parse an SSE line "data: ..." -/
def parseSseLine (line : String) : Option String :=
  if line.startsWith "data: " then
    some (line.drop 6).trim
  else
    none

/-- Split response body into lines -/
def splitLines (body : String) : List String :=
  body.splitOn "\n"

/-- 
  Execute a streaming request using curl.
  Returns a Stream of Strings (lines of output).
-/
def streamRequest (req : RawRequest) : IO (Stream String) := do
  -- Construct curl arguments
  -- -N: no buffer
  -- -s: silent
  let args := #["-X", req.method, req.url, "-N", "-s"] ++ 
              (req.headers.foldl (fun acc (k, v) => acc ++ #["-H", s!"{k}: {v}"]) #[]) ++
              #["--data-binary", "@-"]

  let child ← IO.Process.spawn {
    cmd := "curl"
    args := args
    stdin := .piped
    stdout := .piped
    stderr := .inherit
  }
  
  -- Write body to stdin
  let stdin := child.stdin
  stdin.putStr req.body
  stdin.flush
  
  -- We can't close stdin easily, but we flushed.
  
  let stdout := child.stdout
  
  return {
    next := do
      let line ← stdout.getLine
      if line == "" then 
        return none
      else 
        return some line
  }

end AiSdk.Stream
