# Week 3 — insight

What I want to remember, as opposed to what I ran (that is in `done.md`).

## Text and numbers are two directions

- **text → number**: `substr` picks the characters, `stoi` turns them into an `int`. `"04"` → `4`.
- **number → text/digits**: `/ 10^n` keeps the head, `% 10` keeps the tail, `to_string` rebuilds.
- The IC exercises use both directions for the same problem; choosing the wrong one is what made `3.cpp` print 122.

## Formatting has two independent knobs

`setprecision` is not "decimal places". It is **significant digits** until `fixed` is added. `showpoint` is a third, separate switch for keeping trailing zeros and the dot. `c4.cpp` is the ladder that proves it: `2.0196` → `2.0196, 2.0196, 2.02, 2.02, 2, 2`.

## Units belong in the name

`hgt_temp_0 = tempCel / 5` is not wrong arithmetic; it is **kilometres** stored in a variable printed as metres. `4b.cpp` repeats the mistake twice (`°F × 1000`, `thousands of feet`). Naming variables `hgtFt_1km` / `tempF_mtEverest` makes the mistake visible on the line it happens.

## Constants should be derived, not copied

`1.cpp` is the model: from 30 cookies / 10 servings / 300 calories it computes `100 cal per cookie`, so changing one input number updates the answer. The same idea applies to `PI`, `M_TO_FEET`, and the lapse rate — the `4.cpp` note already spotted that the conversion function is overkill for a one-line constant.

## Compiler messages are answers

- `auto` forward declaration: `use of 'auto convert(double)' before deduction of 'auto'` — the return type has to be known where the call is.
- `8.848/0`: result `inf`; with `-Wall` the only complaint is `-Wdiv-by-zero`. Floating division by zero is a value, not a crash.

## String versus number I/O

`cin >>` into a `string` reads one token; into a number it stops at the first character that cannot be part of the number (`-` in an IC). That single rule explains both `2.cpp`'s month limitation and `3c.cpp`'s `1900`.
