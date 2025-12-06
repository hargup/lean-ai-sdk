/-
  AiSdk/Tactic.lean
  Automation for common proofs and validations.
-/

namespace AiSdk.Tactic

/-- A tactic to prove a string is not empty if it's manifestly not empty -/
macro "non_empty_str" : tactic =>
  `(tactic| (intro h; have : _ = "" := h; contradiction))

/-- A tactic to prove float range bounds -/
macro "in_range_float" : tactic =>
  `(tactic| (simp; apply And.intro <;> (try decide)))

end AiSdk.Tactic

