# side quests — done

Files: `sideQ/` and `library/` (2026-09-29 → 2026-10-18). Not a week — stuff I built on my own while following the book.

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

## `sideQ/rectCalc/calc.cpp` — three helper functions (2026-10-07)

Plan first, as comments: *(length, width) → area `l*w`, perimeter `2l+2w` → display area, perimeter, square/rectangle.*

- First program split into `findArea`, `findPerimeter`, `compareShape` — declared above `main`, defined below.
- `compareShape` returns a `string`: `if (length == width) return "Square"; else return "Rectangle";`.
- Ran it: length 4, width 4 → `Area value: 16m`, `Perimeter value: 16m`, `Shape is a Square`.
- Noted in the file: *"Its better to put double in this"* — area and perimeter are `int` here, and the area unit should be `m^2`.

Fundamentals: returning a value, a `string` return type, prototypes, and keeping one type through a helper (*"gotta stay consistent, this line should be double"*).

## `sideQ/miniATM/main.cpp` — my first menu loop (2026-10-07)

- Plan in comments: `while (true)` menu, `break` for exit — *"Im gonna do what i did in python back then"*. Features: Check Balance / Deposit / Withdraw / Exit.
- `deposit(double balance)` and `withdraw(double balance)` each take the balance and hand back the new one; `main` reassigns `balance = deposit(balance);`.
- `withdraw` guards both directions: negative amount → *Invalid amount*, more than the balance → *Insufficient funds*, otherwise `balance - withdrawValue`.
- Ran it: `1` → `Balance: RM1000`, `4` → `Thank you for using MynBank!`.
- Two realisations in the comments: a helper that only prints can't be made to return nothing cleanly, and the final `else` after the two guard `if`s is unnecessary.

Fundamentals: passing by value and returning the updated value, `break`, and validating input before using it.

## `sideQ/numberMan/main.cpp` — `<cmath>` playground (2026-10-08)

- Reads one number, prints it back with modifiers: `+10`, `*2`, `pow(numberUser, 26)`, `%3`.
- Ran it with `7` → `17`, `14`, `9.38748e+21`, `1`.
- The line is labelled `squared` but the exponent passed to `pow` is `26` — that is why the number explodes.

Fundamentals: `pow()` and `<cmath>`, `%` again, chained `cout`.

## `sideQ/gradeChecker/main.cpp` — grade analyzer, unfinished (2026-10-10)

- Reads a name and three subject marks, sums them into `totalMarks`, then `double avgMarks = totalMarks / 3;`.
- Ran it: Ali 90/80/70 → `Total marks: 240/300`, `Average: 80`.
- Deliberately unfinished: `Highest  mark:`, `Lowest mark:` and `Grade:` print empty.
- Watch out: `totalMarks / 3` is integer division — `240/3` happens to be exact, but `241/3` would truncate.
- `gradeChecker/1.cpp` is a separate scoping test: an inner `int value = 200;` shadows the outer one, so it prints `100`, `200`, `100`.

Fundamentals: `cin >>` into `int`, integer vs `double` division, laying a report out with `cout`, and shadowing.

## `sideQ/staticCas/main.cpp` — started, not finished (2026-10-14)

- Goal: practise `static_cast` by averaging a total price over a number of items.
- Only the three prompts exist — *Enter total price*, *Enter number of items*, *Average price per item* — with no input and no math yet.

## `library/stitch/` — one idea in two languages (2026-10-14)

- `main.cpp`: `vector<int> digits` with `push_back` calls, a range-`for`, `result += to_string(digit)`, prints `123`.
- `stitch.py`: the same program in Python (`list`, `append`, `str(digit)`).
- Intent, in the file's own comment: *"If I were to do Week3 3.cpp my own way"* — collect the digits in a list and stitch them back into one value instead of using `substr`.

Fundamentals: `vector`, `push_back`, the range-based `for`, `to_string`, and the C++/Python correspondence.

## `sideQ/miniATM2/main.cpp` — miniATM with loyalty points (2026-10-18)

Rebuilt the ATM menu to practise `iomanip` and `static_cast`.

- Same `while (true)` menu: 1 Check Balance, 2 Deposit, 3 Withdraw, 4 Exit; `break` on 4.
- `deposit(balance)` returns the **new balance**; `withdraw(balance)` returns the **requested amount** (or `0` on invalid), and `main` subtracts it. Two different return conventions in one program.
- Loyalty points: `pointsEarned = static_cast<int>(withdrawValue / 10);` — one point per RM10, fraction discarded; `points += pointsEarned` keeps the total.
- Guards in `withdraw`: negative amount → *Invalid amount*, more than the balance → *Insufficient funds*; both return `0`, so no points are earned.
- Ran it: `1` then `4` → `Balance: RM1000.00`, `Current Loyalty points: 0`. Withdraw `100`, then balance check → `RM900.00`, `Loyalty points earned: 10`, total `10`. Withdraw `2000` → insufficient-funds message, balance stays `RM1000.00`, earned `0`. Deposit `50` → `RM1050.00`.

Fundamentals: menu loop, `break`, passing/returning `double`, `static_cast<int>` to discard the fraction, `fixed`/`setprecision(2)` for money.

## Notes

- `quite/quite.md` is empty — placeholder from `quiteHi.exe` time (2026-09-29 17:05).
- `Week1/second.cpp` says "my first C++ program" (2026-09-29) — so this side-quest time is where the whole thing started.
