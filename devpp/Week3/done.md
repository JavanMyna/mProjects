# Week 3 — done

Files: `Week3/*.cpp` (written 2026-10-12 → 2026-10-16).
Toolchain: `g++ 16.2.0` (MSYS2), one `.exe` per file.

## What I actually ran

| File | Program | Fundamental I met |
|---|---|---|
| `1.cpp` | cookies → calories | deriving one constant from others; integer division inside a `const` initializer |
| `2.cpp` | average rainfall for 3 months | `fixed`, `showpoint`, `setprecision(2)`; `cin >>` reads one word |
| `3.cpp` | IC → age | **`substr(0, 2)`** and **`stoi`** — first time pulling part of a string and turning it into a number |
| `3b.cpp` | IC → birth year | two-digit year pivot: `<= 26` → 2000s, otherwise 1900s |
| `3c.cpp` | IC → birth year, numeric route | reading the IC as `long long`, then `/ 10000000000` to drop the tail |
| `4.cpp` | lapse rate | first function with a parameter and a prototype: `double convert_to_Fahr(double)` |
| `4b.cpp` | lapse rate in °F and feet | `const double M_TO_FEET`, reusing the same helper on converted temperatures |
| `5.cpp` | Joe's stock profit | chaining named results (`totalPurchase` → `commissionPaid_buy` → `profit`); negative-profit guard |
| `c1.cpp` | `<cmath>` playground | `abs()` and `round()` on a `float` |
| `c2.cpp` | averages | average per day vs average over the whole period |
| `c3.cpp` | string concatenation | reassigning `string` variables, `<<` vs `+` |
| `c4.cpp` | `setprecision` ladder | precision means **significant digits** unless `fixed` is on |
| `c5.cpp` | pizza slices | `pow(radius, 2)`, `fixed`/`showpoint`/`setprecision(1)` |
| `n1.cpp` | circumference | the book's GDB template, `const` |
| `n2.cpp` | `float` sum into an `int` | truncation on assignment |
| `n3.cpp` | declaration syntax tests | `{}`, `()`, `=` initialisation; `char` literal |

## What each one printed

- `1.cpp`, input `5` → `You have eaten 5 cookies` / `Total calories consumed: 500cal`.
- `2.cpp`, June 2.5, July 1.5, August 3.0 → `The average rainfall for June ,July and August is 2.33 inches.`
- `3.cpp`, IC `040512-14-5567` → `Your age is 122 years old!`
- `3b.cpp` → `As a number: 4` / `Full Birth Year: 2004`.
- `3c.cpp`, IC `040512-14-5567` → `You are born in 1900. ... Your age is 126 years old!`
- `4.cpp`, sea level 25 → `77F`; `1000m: 20C`, `2000m: 15C`, `3000m: 10C`; Everest `-19.24C`; `height ... 0C: 5m`.
- `4b.cpp`, sea level 25 → `77 degrees`; `1000m (3280 feet)` `20 celsius and 68 fahrenheit`; `2000m (6560 feet)` `15 / 59`; `3000m (9840 feet)` `10 / 50`; Everest `-19.24 celsius and -2632 fahrenheit`; `0C: 5 m`; `0F: 28.5185 feet`.
- `5.cpp` → paid `RM45500`, buy commission `RM910`, sold `RM56900`, sell commission `RM1138`, profit `RM9352`.
- `c1.cpp`, `value = -12.3453` → `-12.3453`, `12.3453`, `-12` (the last one has no trailing newline).
- `c2.cpp` → `3.33333`, `9.67742`, `3.33333`, `150`.
- `c3.cpp` → `Paddington  went to school by taxi.` (two spaces) and the Courage line.
- `c4.cpp` for `100.98 / 50`, precision 6 down to 1: `2.0196`, `2.0196`, `2.02`, `2.02`, `2`, `2`.
- `c5.cpp`, diameter 37 → `A 37.0 inch pizza contains about 76.1 slices`.
- `n1.cpp` → `The circumference is: 31.4159`.
- `n2.cpp` → `4` (from `float a = 2.5, b = 1.5;` into `int x`).
- `n3.cpp` → `N` (the other experiments are commented out).

## Fundamentals, in my words

- **`substr(start, length)`** — *substring*, not "subtract". `userIC.substr(0, 2)` takes two characters starting at 0. If `length` runs past the end it just stops at the end (verified: `"04".substr(0, 5)` → `"04"`).
- **`stoi`** — "s to i", string to integer. `stoi("04")` → `4`; the leading zero is not part of the number.
- **Two ways into the year digits**:
  - text route: `substr` → `stoi` (`3.cpp`, `3b.cpp`);
  - number route: divide by `10^10` to keep the leading digits, `% 10` to keep the last (`3c.cpp`).
- **A function with arguments**: `double convert_to_Fahr(double celsiusValue);` above `main`, body below, call it like `tempFahr = convert_to_Fahr(tempCel);`. The return type is on the left and must be known at the declaration; `auto` can't be forward-declared and called before its definition.
- **`const`** marks a value I never intend to change (`const double PI = 3.14159;`, `const int CALORY_PER_COOKIE = ...`). It also lets one constant be computed from other constants instead of hard-coding `100`.
- **Formatting is two separate switches**:
  - `setprecision(n)` alone = *n significant digits*;
  - add `fixed` → *n digits after the decimal point*; `showpoint` keeps the decimal point (and trailing zeros) visible.
- **Chaining results** beats one long expression: `totalPurchase → commissionPaid_buy → profit`; every step is nameable and checkable.
- **Mixing types still truncates**: `int x = 2.5 + 1.5;` prints `4` — the sum is `4.0` as `float`, then the assignment drops the fraction.
- **Lapse rate is linear**: 5 °C per km. Height for 0 °C is `tempCel / 5` **kilometres**, not metres.

## Non-obvious things that clicked

- `setprecision` without `fixed` counts *significant digits*, so `setprecision(4)` on `2.0196` prints `2.02` and `setprecision(2)` prints `2`. With `fixed`, `setprecision(2)` gives `2.02`. `c4.cpp` walks 6 → 1 and shows both the rounding and the trailing-zero drop.
- `round()` rounds halves away from zero: `round(-12.5)` → `-13`, `round(12.5)` → `13`. `round(-12.3453)` → `-12` (nearest, not truncation).
- `abs()` is overloaded for floating types in `<cmath>`; `abs(-12.3453)` → `12.3453`.
- `8.848 / 0` is **not** a crash for `double`: it evaluates to `inf`, and `-Wall` produces only a `-Wdiv-by-zero` warning. The integer version is the dangerous one.
- Reading `040512-14-5567` into `long long` stops at the dash and drops the leading zero → `40512`, so `/ 10000000000` gives `0` and the program reports `1900`. `3c.cpp` only works on a dash-free IC (and even then needs the century pivot).
- `4b.cpp` prints `-2632 fahrenheit` on Everest because `tempF_mtEverest` is multiplied by `1000`; the old snapshot saved at the bottom of the file (`-2.632`, `50.512 feet`) is from before that edit.
- The `0F` height in `4b.cpp` is `tempFahr / 2.7`, which is **thousands** of feet, not feet (and `0C` is kilometres labelled `m`). Same unit slip as `4.cpp`.
- `c2.cpp`'s `avg_3mth` is `(100 + 300 + 50) / 3 = 150` — the average rainfall over the three months. Averaging the three *per-day* averages would be `(3.33 + 9.68 + 3.33) / 3 ≈ 5.4`; the two are different questions.
- `c3.cpp` prints `Paddington  went` with two spaces because the second string already starts with a space and the `cout` adds another.
- `c5.cpp` reports `76.1 slices`: the formula gives a fractional slice count, and nobody floors it. A real pizza answer is `76`.
- `2.cpp` now actually prints the average (`2.33`) — an earlier note in this file said it printed the total; that was fixed in the file itself (`avgRain = totalRain / 3`).

## Loose ends / things that look wrong on purpose

- `3.cpp` age is `122`: `2026 - 1900 - 4` mixes the `1900` offset with a `substr` value that is really `04` → `4`.
- `3b.cpp` is correct for 2000s births but the pivot is hard-coded (`<= 26`); when the current year's last two digits pass 26, a birth year of `27` will be read as `1927`.
- `3c.cpp` is wrong for two reasons: the dash truncates the read to `40512`, and `1900 + YY` has no 2000s branch.
- `4.cpp` / `4b.cpp`: `hgt_temp_0` is kilometres (`25 / 5 = 5`) reported as metres — it should be `5000 m`; `4b.cpp` also needs `tempF_mtEverest` without the `* 1000` and the `0F` height × `1000`.
- `4.cpp`'s own note: *"astaga i couldve just used constant instead of separate function, it be better"* — the conversion is a one-liner, so a `const` or inline expression would do.
- `2.cpp` reads each month with `cin >>`, so `New York` would split into two reads.
- `c1.cpp`–`c5.cpp` are chapter exercises with values hard-coded in the source, not read with `cin`.
- Binary leftovers: `5` (extensionless) next to `5.cpp`, plus `n1`.
- `lecture2.md` holds the class notes from this week (`cin.getline()` + `cin.ignore()`, `<cmath>` and friends, `<random>`, `static_cast`, the Decomposition→Evaluation design steps).
- `3c.cpp` still carries the Week 2 `stoi` comment even though it no longer uses `stoi`.
