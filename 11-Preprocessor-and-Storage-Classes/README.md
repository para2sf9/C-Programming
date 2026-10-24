# 11 — Preprocessor and Storage Classes

`#include` makes declarations available; `#define` performs textual macro substitution. Parenthesize macro parameters and consider `static inline` functions for safer function-like behavior. Use include guards in headers.

![Preprocessor](../17-Images/12-preprocessor.png)

Storage duration includes automatic, static, and allocated storage. `static` at file scope gives internal linkage; a block-scope `static` object retains its value between calls. `extern` declares an object/function defined elsewhere.

### Exercise
Make a header with an include guard and a small function declaration; compile it with a separate `.c` file.

## Runnable example

Source: `code/preprocessor.c`

```c
#include <stdio.h>
#define SQUARE(x) ((x) * (x))

static int next_id(void) {
    static int id = 0;
    return ++id;
}

int main(void) {
    int first = next_id();
    int second = next_id();
    printf("square=%d ids=%d,%d\n", SQUARE(5), first, second);
    return 0;
}
```

Observed output:

```text
square=25 ids=1,2
```

## Practice
1. Explain every line without looking at the comments.
2. Change an input or constant and predict the output.
3. Compile with warnings and fix all warnings.
