# 07 — Pointers

A pointer stores an address. `&x` obtains an object's address; `*p` dereferences a valid pointer. Initialize pointers and only dereference pointers to live objects. A null pointer is not a valid object address.

![Pointer diagram](../17-Images/03-pointers.png)

Array parameters are adjusted to pointers, so a function cannot infer the caller's array length. Pointer arithmetic is only defined within an array object (or one past the end, without dereferencing it).

### Exercise
Write a function that sums an array using a pointer and explicit length.

## Runnable example

Source: `code/pointers.c`

```c
#include <stdio.h>

int main(void) {
    int value = 42;
    int *ptr = &value;
    printf("value=%d through pointer=%d\n", value, *ptr);
    *ptr = 99;
    printf("after update=%d\n", value);
    return 0;
}
```

Observed output:

```text
value=42 through pointer=42
after update=99
```

## Practice
1. Explain every line without looking at the comments.
2. Change an input or constant and predict the output.
3. Compile with warnings and fix all warnings.
