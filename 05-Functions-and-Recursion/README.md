# 05 — Functions and Recursion

Functions divide work into named, testable units. C passes arguments by value. To modify a caller's object, pass a pointer. Declare a function before using it if its definition appears later. Every recursive function needs a base case.

![Recursion stack](../17-Images/04-recursion-stack.png)

### Exercise
Write `int max_of(int a, int b)` and test negative as well as positive values. Then implement factorial for inputs 0–12, checking overflow if you expand the range.

## Runnable example

Source: `code/functions.c`

```c
#include <stdio.h>

int factorial(int n) {
    if (n <= 1) return 1;
    return n * factorial(n - 1);
}

void swap(int *a, int *b) {
    int temp = *a; *a = *b; *b = temp;
}

int main(void) {
    int x = 3, y = 9;
    swap(&x, &y);
    printf("x=%d y=%d 5!=%d\n", x, y, factorial(5));
    return 0;
}
```

Observed output:

```text
x=9 y=3 5!=120
```

## Practice
1. Explain every line without looking at the comments.
2. Change an input or constant and predict the output.
3. Compile with warnings and fix all warnings.
