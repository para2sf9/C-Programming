# C Programming — Complete Learning Pack

A practical, offline-friendly C curriculum from first program through pointers, files, algorithms, interview prep and projects. Source is written for **ISO C11** and tested with GCC 14 on 64-bit Linux. Examples avoid undefined behavior; where behavior can vary by implementation, the note says so.

## Start here
1. Read `00-START-HERE.md` and follow `STUDY-ROADMAP.md`.
2. Work through `01-Introduction` to `12-Bit-Manipulation` in order.
3. Compile a file: `gcc -std=c11 -Wall -Wextra -Wpedantic -g main.c -o main` then `./main`.
4. Try `14-Practice-Questions` before reading solutions.
5. Use `13-Interview-Questions/INTERVIEW-QUESTIONS.md` for interview revision.
6. Build a project from `15-Projects` and explain your design choices aloud.

## Folder guide
- `01`–`12`: lessons, exercises, compilable examples, and annotated diagrams.
- `13-Interview-Questions`: 250 frequently asked questions, concise explanations, runnable C code, and observed output.
- `14-Practice-Questions`: pattern problems, coding drills, real-world scenarios, solutions, code, and output.
- `15-Projects`: complete small C projects with source, build instructions, and sample runs.
- `16-Real-World-Examples`: technical examples connecting C to embedded, systems, data, and performance.
- `17-Images`: 12 diagrams explaining core ideas step by step.

## Build safely and portably
Use `gcc -std=c11 -Wall -Wextra -Wpedantic`. Do not use `gets`, `void main`, `fflush(stdin)`, or assume `sizeof(int)` is the same on every machine. Check input, allocation and file operations. `scanf` is demonstrated for simple teaching examples; robust programs prefer `fgets` plus validation.

## Note on outputs
Every displayed output was captured by compiling and running its corresponding source with the included GCC toolchain. Addresses, struct sizes, file paths, timing, and platform-specific details can differ elsewhere; such cases are explicitly identified.

## License
Educational material; reuse and adapt freely. Examples are intentionally small enough to study, modify, and test.
