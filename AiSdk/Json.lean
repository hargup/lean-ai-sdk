/-
  AiSdk/Json.lean
  JSON utilities for API communication
-/

import Lean.Data.Json

namespace AiSdk.Json

open Lean (Json ToJson FromJson)

/-- Convert Option to Json (None becomes null) -/
def optToJson {α : Type} [ToJson α] (opt : Option α) : Json :=
  match opt with
  | some v => ToJson.toJson v
  | none => Json.null

/-- Get a nested field from JSON -/
def getPath (j : Json) (path : List String) : Option Json :=
  match path with
  | [] => some j
  | key :: rest =>
    match j.getObjVal? key with
    | .ok v => getPath v rest
    | .error _ => none

/-- Get a string from a path -/
def getPathStr (j : Json) (path : List String) : Option String := do
  let v ← getPath j path
  match v with
  | Json.str s => some s
  | _ => none

/-- Get a number from a path -/
def getPathNat (j : Json) (path : List String) : Option Nat := do
  let v ← getPath j path
  match v with
  | Json.num n => some n.toFloat.toUInt64.toNat
  | _ => none

/-- Get an array from a path -/
def getPathArr (j : Json) (path : List String) : Option (Array Json) := do
  let v ← getPath j path
  match v with
  | Json.arr arr => some arr
  | _ => none

/-- Get a field from JSON object -/
def getField (j : Json) (key : String) : Option Json :=
  getPath j [key]

/-- Get a string field -/
def getFieldStr (j : Json) (key : String) : Option String :=
  getPathStr j [key]

/-- Get a number field as Nat -/
def getFieldNat (j : Json) (key : String) : Option Nat :=
  getPathNat j [key]

/-- Get an array field -/
def getFieldArr (j : Json) (key : String) : Option (Array Json) :=
  getPathArr j [key]

/-- Get a boolean field -/
def getFieldBool (j : Json) (key : String) : Option Bool :=
  match getField j key with
  | some (Json.bool b) => some b
  | _ => none

/-- Parse JSON string -/
def parse (s : String) : Except String Json :=
  Lean.Json.parse s

/-- Convert JSON to string -/
def toString (j : Json) : String :=
  j.compress

/-- Convert JSON to pretty string -/
def toPretty (j : Json) : String :=
  j.pretty

end AiSdk.Json
