# Week 2 — questions

Accumulated from `Week2/*.cpp`, `note.md`, `insight.md`. Wording kept as I wrote it.

## Still open

- **`static_cast` — *"What is static_cast bro. I never seen this"* / *"Whats staatic casttttttttt"*** (`11.cpp`). What does the angle-bracket part do, and why not just write `double(books)`?
- **`setw(6)`: *"why 6 specifically tho"*** and ***"setw() idk forrr yet"*** (`13.cpp`). What does the number mean, what happens if the value is wider than 6, and how is it different from `setprecision`?
- **Is `rand()` a real RNG — *"Is this a rng machine"*** (`20.cpp`)? What range does it give, and how do I get a number between 1 and 10?
- **`unsigned`: *"what are they used for?"*** (`insight.md`) — a concrete case where `int` is wrong and `unsigned` is right.
- **Why did `unsigned long` behave like `unsigned int`?** (`test.cpp`, `insight.md`) My note guessed `long` gives more room; the run says `unsigned long` also printed `4294967295` on this machine.
- **`18446744073709551615 / 4294967295`** — commented out in `test.cpp`; what was I trying to check?
- **Integer division** — when exactly does `/` throw away the decimals, and when does the compiler promote to `double` by itself?
- **`6.cpp`** reads two `double`s with `cin` — what happens on `0` or on letters?

## Answered along the way (kept for reference)

- *"whats srand, whats seed, is it like generating random number"* → *"ooooh s in srand is seed random."*
- *"Oh wow, we have time here so we can make sure the seed are ALWAYS random, zero chance its the same"* → *"Usually theyd have srand(time(0));"*
- *"why is 0 in the time, does it mean start from 0?"* → *"Nooo Fred, it means I dont wanna store it anywhere, thats why its 0. usually in the modern times we use nullptr"* (`20.cpp`).
- *"why unsigned"* → *"Oooo literally the name, no sign, no negative numbers"* (`20.cpp`).
- *"why are u underlined red"* → *"bc u forgot the usingnamespacestd;"* (`20.cpp`).
- *"Whatttt how does that workkkk"* about `% 10` → *"I think its like it bahagi 10 so 5 is remainder then it shows it as 5 right?"* (`3.cpp`). Verified: 12345 → `5`.
- *"hmmmm i wanna try the iomanip"* (`4.cpp`) → done in `13.cpp`.

## Follow-ups worth asking

- `%` on negative numbers — what does `-7 % 3` give?
- Does `setw` left-align if I ask it to? (`left` / `right`)
- Can `rand()` ever return the same sequence twice, and why does that matter for anything real?
- *"I think I wanna work on math more than this because I think the math is a little complicated"* (`note.md`) — pick the math-heavy exercises for next week.
