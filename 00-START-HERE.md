# Start Here

## Your first 20 minutes
1. Install a C compiler (GCC or Clang) and a text editor.
2. Save this as `hello.c`:

```c
#include <stdio.h>
int main(void) {
    puts("Hello, C!");
    return 0;
}
```

3. Compile and run:

```sh
gcc -std=c11 -Wall -Wextra -Wpedantic hello.c -o hello
./hello
```

Output: `Hello, C!`

## Learning rules that save time
- Type the example yourself; do not only read it.
- Predict the output before running it.
- Change one thing at a time and observe.
- When a program fails, read the **first** compiler diagnostic and the line number.
- Keep warnings enabled. A warning is often a bug caught early.
- Trace values on paper before reaching for a debugger.

## The most important mental model
A C program is compiled into machine code. At runtime, data occupies memory. Variables have types, pointers hold addresses, functions create call frames, and the programmer is responsible for managing dynamically allocated resources.
