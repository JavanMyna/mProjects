# Week 5 — done (in progress)

Files: `Week5/*.cpp` (written 2026-10-28, so far).
Toolchain: `g++ 16.2.0` (MSYS2), one `.exe` per file.

Only two programs exist so far — this file gets extended as the week continues.

## What I actually ran

| File | Program | Fundamental I met |
|---|---|---|
| `1.cpp` | sum 1…n | `for` loop with an accumulator (`sum += i`), rejecting a negative input first |
| `b.cpp` | ASCII table 0–127 | `char` from the loop counter, printing the raw byte, breaking the line every 16 |

## What each one printed

- `1.cpp`, input `10` → `Input positive value: 55` (no trailing newline). `1 + 2 + … + 10 = 55`.
- `b.cpp` → characters 0–127 with no separators, a newline after `i = 16, 32, 48, …`. The start is invisible control bytes (NUL, BEL, backspace, tab); byte 10 is itself `\n` and byte 13 is `\r`, so the raw output gains line breaks before the manual ones. Printable text starts at space (`32`) and runs `!"#$%…` through `qrstuvwxyz{|}~`, ending with DEL (`127`).

## Fundamentals, in my words

- **`for (init; condition; update)`** — the order is initialise once, test the condition, run the body, then update, then test again. The condition is checked **before** the body and the update never runs after the last failed test (`1.cpp`'s own note: *"i thought its the other way around, but condition comes first before the other"*).
- **Accumulator pattern**: `int sum = 0;` outside the loop, `sum += i;` inside. The loop's job is to visit; the sum's job is to remember.
- **Validate before looping**: `1.cpp` checks `value < 0` first and exits with `Must be a positive number`; the loop only runs on a value that passed.
- **A `char` is a number**: `char a = i;` in `b.cpp` converts the integer to a character, so the loop `i = 0 … 127` walks the whole ASCII range.
- **`cout << a` on a control character writes the byte**, not a name. There is no visible glyph for 0–31, so the table looks like garbage before `space` (32).
- **Line breaking inside a loop** is just another `if`: `if (i > 15 && i % 16 == 0) cout << endl;`.

## Non-obvious things that clicked

- The newline guard is checked *after* printing, so `i = 16` ends the first line — each row holds 17 characters (`0–16`), not 16. To break every 16, test `i % 16 == 15`.
- The range `i < 128` includes `127` (DEL), another non-printable byte. The readable table is 32–126.
- Printing NUL/BEL is not harmless "empty output": BEL (7) can beep and NUL is a real byte in the stream; redirecting the output to a file gives a binary-looking file, not text.
- `int sum` is fine for 10, but `1 + … + n` overflows a 32-bit `int` at `n = 65,536` (the sum would be `2,147,516,416`). The type is part of the loop's correctness.
- `1.cpp` prints no newline at the end, the same habit as `ts.cpp` in Week 4 — the next shell prompt sits on the same line.
- `b.cpp`'s `i > 15` guard is what stops a blank line at `i = 0` (zero is a multiple of 16); removing it puts an empty row before the table.

## Loose ends

- The week just started: only exercises 1 and `b` exist; no `2.cpp`… yet.
- `b.cpp` should probably start at 32 (printable) or print the numeric code next to the character (`int` cast) so the table is readable.
- `1.cpp` exits on a negative input instead of asking again; a `do`/`while` or `while (!valid)` loop would keep the program alive.
- The `for` line has the accumulator at `i = 1`; check the empty case (`value = 0`) prints `0`, not nothing.
- Both `.exe` files are built and committed next to the sources.
