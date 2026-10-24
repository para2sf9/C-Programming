# 01 — Introduction to C

C is a compiled, general-purpose language with explicit types and close control over memory. It is used in operating systems, embedded firmware, networking, databases, and performance-sensitive libraries.

## First program
The preprocessor includes declarations from `stdio.h`; `main` is the program entry point; `puts` writes a line; returning zero signals success.

![Compilation pipeline](../17-Images/01-compilation-pipeline.png)

## Syntax essentials
- Statements usually end with `;`; blocks use `{}`.
- C is case-sensitive: `total` and `Total` are different names.
- Comments: `// line` and `/* block */`.
- Use `int main(void)` when no command-line arguments are needed.
- A function declaration tells the compiler a function's parameter and return types.

### Exercise
Compile the example, then change the message and return value. Add a second `puts`.

## Runnable example

Source: `code/hello.c`

```c
#include <stdio.h>

int main(void) {
    puts("Hello, C!");
    puts("I can compile and run.");
    return 0;
}
```

Observed output:

```text
Hello, C!
I can compile and run.
```

## Practice
1. Explain every line without looking at the comments.
2. Change an input or constant and predict the output.
3. Compile with warnings and fix all warnings.
