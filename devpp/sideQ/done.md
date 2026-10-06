# side quests — done

Files: `sideQ/` (2026-09-29 and 2026-10-06). Not a week — stuff I built on my own while following the book.

## `sideQ/quite/quiteHi.cpp` — my own program (2026-09-29)

First thing I wrote from a blank file instead of copying: prints whether each number is odd or even.

- Wrote the plan first as comments — *Input : Number / Process : Checks if it is odd or even / Output : Display it as odd or even*.
- `for (int i = 0; i < 10; i++)` with a separate `number++` counter.
- `if (number % 2 == 0)` → even, `else` → odd. Ran it: `1 is Odd` … `10 is Even`.
- Found on my own that `i` could replace the extra counter: *"I could just reuse the i, to make it much more easier"*.

Fundamentals: `for` loop, counter variable, `if/else`, `%` as an integer test, `std::cout` with `\n` inside a loop.

## `sideQ/2fCalc/` — multi-file build (2026-10-06)

First program split across two `.cpp` files.

- `main.cpp` declares the function — `int add(int a, int b);` — and calls `add(10, 20)`.
- `math.cpp` defines it — `int add(int a, int b) { return a + b; }`. No `#include` needed there.
- Compiled both to `.o` files, then linked them into one `calculator.exe`.
- Takeaway I wrote down: *"so thats what an exe file is for. We link them."* — *"we can make lots of cpp files, compile them into a .o file, then later link them altogether into one single exe file"*.

Fundamentals: function declaration vs definition (prototype in `main.cpp`), separate compilation, `.o` object files, linking, why the linker needs both pieces.

## Notes

- `quite/quite.md` is empty — placeholder from `quiteHi.exe` time (2026-09-29 17:05).
- `Week1/second.cpp` says "my first C++ program" (2026-09-29) — so this side-quest time is where the whole thing started.
