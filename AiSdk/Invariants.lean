/-
  AiSdk/Invariants.lean
  Rich types with invariants for the Functional Core.
  These types ensure that data passed to the Core is valid by construction.
-/

import AiSdk.Types
import AiSdk.Tactic

namespace AiSdk

/-- A non-empty string representing a valid API key -/
structure ValidatedApiKey where
  value : String
  prop : value ≠ ""
  deriving Repr

/-- A non-empty string representing a valid model identifier -/
structure ValidatedModelId where
  value : String
  prop : value ≠ ""
  deriving Repr, BEq

/-- A float representing a valid temperature (0.0 to 2.0) -/
structure ValidatedTemperature where
  value : Float
  prop : value ≥ 0.0 ∧ value ≤ 2.0
  deriving Repr, BEq

/-- A list of messages that is guaranteed to be non-empty -/
structure NonEmptyMessageList where
  messages : List Message
  prop : messages ≠ []
  deriving Repr

namespace Invariants

  /-- Smart constructor for ValidatedApiKey -/
  def mkApiKey (s : String) : Option ValidatedApiKey :=
    if h : s ≠ "" then some { value := s, prop := h } else none

  /-- Decidable instance for API Key validity -/
  instance (s : String) : Decidable (s ≠ "") :=
    if s == "" then isFalse (by intro h; contradiction)
    else isTrue (by non_empty_str)

  /-- Smart constructor for ValidatedModelId -/
  def mkModelId (s : String) : Option ValidatedModelId :=
    if h : s ≠ "" then some { value := s, prop := h } else none

  /-- Decidable instance for Model ID validity -/
  instance (s : String) : Decidable (s ≠ "") :=
    inferInstance

  /-- Smart constructor for ValidatedTemperature -/
  def mkTemperature (f : Float) : Option ValidatedTemperature :=
    if h : f ≥ 0.0 ∧ f ≤ 2.0 then some { value := f, prop := h } else none

  /-- Decidable instance for Temperature validity -/
  instance (f : Float) : Decidable (f ≥ 0.0 ∧ f ≤ 2.0) :=
    inferInstance

  /-- Smart constructor for NonEmptyMessageList -/
  def mkMessageList (msgs : List Message) : Option NonEmptyMessageList :=
    if h : msgs ≠ [] then some { messages := msgs, prop := h } else none

  /-- Decidable instance for NonEmptyMessageList validity -/
  instance (msgs : List Message) : Decidable (msgs ≠ []) :=
    inferInstance

end Invariants

end AiSdk

