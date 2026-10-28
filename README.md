# mProjects

A personal playground for learning programming languages, organised by language and
by how far along each exercise is. Most of the code is beginner C++ written while
working through the fundamentals — variables, I/O, references/pointers, loops,
conditionals, and functions.

Notes are kept as `.md` files next to the code and read like a learning journal
(questions, realisations, timestamps). They are part of the repo on purpose.

## Layout

```
mProjects/
├── cpp-thee/                Newest C++ work
│   └── gradeCheck/          Mark (0–100) -> letter grade, if/else ladder
├── cpp-thy/                 Earlier C++ exercises
│   ├── greetName/           Read a name, print a greeting
│   ├── tekunCh/             getline() + string comparison
│   ├── point/               References and pointers (notes, partly TODO)
│   └── eep/                 std::this_thread::sleep_for demo
├── devpp/                   C++ practice, one folder per week plus side quests
│   ├── Week1/               First programs: Hello World, name/city, pointers
│   ├── Week2/               Modulo, integer division, static_cast, setw, rand
│   ├── Week3/               Strings (substr/stoi), functions, multi-step math
│   ├── Week4/               Conditionals: if/else ladders, &&/||, nested if, rand quiz
│   ├── Week5/               Loops: accumulator, char/ASCII table (in progress)
│   ├── sideQ/               Self-set programs: quite, 2fCalc, rectCalc,
│   │                        miniATM, miniATM2, gradeChecker, numberMan, staticCas
│   └── library/             Experiments: stitch (vector+string vs Python)
├── inactive/                Other languages, not currently active
│   ├── py-like/             Python (simple greet, waka-waka output)
│   ├── go-go/               Go (age input, print, imports)
│   └── java-thing/          Java (Scanner-based price formatting)
├── test.md                  Scratch file
└── README.md
```

Compiled binaries (`.exe`, and extensionless ELF/PE files like `main`, `isit`) are
committed alongside their sources for convenience. There is no `.gitignore`.

## Building and running

### C++

The pattern used throughout (see `cpp-thee/gradeCheck/gradeCheck.cpp`):

```sh
g++ -Wall -Wextra -std=c++20 gradeCheck.cpp -o gradeCheck.exe && ./gradeCheck.exe
```
or
```sh
g++ -Wall -Wextra -std=c++20 gradeCheck.cpp -o gradeCheck.exe; if ($?) {./gradeCheck.exe}
```

- `-Wall -Wextra` enable extra warnings (catch hidden bugs).
- `-std=c++20` selects the modern language standard.
- `-o <name>` sets the output file name.

Compile from the directory containing the source, or adjust the paths.

### Python

```sh
python main.py
```

### Go

```sh
go run gopal.go
```

Each Go file is `package main` with its own `func main()`; they are standalone.

### Java

```sh
javac Main.java && java Main
```

## Conventions

- One topic per folder; the folder name usually describes the exercise.
- Sources are heavily commented with questions and reasoning — that is the point.
- `note.md` / `done.md` files capture what was learned, not documentation of the code.
