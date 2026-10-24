# 04 — Conditions and Loops

Use `if / else` for branches, `switch` for integer-like cases, and `for`, `while`, or `do while` for repetition. In `switch`, `break` prevents accidental fall-through. In loops, ensure the condition eventually becomes false.

![Branching](../17-Images/11-branching.png)
![Loop flow](../17-Images/05-loops.png)

### Exercise
Change the input value to test all branches. Add a loop that prints the multiplication table from 1 to 10.

## Runnable example

Source: `code/control.c`

```c
#include <stdio.h>

int main(void) {
    int score = 82;
    if (score >= 90) puts("A");
    else if (score >= 80) puts("B");
    else puts("Keep practicing");
    for (int i = 1; i <= 5; ++i) printf("%d ", i * i);
    putchar('\n');
    return 0;
}
```

Observed output:

```text
B
1 4 9 16 25 
```

## Practice
1. Explain every line without looking at the comments.
2. Change an input or constant and predict the output.
3. Compile with warnings and fix all warnings.
