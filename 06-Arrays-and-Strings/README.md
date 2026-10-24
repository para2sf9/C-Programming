# 06 — Arrays and Strings

An array stores elements of one type contiguously. Its length is not carried with a pointer, so pass the length separately. A C string is a character array terminated by `\0`; reserve space for that terminator. Never write past the array.

![2D array memory](../17-Images/06-2d-array-memory.png)

Use `fgets` for bounded line input; `strtol` is preferable to unchecked numeric input. String routines live in `<string.h>`; ensure destination capacity before copying.

### Exercise
Compute the minimum, maximum, and average of an array. Add a test for an empty list.

## Runnable example

Source: `code/arrays_strings.c`

```c
#include <stdio.h>
#include <string.h>

int main(void) {
    int values[] = {4, 1, 9, 2};
    size_t n = sizeof values / sizeof values[0];
    int sum = 0;
    for (size_t i = 0; i < n; ++i) sum += values[i];
    char name[32] = "Ada";
    printf("n=%zu average=%.2f greeting=Hello, %s\n", n, (double)sum / n, name);
    return 0;
}
```

Observed output:

```text
n=4 average=4.00 greeting=Hello, Ada
```

## Practice
1. Explain every line without looking at the comments.
2. Change an input or constant and predict the output.
3. Compile with warnings and fix all warnings.
