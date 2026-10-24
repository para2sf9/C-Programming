# 09 — Dynamic Memory

`malloc` allocates uninitialized bytes; `calloc` allocates zeroed bytes; `realloc` resizes; `free` releases. Include `<stdlib.h>`, check allocation results, avoid size multiplication overflow in production code, and free each allocation exactly once. After `free`, do not use the pointer.

### Exercise
Allocate an array for `n` integers, fill it, print the sum, and free it. Handle allocation failure.

## Runnable example

Source: `code/dynamic_memory.c`

```c
#include <stdio.h>
#include <stdlib.h>

int main(void) {
    size_t n = 4;
    int *values = malloc(n * sizeof *values);
    if (values == NULL) return 1;
    for (size_t i = 0; i < n; ++i) values[i] = (int)(i + 1);
    int sum = 0;
    for (size_t i = 0; i < n; ++i) sum += values[i];
    printf("sum=%d\n", sum);
    free(values);
    return 0;
}
```

Observed output:

```text
sum=10
```

## Practice
1. Explain every line without looking at the comments.
2. Change an input or constant and predict the output.
3. Compile with warnings and fix all warnings.
