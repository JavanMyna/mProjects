# Week 4 — insight

What changed in how I think about conditionals (the runs are in `done.md`).

## The order of the conditions *is* the algorithm

`q3.cpp` needs no upper bounds because it asks from 80 downwards. `5.cpp` fails because its band is `>= 18.5 && <= 18.5` and the band above starts at `> 25`, leaving `18.5 < BMI ≤ 25` unanswered. Before typing `if`, ask "*is every input covered exactly once, and in which order?*" A ladder is a partition; a gap is a silent no-op.

## Uninitialised memory is visible

`charges` printed `4.34944e-312`. That number is not a math bug, it is proof that no branch ran. Treat any absurd value as a control-flow alarm first, arithmetic second. Initialise every accumulator before the branch (`double charges = 0;`).

## Nesting means dependency, not decoration

`8.cpp` nests the weight check inside the distance check. That is only correct if the weight question depends on the distance question. When it does not (both are independent validations), flat early exits are clearer and impossible to invert. The file's own note — *"Nested if statements are better used in this one since it depends on each other"* — is the rule to keep.

## `&&` groups before `||`

`red && blue || blue && red` reads as `(red && blue) || (blue && red)`, which is the "either order" pattern. That is why `6.cpp` works without parentheses. With three or more mixed operators, add the parentheses anyway for the reader.

## `if (init; condition)` keeps the test value local

`if (int num = x % 5; num == 0)` computes `x % 5` once, names it, and hides it from the rest of `main`. Without it the choice is `int num = x % 5;` leaking into the function, or recomputing `x % 5` in the condition and again in the message.

## Categories can be encoded in a number

`q2.cpp`: hundreds = first day, tens = second, ones = third. `302` is a compact record; decode with `/ 100`, `/ 10 % 10`, `% 10`. Same idea as an IC's digit groups — the digits carry fields, not just magnitude.

## Randomness is a range problem

`rand() % n` is `0 … n-1`. The addends in `7.cpp` reach 599 because the modulus is `500`, not because `rand()` is odd. State the wanted range first, then pick the modulus (`high - low + 1`).
