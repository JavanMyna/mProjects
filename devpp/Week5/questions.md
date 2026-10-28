# Week 5 — questions (in progress)

Accumulated from `Week5/*.cpp` so far.

## Still open

- **Loop order** — I now know `for (init; condition; update)` tests the condition *before* the body. Where does the update run when the body executes `continue`?
- **`for` variable scope** — `int i` declared in the `for` header: is it gone after the loop, and why does that matter for a second loop using `i` again?
- **Sum overflow** — `int sum` breaks at `n = 65,536`. Is `long long` the right fix, or should the loop stop at the last safe `n`?
- **Formula vs loop** — `n(n+1)/2` gives the same answer with no loop. Which one should the exercise use, and how would I know a formula exists before writing the loop?
- **Invalid input** — `1.cpp` exits on a negative number. How do I write "ask again until valid" without an infinite loop ( `while` vs `do … while` )?
- **`value = 0`** — the loop does not run and prints `0`; is that the expected answer for "sum 1…0"?
- **`i < 128` vs `i < 127`** — should the ASCII table include DEL (127), and should it start at 32 instead of 0?
- **Printing control characters** — `cout << char(7)` emits BEL. Is there a portable way to show the *name* or the code instead of the byte?
- **Table layout** — is `setw` the right tool for "code, then character" columns, given `setw` only applies to the next item?
- **`\n` vs `endl` in a loop** — the Week 3/4 notes say `endl` flushes. Does flushing on every row matter here, and when does it start to matter?
- **`char` signedness** — with `i` from 0–127 it doesn't matter, but at 128+ would `char a = i;` print a negative value on this compiler?
- **What are the Week 5 exercises?** — only `1.cpp` and `b.cpp` exist; is `b` the ASCII-table exercise or a side experiment?

## Answered along the way (kept for reference)

- *"i thought its the other way around, but condition comes first before the other"* (`1.cpp`) → verified: initialise once, test, body, update; `1 + … + 10 = 55`.
- `sum` must start at `0` before the loop, otherwise the first `+=` reads garbage.
- A negative input reaches the error branch and the loop is skipped entirely; the program prints `Must be a positive number` and exits.
- `b.cpp`'s first manual line break happens after `i = 16`, so rows are 17 characters; the `i > 15` guard exists because `0 % 16 == 0` would otherwise break before printing anything.
- Characters `0–31` are control bytes, `32` is space, `33–126` are printable, `127` is DEL — that is why the table is unreadable at the start.

## Follow-ups worth asking

- Rewrite the sum as `long long` and test `n = 65535`, `65536`, `100000` to see the overflow appear.
- Add a `do … while (value < 0)` input retry and check that a valid number on the second try works.
- Change the ASCII loop to `32 … 126` and print `setw(3) << i << ' ' << a` so every row is readable.
- Replace `endl` with `'\n'` and compare output; the bytes should be identical apart from flushing.
