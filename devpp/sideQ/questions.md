# side quests — questions

Accumulated from `sideQ/**`. Wording kept as I wrote it.

## Still open

- **Multi-file builds**: what is the exact command to compile `main.cpp` + `math.cpp` together, and when do I need the `.o` + link step instead of one command? (`2fCalc/main.cpp`)
- **Refactor `quiteHi.cpp`**: reuse `i` instead of the separate `number++` counter — *"I could just reuse the i, to make it much more easier"*. Doing it changes the output range, so it needs a think.
- **Function declaration vs definition** — why does the compiler accept `add` on the line above and only complain about the body at link time? (`2fCalc`)
- **`quite.md` is empty** — what was I going to put in it?

## Answered along the way (kept for reference)

- *"How do I loop in cpp? for"* (`quiteHi.cpp`) → answered by writing the `for (int i = 0; i < 10; i++)` loop.
- *"How would the math looks like here?"* (odd/even) → answered: `if (number % 2 == 0)`.
- *"How do I make it so that, when it divides by 2, it will be caught as an integer"* → *"Oh modulooo long time no see. Just like Python, we use % to see if theres remainder or not, so if its confirmed an integer, remainder will be 0"*.
- *"Wahhhhh so thats what an exe file is for. We link them."* → answered by actually building `calculator.exe` from `main.o` + `math.o`.

## Follow-ups worth asking

- Does `add` need a declaration at all if `math.cpp` is included instead of linked?
- What is the difference between `#include "math.cpp"` and linking `math.o`, and why is including the `.cpp` wrong?
- `.o` vs `.exe` — what exactly does the linker add to the object file?
