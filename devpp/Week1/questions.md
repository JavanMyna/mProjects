# Week 1 — questions

Accumulated from comments inside `Week1/*.cpp`. Wording kept as I wrote it.

## Still open

- **`getchar()` — what is it?** (`second.cpp`: *"I dont know what this is"*) Why did I even need it after `cout`?
- **Does removing `return 0;` really stop the program?** (`second.cpp`: *"removing this would mean the programme never ends, which is not a good idea"*) — or does running off the end of `main` also end it?
- **`4a.cpp`: *"Theres an error?? What does she mean"*** — which error was the exercise pointing at, and where is it in my output?
- **Pointers.** `C.cpp` runs but I only copied it: what does `nullptr` mean, what is `&x`, what is `*ptr`, and when would I want a pointer instead of just using `x`?
- **Why is 65 `A`?** (`h.cpp`) Is it always 65, on every machine?
- **Will `bool` ever be 2?** (`l.cpp`) Why does it print `1`/`0` instead of `true`/`false`?
- **Do I need `unsigned` at all yet?** (`f.cpp`) — `miles = 4276` would fit in a plain `int`.
- **`4c.cpp`** — what was the exercise actually asking for? It only prints `The `.

## Answered along the way (kept for reference)

- *"if without the using thingy, it will give out error: 'cout' was not declared in this scope; did you mean 'std::cout'?"* → confirmed by the compiler itself (`4b.cpp`).
- *`g++ h.cpp -o h;if ($?) { ./h }`* → *"tis is a good knowledge, its like && but in powershell"* (`h.cpp`).

## Follow-ups worth asking

- When is a `char` compared/added as a number vs printed as a letter?
- `h.cpp` writes `letter = i;` for a `char` — is that an implicit conversion, and is it "safe"?
- `B.cpp` mixes `cin >>` and `getline` — what happens if both are used in the same program?
