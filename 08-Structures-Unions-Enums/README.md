# 08 — Structures, Unions, and Enums

A `struct` groups fields that exist simultaneously. A `union` overlays storage, so only the most recently written member is meaningful. An `enum` gives names to integer constants. `typedef` can provide a convenient alias.

Padding may appear between fields for alignment; do not assume exact `sizeof(struct)` across platforms.

![Structure padding](../17-Images/07-struct-padding.png)

### Exercise
Create a `struct Product` with a name, quantity, and price; write a function that computes its inventory value.

## Runnable example

Source: `code/structs.c`

```c
#include <stdio.h>

struct Point { int x; int y; };
enum Status { PENDING, COMPLETE, FAILED };

int main(void) {
    struct Point p = {.x = 3, .y = 4};
    enum Status task = COMPLETE;
    printf("point=(%d,%d) status=%d\n", p.x, p.y, task);
    return 0;
}
```

Observed output:

```text
point=(3,4) status=1
```

## Practice
1. Explain every line without looking at the comments.
2. Change an input or constant and predict the output.
3. Compile with warnings and fix all warnings.
