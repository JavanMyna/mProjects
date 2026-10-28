# Week 4 — questions

Accumulated from `Week4/*.cpp`. Wording kept as I wrote it.

## Still open

- **BMI bands** — `5.cpp` only handles *exactly* 18.5, below 18.5, and above 25. What are the accepted bands (is 25 "overweight" or still "normal"), and where does `BMI == 25` go?
- **`BMI = weight * 703 / pow(height, 2)`** — why 703? Is that just the conversion factor for lb/in², and would kg/m² drop it entirely?
- **Uninitialised variables** — `charges` printed `4.34944e-312`. Is that always "whatever was in memory", or does the compiler zero it in some builds? Why did it compile without a warning?
- **`if (int num = x % 5; num == 0)`** — the class/code comment says initialisation in `if` is allowed. Is this C++17-only, and is `num` gone after the whole `else if` chain?
- **`&&` vs `||` precedence** — I know `&&` binds tighter; is that the only rule I need, or should every mixed condition get parentheses anyway?
- **Short-circuit** — in `a && b`, if `a` is false, is `b` skipped? Does that matter when `b` would divide by zero?
- **`rand()` ranges** — `100 + rand() % 500` gives 100–599. To get 100–500 inclusive, is it `% 401`? And is `rand()` uniform enough to care?
- **Same seed twice** — `srand(time(0))` uses seconds; two runs in one second produce the same quiz. How do people avoid that in real programs?
- **`cin >>` and newlines** — `ts.cpp` reads an `int` then a `string` and works; when exactly does the leftover `'\n'` break things (only before `getline`)?
- **`string::length()`** — it returns `size_t` (unsigned). What happens if I store it in an `int`, and why does printing it work fine?
- **`9.cpp`** — the exercise was photographed (`halfTime`, `totalTime` in the header). What is it actually asking for, and is it a loop exercise or a formula?
- **A function that reads input** — `askArea()` prompts inside the helper. Is that acceptable style, or should `main` read and the helper only calculate? The file note says *"in exams, dont use these ah"* — why?
- **Brace-less `if`** — `ts.cpp` uses `if (...) cout << ...;` and it works. What is the "dangling else" rule that makes this risky?
- **`switch`** — `10.cpp` picks a gas with a chain of `if (gasChoice == n)`. Is `switch` the idiomatic replacement, and does it work with ranges?

## Answered along the way (kept for reference)

- *"sometimes i forget they cant connect directly"* (`3.cpp`) → `18 <= age <= 28` is not a range test; use `age >= 18 && age <= 28`.
- *"Oh i can make it much shorter by using || ... if it just switch place"* (`6.cpp`) → `red && blue || blue && red` works because `&&` binds tighter than `||`.
- *"I gotta make it a habit to catch error from the first 1st if statement"* (`6.cpp`) → the final `else` handles non-primary input, but only after both colours are read.
- `5.cpp` prints nothing for a normal BMI → the band is written `>= 18.5 && <= 18.5`, and `22.09` matches no branch.
- `8.cpp` charges `$4.34944e-312` for valid input → the nested conditions are inverted and `charges` is never assigned on that path.
- `q1.cpp` with `x = 7` → `7 % 5 = 2`, `7 % 3 = 1`, `7 % 2 = 1`, so `myVar = 0` and the message is correct.
- `q3.cpp`, mark 33 → `D+`; the ladder works because it is ordered from 80 down to 0.
- `q2.cpp` → `302`; `"hazzy"` matches none of the three weather words and contributes `0`.
- `ts.cpp` → `A5`; `>>` skips the newline left by `cin >> a`, so `b` is `hello` and `length()` is `5`.
- `10.cpp`, hydrogen (`4`) and 10 s → `12700`; the speed table is `258 / 331.5 / 972 / 1270`.
- *"so she used boolean isCorrect in here, sooo programmer core"* (`7.cpp`) → noted as the cleaner way to hold the quiz result before printing.

## Follow-ups worth asking

- Rewrite `8.cpp` with `bool distanceIsValid(...)` and `bool weightIsValid(...)` and a single early return for each; compare with the nested version.
- Build a tiny input table for `8.cpp` (valid/invalid distance × valid/invalid weight) and run all four cases instead of one.
- Do the same for `5.cpp`: one input per band, including the boundaries 18.5, 25, 30.
- Is `switch` acceptable for `10.cpp` if the menu only maps 1–4 to a speed, and where would the default case go?
- `tolower` from `<cctype>` — what is the smallest change that makes `6.cpp` accept `Red`?
