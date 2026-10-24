# 12 — Bit Manipulation

Bitwise operators work on integer representations. Use unsigned types for shifts and masks. Check shift counts are less than the type width. Bit flags are useful for compact state and hardware registers.

### Exercise
Add a `FLAG_READ` bit, test it, then clear it without disturbing other flags.

## Runnable example

Source: `code/bits.c`

```c
#include <stdio.h>
#include <stdint.h>

int main(void) {
    uint32_t flags = 0;
    const uint32_t READ = UINT32_C(1) << 0;
    const uint32_t WRITE = UINT32_C(1) << 1;
    flags |= READ | WRITE;
    printf("flags=%u read=%d\n", flags, (flags & READ) != 0);
    flags &= ~READ;
    printf("after clear=%u\n", flags);
    return 0;
}
```

Observed output:

```text
flags=3 read=1
after clear=2
```

## Practice
1. Explain every line without looking at the comments.
2. Change an input or constant and predict the output.
3. Compile with warnings and fix all warnings.
