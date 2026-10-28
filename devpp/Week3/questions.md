# Week 3 — questions

Accumulated from `Week3/*.cpp` and `lecture2.md`. Wording kept as I wrote it.

## Still open

- **`stoi` on bad input** — what happens with `stoi("abc")` or a number too big for `int`? Does it throw, and what is the exception called?
- **`setw` / `setprecision` / `fixed` / `showpoint`** — I can now see *what* they print (`c4.cpp`), but which of them stick to the stream and which must be repeated? And what does `showpoint` add when `fixed` is already on?
- **`ceil`, `floor`, `round`** — the class note lists all three. `round` goes away from zero on `.5`; do `ceil`/`floor` on a negative behave the way the names suggest (`ceil(-2.3) = -2`)?
- **`cin.ignore()`** — the note says `cin.getline()` after `cin >>` "has a bug that includes `'\n'`". Why exactly one leftover character, and when is `cin.ignore(numeric_limits<streamsize>::max(), '\n')` needed instead of plain `cin.ignore()`?
- **`static_cast`** — `lecture2.md` says *"by putting <> between it. idk honestly."* Still the Week 2 question: why the angle brackets, and why not `double(x)`?
- **`<random>`** — `mt19937` and the other names in the note look nothing like `rand()`. What is the simple version of `<random>` that gets a number in a range?
- **`4.cpp`: *"why cant i put auto there"*** — now answered narrowly: a forward-declared `auto` function cannot be *called* before its definition. Still open: when is `auto` return type actually worth using?
- **Integer IC route** — with dashes, `cin >> long long` stops at `-`. What is the clean way: read as `string`, strip non-digits, then `substr`, or keep `long long` and require a dash-free input?
- **Century pivot** — `<= 26` only works while the current year is 2026 and the range is 2000–2026. Is there a formula that survives 2027+ without editing the code?
- **`pow` returns `double`** — so `slices` is fractional (`76.1`). Is `floor()` the right call before printing, or should a slice count stay fractional?
- **`abs` from which header?** — `<cmath>`'s `abs` took my `float`; the C version in `<cstdlib>` is `int`-only. Which one is the compiler picking, and what happens with `abs(-2.5)` without `<cmath>`?
- **`c1.cpp`**: `round(value)` prints `-12` — is that the nearest integer or a truncation? (Checked: nearest; `-12.5` → `-13`.)
- **Why does `cout` drop `.0`?** — `c2.cpp` prints `150`, not `150.0`. Default `cout` has 6 significant digits and no `showpoint`; is that the whole rule?
- **`D` in DPA ALE** — the class notes list Decomposition, Pattern recognition, Abstraction, Algorithm, Logical reasoning, Evaluation. I can apply Decomposition; what does *Abstraction* mean on a 20-line exercise?

## Answered along the way (kept for reference)

- *"Whats substr for usually. Substract? > no fred, its substring"* → `substr(0, 2)` takes the first two characters (`3.cpp`).
- *"first time using stoi here > Yes it means string to integer s to i"* → `stoi("04")` → `4` (`3.cpp`).
- *"because int automatically ignores decimal, wouldnt it round up or down?"* → truncation toward zero, not rounding: `(int)-2.7` → `-2`, `(int)2.7` → `2`.
- *"8.848 / 0 ... wthhh thats illegal!"* → for `double` it is `inf`; `-Wall` gives only `-Wdiv-by-zero`, not an error. `8.848/0` prints `inf`.
- *"why cant i put auto there"* → `auto convert(double);` + call above the definition gives `error: use of 'auto convert(double)' before deduction of 'auto'`.
- *"I think my math is wrong here. It outputs as 4m"* → the math gives kilometres; `25 / 5 = 5 km`, so the label should be `5000 m`, not `5m`.
- *"OKay so u gotta put setprecision so we get 2 decimal. use iomanip header ... its avg!!!"* (`2.cpp`) → `setprecision(2)` alone is not 2 decimal places; `fixed << showpoint` made it `2.33`.
- *"cin >> month"* reads one word, so a month name with a space would break it (`2.cpp`).
- *"its not the only math library"* (`lecture2.md`) → `<numeric>`, `<cstdlib>`, `<complex>`, `<numbers>` are the other ones named in class.

## Follow-ups worth asking

- Monospace/table output: `setw` right-aligns by default; how do I ask for left (`left`) and then switch back?
- Does `substr` throw if the start position is past the end (`"04".substr(2, 1)`), or return empty?
- Should the lapse-rate program take the lapse constant as a parameter (`convert(height, lapse)`) instead of hard-coding `5`?
- When a value has a unit, is putting it in the name (`hgtFt_1km`, `tempF_`) the accepted convention, or should it be a comment?
- `3b.cpp`/`3c.cpp` both solve the IC problem; is there a single function that handles 1900s and 2000s without an `if`?
