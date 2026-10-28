# Week 5 — insight (in progress)

First mental model of loops, from two programs.

## A loop is four pieces, not one line

`for (int i = 1; i <= value; i++)` hides four separate ideas: **initialise**, **test**, **body**, **update**. The test happens before the body; the update happens after the body; the test happens again. Reading `1.cpp`'s note — *"condition comes first"* — is the whole order. If a loop misbehaves, check those four pieces in that order.

## The accumulator lives outside

`sum` is declared before the loop and changed inside it. The loop does not "know" the answer; it just visits. That split is why the same loop shape works for counting, multiplying, concatenating and searching — only the operation inside changes.

## The type of the accumulator is part of the algorithm

`int sum` is correct for `n = 10` and wrong for `n = 100000`. Sums grow like `n²`, so the accumulator needs to be chosen from the *largest* input, not the sample input.

## A formula is a shortcut for a loop you already understand

`n(n+1)/2` and the loop agree. Write the loop first so the definition is visible; use the formula once you can explain why it is the same thing.

## A `char` loop is an integer loop with a different output

`char a = i;` converts the counter to a byte. The loop is still `0 … 127`; only `cout` changes what the number looks like. That is why the same loop can print a table, a string, or garbage — the data is the same, the rendering is not.

## What "printed" means for bytes

Control characters are real output. The capture of `b.cpp` contains NUL, BEL and CR bytes, so the table's layout is affected before any manual newline. When output is data (not prose), separators and line breaks are part of correctness.
