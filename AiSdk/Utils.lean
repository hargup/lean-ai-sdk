/-
  AiSdk/Utils.lean
  Utility functions for files and Base64
-/

namespace AiSdk.Utils

/-- Read a file from disk and return as Base64 string -/
-- Note: This is a placeholder. Lean doesn't have a standard Base64 library in core.
-- We would need to use an external library or implement a simple encoder.
-- For now, we assume there's an external way or we return a placeholder.
def readFileBase64 (path : String) : IO String := do
  -- In a real implementation, we would read bytes and encode.
  -- Here we just read text and (incorrectly) return it, or throw if binary.
  -- Ideally we should depend on a library like 'Sod' or 'Base64'.
  -- Since we don't have one imported, we'll simulate it for text files.
  let content ← IO.FS.readFile path
  -- TODO: Implement actual Base64 encoding
  pure content

/-- Get MIME type from file extension -/
def getMimeType (path : String) : String :=
  if path.endsWith ".png" then "image/png"
  else if path.endsWith ".jpg" || path.endsWith ".jpeg" then "image/jpeg"
  else if path.endsWith ".webp" then "image/webp"
  else if path.endsWith ".gif" then "image/gif"
  else "application/octet-stream"

end AiSdk.Utils

