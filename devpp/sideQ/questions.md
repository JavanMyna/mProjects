# side quests — questions

Accumulated from `sideQ/**`. Wording kept as I wrote it.

## Still open

- **Multi-file builds**: what is the exact command to compile `main.cpp` + `math.cpp` together, and when do I need the `.o` + link step instead of one command? (`2fCalc/main.cpp`)
- **Refactor `quiteHi.cpp`**: reuse `i` instead of the separate `number++` counter — *"I could just reuse the i, to make it much more easier"*. Doing it changes the output range, so it needs a think.
- **Function declaration vs definition** — why does the compiler accept `add` on the line above and only complain about the body at link time? (`2fCalc`)
- **`quite.md` is empty** — what was I going to put in it?
- **`static_cast<int>`** — `pointsEarned = static_cast<int>(withdrawValue / 10)` in `miniATM2` throws away the fraction; does it truncate toward zero, and would `round()` be more honest for loyalty points?
- **`setw` on a long string** — `cout << setw(12) << "\n===== MYNBANK ATM =====\n..."` has no visible effect because the string is wider than 12. How do I indent a whole multi-line block?
- **`setw` and `\n`** — the menu starts with `\n` inside the padded string; does `setw` count those characters, and does it pad before or after the newline?
- **Two return conventions** — `deposit()` returns the new balance, `withdraw()` returns the amount to subtract. Both work, but is one convention the standard?
- **Negative deposit** — `withdraw` guards `< 0`, `deposit` does not; should deposit accept a negative and quietly reduce the balance?
- **Letters in the menu** — `cin >> userChoice` into an `int`; what happens on `abc`, and why would the `while (true)` loop spin forever? How is `cin.clear()` / `cin.ignore()` used?
- **Points policy** — points are earned only on withdrawals, not deposits; is that intentional (spend to earn) or just where the exercise went?

## Answered along the way (kept for reference)

- *"How do I loop in cpp? for"* (`quiteHi.cpp`) → answered by writing the `for (int i = 0; i < 10; i++)` loop.
- *"How would the math looks like here?"* (odd/even) → answered: `if (number % 2 == 0)`.
- *"How do I make it so that, when it divides by 2, it will be caught as an integer"* → *"Oh modulooo long time no see. Just like Python, we use % to see if theres remainder or not, so if its confirmed an integer, remainder will be 0"*.
- *"Wahhhhh so thats what an exe file is for. We link them."* → answered by actually building `calculator.exe` from `main.o` + `math.o`.
- `miniATM2`, withdraw `100` from `1000` → balance `900.00`, `10` points earned; withdraw `2000` → insufficient funds, balance unchanged, `0` points. The `static_cast<int>` split is `100 / 10 = 10`, no fraction.
- `miniATM2`'s `setw(12)` before the menu string does nothing visible: the menu is much wider than 12 characters, and the first character is `\n`, so there is no left margin to pad.

## Follow-ups worth asking

- Does `add` need a declaration at all if `math.cpp` is included instead of linked?
- What is the difference between `#include "math.cpp"` and linking `math.o`, and why is including the `.cpp` wrong?
- `.o` vs `.exe` — what exactly does the linker add to the object file?
