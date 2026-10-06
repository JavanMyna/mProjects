# Week 1 — done

Files: `Week1/*.cpp` (written 2026-09-29 and 2026-10-06).
Toolchain: `g++ 16.2.0` (MSYS2), each file compiled on its own into a `.exe`.

## What I actually ran

| File | Program | Fundamental I met |
|---|---|---|
| `second.cpp` | "Hello World!" | `#include <iostream>`, `int main()`, `cout`, `\n`, `return 0`, first look at `getchar()` |
| `B.cpp` | name + city prompt | `string` variables, `getline(cin, x)` for text with spaces, `cout` as a prompt, `endl` |
| `C.cpp` | pointer to an `int` (25) | `int *ptr = nullptr;`, `ptr = &x;`, `*ptr` — address-of, dereference, null pointer |
| `4a.cpp` | top-sellers list | separate `cout` statements, one line each |
| `4b.cpp` | "Programming is great fun!" | why `using namespace std;` exists |
| `4c.cpp` | prints `The ` | (exercise cut short — only the first `cout` is there) |
| `f.cpp` | journey / balance / galaxy | `int`, `unsigned int`, `unsigned long long`, `string`, assigning big values |
| `h.cpp` | full ASCII table 0–126 | `char`, `for (i=0; i<127; i++)`, `letter = i` turning a number into a character |
| `l.cpp` | prints `1` then `0` | `bool` |
| `o.cpp` | weekly wages | comma-separated declarations, `double` arithmetic |

## Fundamentals, in my words

- **Toolchain**: write `.cpp` → `g++ file.cpp -o file` → run the `.exe`. PowerShell shortcut I picked up in `h.cpp`:
  `g++ h.cpp -o h;if ($?) { ./h}` — "like `&&` but in powershell": compile, and only run if the compile succeeded.
- **Program skeleton**: `#include` → `using namespace std;` → `int main() { ... return 0; }`.
- **Output**: `cout << ... << ...`, `endl` vs `\n`.
- **Input**: `cin >> value`; `getline(cin, text)` when the text can contain spaces (`B.cpp`).
- **Types so far**: `int`, `unsigned int`, `unsigned long long`, `double`, `char`, `bool`, `string`.
- **Declarations**: one variable per line, or a whole group typed once — `double a, b, c = 1.0;` (`o.cpp`, later reused all over Week 2).
- **Control flow**: the first real loop — `for (start; condition; update) { }` (`h.cpp`).
- **char ↔ int**: a `char` is a small number. 65 prints `A`, 66 prints `B`; the `h.cpp` loop prints the whole table.
- **Pointers, first contact**: `int *ptr = nullptr;` then `ptr = &x;` makes `*ptr` read `x`'s value. Ran it, prints 25 twice.
- **Comments**: the book pushes commenting *what the code is doing*, which is what these files do.

## Non-obvious things that clicked

- Drop `using namespace std;` and `cout` stops existing — the compiler said exactly:
  `error: 'cout' was not declared in this scope; did you mean 'std::cout'?` So `cout` is really `std::cout`.
- `bool` only ever prints `1` or `0` (`l.cpp`).
- A `char` can just be assigned the loop counter and it renders as a character, not a number.
- `unsigned long long` swallowed `1000000000000000` without complaining (`f.cpp`).

## Loose ends

- `7.cpp` sits at the repo root, not in a week folder (2026-10-06 18:42): `#include <cmath>`, `const double PI`, `area = PI * pow(radius, 2.0)`, radius read with `cin`. Verified run: radius 2 → `12.5664`. It belongs with the chapter exercises, so it's probably Week 1/2 material — decide which folder it goes in.
- `4c.cpp` is unfinished (prints only `The `).
- `4a.cpp` / `4b.cpp` names are swapped — `4a.cpp` literally says *"this is actually 4b but ah whatever"*.
- The "error" `4a.cpp` is asking about is still unidentified; see `questions.md`.
