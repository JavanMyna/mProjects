# Week 3 — done

Files: `Week3/*.cpp` (written 2026-10-12 → 2026-10-14).
Toolchain: `g++ 16.2.0` (MSYS2), one `.exe` per file.

## What I actually ran

| File | Program | Fundamental I met |
|---|---|---|
| `1.cpp` | cookies → calories | deriving a constant first (`1 cookie = 100 cal`), then `cookieAte * 100` |
| `2.cpp` | average rainfall for 3 months | `string` + `double` input pairs with `cin >>`, building one `cout` across several `<<` |
| `3.cpp` | IC → age | **`substr(0, 2)`** and **`stoi`** — first time pulling part of a string and turning it into a number |
| `3b.cpp` | IC → birth year | `if (digits <= 26) 2000 + digits; else 1900 + digits` — choosing the century |
| `4.cpp` | lapse rate | my first function with a parameter: `double convert_to_Fahr(double)` |
| `5.cpp` | Joe's stock profit | chaining many named results (`totalPurchase` → `commissionPaid_buy` → `profit`) |
| `n1.cpp` | circumference of a circle | `const double PI`, `const double DIAMETER` |
| `n2.cpp` | `float` sum into an `int` | truncation on assignment |

## What each one printed

- `1.cpp`, input `5` → `You have eaten 5 cookies` / `Total calories consumed: 500cal`.
- `2.cpp`, June 2.5, July 1.5, August 3.0 → `The average rainfall for June,July and August is 7 inches.`
- `3.cpp`, IC `040512-14-5567` → `Your age is 122 years old!`
- `3b.cpp` → `As a number: 4` / `Full Birth Year: 2004`.
- `4.cpp`, sea level 25 → sea level `77F`, `1000m: 20C`, `2000m: 15C`, `3000m: 10C`, Everest `44.24C`, `height at which the temperature is 0C: 5m`.
- `5.cpp` → paid `RM45500`, buy commission `RM910`, sold `RM56900`, sell commission `RM1138`, profit `RM9352`.
- `n1.cpp` → `The circumference is: 31.4159`.
- `n2.cpp` → `4` (from `float a = 2.5, b = 1.5;` into `int x`).

## Fundamentals, in my words

- **`substr(start, length)`** — note it is *substring*, not "subtract". `userIC.substr(0, 2)` takes the first two characters as a `string`.
- **`stoi`** — string to integer, "s to i". `stoi("04")` → `4`. The two-step `substr` → `stoi` is how I get a number out of text.
- **A function with arguments**: `double convert_to_Fahr(double celsiusValue)` declared above `main`, defined below, called as `tempFahr = convert_to_Fahr(tempCel);`. The return type is set on the left; `auto` is not allowed there.
- **`const`** marks a value I never intend to change (`const double PI = 3.14159;`) — same idea as Week 1's `const double PI` in `7.cpp`.
- **Chaining results** beats one long expression: `totalPurchase → commissionPaid_buy → profit` is readable and each step is nameable.
- **Mixing types still truncates**: `int x = 2.5 + 1.5;` prints `4` — the sum is `4.0` as `float`, then the assignment drops the fraction.

## Non-obvious things that clicked

- `cin >> month1` reads a single word, so a month name with a space would break it.
- Splitting `cout` over several lines is fine — the `;` is only needed at the very end, and `//` comments can sit between `<<` pairs.
- `8.848 / 0` is illegal, but the *other* direction (`tempCel / 5`) is legal and just gives the wrong number, not an error.
- Guessing the century from two digits needs a cutoff: `<= 26` means 2000s, everything else 1900s.

## Loose ends / things that look wrong on purpose

- `2.cpp` prints the **total** (`7`), not the average — the exercise asks for `totalRain / 3` (≈ `2.33`). Written up at the end of the file as *"idk what it wants lmao"*.
- `3.cpp` age comes out `122`: `2026 - 1900 - 4` mixes the `1900` offset with a `substr` value that is really `04` → `4`. `3b.cpp` is the corrected version (2000 + digits).
- `4.cpp` has two math slips: Mount Everest uses `8.848 * 5` instead of `tempCel - 8.848 * 5` (so it shows a positive number), and the 0 °C height is `tempCel / 5` = `5`, which should be scaled to metres (×1000). Both are flagged in the file's own comments.
- `3b.cpp` duplicates `3.cpp` for the post-2000 case; `n1.cpp` is the book's program pasted into the GDB online template; `n2.cpp` is a type-conversion scratch test.
- Binary leftovers: `5` (extensionless) next to `5.cpp`, plus `n1`.
- `lecture2.md` holds the class notes from this week (`cin.getline()` + `cin.ignore()`, `<cmath>` and friends, `<random>`, `static_cast`, the Decomposition→Evaluation design steps).
