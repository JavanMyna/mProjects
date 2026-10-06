# Week 2 — done

Files: `Week2/*.cpp` (written 2026-10-04 → 2026-10-07).
Same toolchain: `g++ 16.2.0` (MSYS2), one `.exe` per file.

## What I actually ran

| File | Program | Fundamental I met |
|---|---|---|
| `1.cpp` | 5% / 7% / 10% of 6000 | one `double` reused three times, percent as `* 0.05` |
| `2.cpp` | sale price of 59.95 | chaining results (`discount` → `salePrice`), grouped declarations |
| `3.cpp` | rightmost digit of 12345 | the modulo operator `%` |
| `4.cpp` | 36000 s → minutes + seconds | integer division `/` together with `%` |
| `6.cpp` | decimal value of a fraction | `cin >>` into a `double`, division that keeps decimals |
| `11.cpp` | books per month | **`static_cast<double>`** to stop integer division |
| `13.cpp` | 3×3 number grid | **`<iomanip>` + `setw(6)`** for right-aligned columns |
| `20.cpp` | three random numbers | `<cstdlib>` (`rand`, `srand`), `<ctime>` `time(0)`, seeding |
| `test.cpp` | `4294967295` / `4294967295` / `18446744073709551615` | `unsigned` limits and wraparound |

## Fundamentals, in my words

- **Modulo `%` = remainder.** `number % 10` → last digit; `% 60` → leftover seconds; `% 2 == 0` → even test.
- **Integer division truncates.** `12 / 5` is `2`, not `2.4`. Verified: `int/int` → `2`, `static_cast<double>(books)/months` → `2.4`. You must make one side a `double`.
- **`static_cast<type>(value)`** — the C++ way to convert on purpose (`int` → `double`) instead of letting the compiler decide what division means.
- **`<iomanip>`**:
  - `setw(6)` pads the next item to width 6, right-aligned by default; it has to be repeated for every item.
  - `setprecision(n)` controls decimal places (noted, not used yet).
- **Random numbers**: `srand(seed)` seeds, `rand()` produces, `time(0)` gives the current time — so `srand(time(0))` makes each run different. `srand` = "seed random".
- **`unsigned`**: no sign bit → only 0 and up, but a bigger positive max. Assigning `-1` wraps around to the max: `unsigned int` → `4294967295`, `unsigned long long` → `18446744073709551615`.
- **`long` is not portable for size.** `unsigned long b = -1;` printed `4294967295` like `unsigned int` — on this Windows/MSYS2 build `sizeof(unsigned long)` is **4 bytes**, so `long` gave me nothing extra. `long long` did (8 bytes).
- **Reusing a variable** beats making new ones: `contribution` is recomputed three times in `1.cpp`.

## Non-obvious things that clicked

- `time(0)` — the `0` is a *dummy argument* ("I dont wanna store it anywhere"), not a starting point; modern code writes `nullptr`.
- An IDE/compiler underlined `rand()` red — the real cause was the missing `using namespace std;`.
- `unsigned seed = time(0);` — `unsigned` matches what `time()` returns (no negative times).

## Loose ends

- `4.cpp` note *"hmmmm i wanna try the iomanip"* → done in `13.cpp`.
- `note.md` / `insight.md` hold the `unsigned` limits note and the plan to *"work on math more"* before moving on.
- `test.cpp` still has a commented-out curiosity: `int long long num2 = 18446744073709551615 / 4294967295;`.
- Nothing here uses `setprecision` yet, and no program reads a `char`/`string` back out — both are next.
