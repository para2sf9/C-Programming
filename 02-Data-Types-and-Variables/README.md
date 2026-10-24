# 02 — Data Types and Variables

A declaration gives an object a type and name. Initialize variables before reading them. `sizeof` reports bytes as `size_t`; the exact sizes of many types are implementation-dependent.

![Typical sizes](../17-Images/10-sizeof-table.png)

- Integer types: `char`, `short`, `int`, `long`, `long long` (signed/unsigned variants).
- Floating types: `float`, `double`, `long double`.
- `_Bool` / `bool` (`<stdbool.h>`); `void` means no value/type information.
- Prefer `int` for ordinary counts; use `<stdint.h>` exact-width types when a fixed width is required.
- Format specifiers must match argument types (`%d` for `int`, `%zu` for `size_t`, `%f` for `double` in `printf`).

### Exercise
Print your age and a measurement; use `%.2f` for two decimal places.

## Runnable example

Source: `code/types.c`

```c
#include <stdio.h>
#include <stdbool.h>

int main(void) {
    int count = 7;
    double price = 12.50;
    bool ready = true;
    printf("count=%d price=%.2f ready=%d\n", count, price, ready);
    printf("sizeof(int)=%zu bytes\n", sizeof(int));
    return 0;
}
```

Observed output:

```text
count=7 price=12.50 ready=1
sizeof(int)=4 bytes
```

## Practice
1. Explain every line without looking at the comments.
2. Change an input or constant and predict the output.
3. Compile with warnings and fix all warnings.
