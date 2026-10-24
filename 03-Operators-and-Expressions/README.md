# 03 — Operators and Expressions

Arithmetic: `+ - * / %`; comparisons: `< <= > >= == !=`; logical: `&& || !`; assignment: `= += -=`; bitwise: `& | ^ ~ << >>`.

Integer division truncates toward zero. `%` is remainder for integer operands. `&&` and `||` short-circuit. Parenthesize mixed expressions; do not depend on unspecified evaluation order such as `i++ + i++`.

### Exercise
Predict each result, then run the example. Why does `7 / 2` differ from `7.0 / 2`?

## Runnable example

Source: `code/operators.c`

```c
#include <stdio.h>

int main(void) {
    int a = 7, b = 2;
    printf("integer=%d floating=%.1f remainder=%d\n", a / b, (double)a / b, a % b);
    printf("compare=%d logical=%d\n", a > b, (a > b) && (b != 0));
    return 0;
}
```

Observed output:

```text
integer=3 floating=3.5 remainder=1
compare=1 logical=1
```

## Practice
1. Explain every line without looking at the comments.
2. Change an input or constant and predict the output.
3. Compile with warnings and fix all warnings.
