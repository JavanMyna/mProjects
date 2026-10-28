# Week 4 — done

Files: `Week4/*.cpp` (written 2026-10-21 → 2026-10-23).
Toolchain: `g++ 16.2.0` (MSYS2), one `.exe` per file.

## What I actually ran

| File | Program | Fundamental I met |
|---|---|---|
| `1.cpp` | absolute value | `if` + unary minus (`numValue = -numValue;`), with `abs()` and `*=` left in the comments |
| `2.cpp` | larger / smaller of two numbers | `if` / `else if` / `else` covering all three cases (first bigger, second bigger, equal) |
| `3.cpp` | job eligibility, age 18–28 | **`&&` to express a range** — `userAge >= 18 && userAge <= 28` |
| `4.cpp` | compare two rectangles | a helper that asks for its own input and returns `double` (`askArea()`) |
| `5.cpp` | BMI, imperial units | `pow(height, 2)` and a multi-band `if/else if` |
| `6.cpp` | mix two primary colours | `string` equality; mixing `&&` and `\|\|` over swapped operands |
| `7.cpp` | arithmetic quiz | `srand(time(0))`, `rand() % n`, `setw`, comparing the user's answer |
| `8.cpp` | shipping charges | nested `if` (distance then weight), input validation |
| `9.cpp` | — | empty `main`; the exercise was photographed, not written |
| `10.cpp` | speed of sound in a gas | menu via integer choice, validating seconds (0–30), multiplying speed by time |
| `q1.cpp` | divisibility check | **`if (int num = x % 5; num == 0)`** — declaration inside the condition |
| `q2.cpp` | weather code | encoding three categories by place value (hundreds / tens / ones) |
| `q3.cpp` | mark → grade | long `if/else if` ladder ordered high → low |
| `ts.cpp` | letter grade + `string::length()` | `\|\|` for out-of-range, brace-less single-statement `if`s, `b.length()` |

## What each one printed

- `1.cpp`, input `-5` → `The absolute number of what u entered is 5`.
- `2.cpp`, 10 and 3 → `Large number: 10` / `Small number: 3`.
- `3.cpp`, 2026 and 2000 → `You are 26 years old.` / `You are eligible for the job!`.
- `4.cpp`, rectangle 1 `4 × 4`, rectangle 2 `5 × 2` → `Rectangle 1 (16m^2) is larger than Rectangle 2 (10m^2).`
- `5.cpp`, 154 lb and 70 in → the two prompts only, then nothing. BMI is `22.09`, and no branch matches it.
- `6.cpp`, `red` + `blue` → `You get the color purple!`.
- `7.cpp`, answer `20000` → `325 + 398` on screen, then `Aweee, better luck next time!` / `You put: 20000` / `Actual answer: 723`. The two addends change every run.
- `8.cpp`, 1 kg and 20 miles → `Values of 0 or less for the weight ... are not accepted.` and `Charges : $4.34944e-312`.
- `9.cpp` → no output (empty `main`).
- `10.cpp`, choice `4` (hydrogen) and 10 s → `The distance between the source and you is 12700`.
- `q1.cpp` (`x = 7`) → `7 has myVar 0, is not divisible by 2, 3 or 5.`
- `q2.cpp` → `Then the weather code is: 302.`
- `q3.cpp` (`mark = 33`) → `Your grade is: D+`.
- `ts.cpp`, 95 and `hello` → `A5` (`A` from the grade, `5` from `b.length()`; no newline in between).

## Fundamentals, in my words

- **`if` is a question, `else if` is the next question, `else` is "none of the above"**. `2.cpp` shows the complete three-way split; `q3.cpp` shows a twelve-way ladder.
- **`&&` / `||`** — `&&` binds tighter than `||`, so `red && blue || blue && red` groups as `(red && blue) || (blue && red)`, which is exactly "the two colours in either order" (`6.cpp`).
- **A range is two comparisons**: `18 <= age <= 28` is not C++; write `age >= 18 && age <= 28` (`3.cpp`, the file's own note *"sometimes i forget they cant connect directly"*).
- **Nested `if`**: when the second question only makes sense after the first (distance valid? then is weight valid?), nesting is correct — the file's note says *"Nested if statements are better used in this one since it depends on each other"*.
- **Init-statement in `if`** (C++17): `if (int num = x % 5; num == 0)` computes once, tests it, and keeps `num` scoped to the `if`/`else` chain (`q1.cpp`).
- **Braces are optional for one statement** (`ts.cpp`), but mixing brace-less and braced branches is how a stray `else` gets attached to the wrong `if`.
- **`string` comparison** with `==` compares contents, not addresses (`6.cpp`).
- **A function can do its own I/O**: `askArea()` prompts, reads and returns `area`; `main` calls it twice. Convenient, but the reading and the math can no longer be tested separately.
- **`rand() % n`** gives `0 … n-1`, so `100 + rand() % 500` gives `100 … 599`. For `100 … 500` the modulus must be `401`.
- **`setw` applies to the next item only**; `right` stays on the stream (`7.cpp`).
- **Place-value encoding**: `w += 300` for the first day, `+= 10` for the second, `+= 1` for the third, so `hot, nothing, cloudy` → `302`. Decoding reverses it with `/ 100`, `/ 10 % 10`, `% 10` (`q2.cpp`).
- **Validation before calculation**: check each input and leave early, otherwise the calculation runs on nonsense (`8.cpp` tries this, but with the branches swapped).
- **An uninitialised `double` is not zero.** `charges` was never assigned on the path taken, and printed `4.34944e-312` (`8.cpp`).

## Non-obvious things that clicked

- `5.cpp`'s first band is `BMI >= 18.5 && BMI <= 18.5`, i.e. exactly 18.5. `22.09` is `< 18.5` false and `> 25` false, so **no branch runs and nothing prints**. The normal band was meant to be `18.5 ≤ BMI < 25`.
- `8.cpp`'s nesting is inverted: the outer `if` is true when the distance is **invalid**, and inside it the inner `if` is true when the weight is **invalid** — so an out-of-range weight still gets charged, while valid input takes the outer `else` and prints the weight error. `charges` is only assigned when both inputs fail validation, so an ordinary invalid input still prints `4.34944e-312`.
- `q3.cpp` works because the ladder runs from 80 down to 0: each branch only needs a lower bound (`mark >= 70 && mark < 80` could be `mark >= 70`). `33` lands in `D+` (32–36).
- `q1.cpp`'s `x = 7` is divisible by none of 5, 3, 2 → `num` is `2, 1, 1` → `myVar = 0`. The `int num` in each `else if` is a fresh variable scoped to that branch.
- `q2.cpp`'s `day2 = "hazzy"` is not `hot`, `cloudy` or `rainy`, so it contributes `0`; the code `302` is `3 0 2`, not an error.
- `7.cpp` prints the addends with `setw(9)` / `setw(7)` and a literal `_________` underline; the quiz is integer-only, so `==` is safe.
- `ts.cpp`'s `cin >> b` after `cin >> a` works without `cin.ignore()` because `>>` skips leading whitespace; the trailing newline only matters for `getline`.
- `6.cpp` prompts `Enter your first color` twice (the second is the second colour) and accepts only lowercase; `Red` would fall through to "isnt a primary color".
- `10.cpp`'s prompt has no `endl`, so `...from source to youThe distance...` runs together in the output. Its validation is two separate exits, one per input.

## Loose ends / things that look wrong on purpose

- `5.cpp`: fix the BMI bands (`< 18.5`, `18.5–25`, `25–30`, `30+`) and add a final `else`. Also decide whether to keep imperial `703` or convert to kg/m².
- `8.cpp`: swap the outer `if`/`else`, swap the inner `if`/`else`, and initialise `charges = 0` before the branches. Then re-test `1/20`, `5/20`, `25/20`, `5/5`, `5/4000`.
- `9.cpp` is an empty shell (`halfTime`, `totalTime` in the comment, photo taken 23 Oct) — the last exercise is still unwritten.
- `7.cpp` is non-deterministic: the printed addends and answer change every run, and two runs in the same second get the same seed.
- `6.cpp` could accept case-insensitively (`tolower`) or reject repeated colours more clearly.
- `ts.cpp` mixes the grade exercise and a `string` test in one `main`; it also prints the grade letter with `'A'` (a `char`) while the invalid case uses a string.
- `.exe` files are committed next to every source (no `.gitignore`), and `9.cpp` has no `.exe` because it was never built.
