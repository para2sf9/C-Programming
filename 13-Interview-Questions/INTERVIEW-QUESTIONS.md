# 250 Frequently Asked C Programming Interview Questions

A curated interview bank spanning C foundations, control flow, functions, arrays, strings, pointers, structs, dynamic memory, files, preprocessor rules, and algorithms. Each entry has a direct answer, runnable C11 example, and captured output. Related questions revisit the same short, safe example from different interview angles so the key concept gets reinforced.

---

## Q1. What is C compilation pipeline?

**Level:** Core / interview &nbsp;|&nbsp; **Topic:** C foundations

**Answer.** A C source file is preprocessed, compiled to assembly, assembled into object code, then linked with other objects and libraries. Separate these stages to diagnose missing declarations versus unresolved symbols.

**Code** (`code_Q001.c`)

```c
#include <stdio.h>
int main(void) { puts("preprocess -> compile -> assemble -> link -> run"); return 0; }
```

**Output**

```text
preprocess -> compile -> assemble -> link -> run
```

---

## Q2. How does C compilation pipeline work in C?

**Level:** Core / interview &nbsp;|&nbsp; **Topic:** C foundations

**Answer.** A C source file is preprocessed, compiled to assembly, assembled into object code, then linked with other objects and libraries. Separate these stages to diagnose missing declarations versus unresolved symbols. The example below demonstrates the rule with a small, deterministic program.

**Code** (`code_Q002.c`)

```c
#include <stdio.h>
int main(void) { puts("preprocess -> compile -> assemble -> link -> run"); return 0; }
```

**Output**

```text
preprocess -> compile -> assemble -> link -> run
```

---

## Q3. When would you use C compilation pipeline?

**Level:** Core / interview &nbsp;|&nbsp; **Topic:** C foundations

**Answer.** A C source file is preprocessed, compiled to assembly, assembled into object code, then linked with other objects and libraries. Separate these stages to diagnose missing declarations versus unresolved symbols.

**Code** (`code_Q003.c`)

```c
#include <stdio.h>
int main(void) { puts("preprocess -> compile -> assemble -> link -> run"); return 0; }
```

**Output**

```text
preprocess -> compile -> assemble -> link -> run
```

---

## Q4. What common bug or interview trap involves C compilation pipeline?

**Level:** Core / interview &nbsp;|&nbsp; **Topic:** C foundations

**Answer.** A common trap is overlooking the exact language rule and assuming behavior from one compiler. A C source file is preprocessed, compiled to assembly, assembled into object code, then linked with other objects and libraries. Separate these stages to diagnose missing declarations versus unresolved symbols.

**Code** (`code_Q004.c`)

```c
#include <stdio.h>
int main(void) { puts("preprocess -> compile -> assemble -> link -> run"); return 0; }
```

**Output**

```text
preprocess -> compile -> assemble -> link -> run
```

---

## Q5. How would you explain C compilation pipeline in a code review?

**Level:** Core / interview &nbsp;|&nbsp; **Topic:** C foundations

**Answer.** State the relevant rule, then trace the example's inputs and outputs. A C source file is preprocessed, compiled to assembly, assembled into object code, then linked with other objects and libraries. Separate these stages to diagnose missing declarations versus unresolved symbols.

**Code** (`code_Q005.c`)

```c
#include <stdio.h>
int main(void) { puts("preprocess -> compile -> assemble -> link -> run"); return 0; }
```

**Output**

```text
preprocess -> compile -> assemble -> link -> run
```

---

## Q6. What is main and exit status?

**Level:** Core / interview &nbsp;|&nbsp; **Topic:** C foundations

**Answer.** The hosted C program starts at main. Return 0 or EXIT_SUCCESS for success and EXIT_FAILURE for failure; the exit code is useful to shells and calling programs.

**Code** (`code_Q006.c`)

```c
#include <stdio.h>
#include <stdlib.h>
int main(void) { printf("success=%d failure=%d\n", EXIT_SUCCESS, EXIT_FAILURE); return 0; }
```

**Output**

```text
success=0 failure=1
```

---

## Q7. How does main and exit status work in C?

**Level:** Core / interview &nbsp;|&nbsp; **Topic:** C foundations

**Answer.** The hosted C program starts at main. Return 0 or EXIT_SUCCESS for success and EXIT_FAILURE for failure; the exit code is useful to shells and calling programs. The example below demonstrates the rule with a small, deterministic program.

**Code** (`code_Q007.c`)

```c
#include <stdio.h>
#include <stdlib.h>
int main(void) { printf("success=%d failure=%d\n", EXIT_SUCCESS, EXIT_FAILURE); return 0; }
```

**Output**

```text
success=0 failure=1
```

---

## Q8. When would you use main and exit status?

**Level:** Core / interview &nbsp;|&nbsp; **Topic:** C foundations

**Answer.** The hosted C program starts at main. Return 0 or EXIT_SUCCESS for success and EXIT_FAILURE for failure; the exit code is useful to shells and calling programs.

**Code** (`code_Q008.c`)

```c
#include <stdio.h>
#include <stdlib.h>
int main(void) { printf("success=%d failure=%d\n", EXIT_SUCCESS, EXIT_FAILURE); return 0; }
```

**Output**

```text
success=0 failure=1
```

---

## Q9. What common bug or interview trap involves main and exit status?

**Level:** Core / interview &nbsp;|&nbsp; **Topic:** C foundations

**Answer.** A common trap is overlooking the exact language rule and assuming behavior from one compiler. The hosted C program starts at main. Return 0 or EXIT_SUCCESS for success and EXIT_FAILURE for failure; the exit code is useful to shells and calling programs.

**Code** (`code_Q009.c`)

```c
#include <stdio.h>
#include <stdlib.h>
int main(void) { printf("success=%d failure=%d\n", EXIT_SUCCESS, EXIT_FAILURE); return 0; }
```

**Output**

```text
success=0 failure=1
```

---

## Q10. How would you explain main and exit status in a code review?

**Level:** Core / interview &nbsp;|&nbsp; **Topic:** C foundations

**Answer.** State the relevant rule, then trace the example's inputs and outputs. The hosted C program starts at main. Return 0 or EXIT_SUCCESS for success and EXIT_FAILURE for failure; the exit code is useful to shells and calling programs.

**Code** (`code_Q010.c`)

```c
#include <stdio.h>
#include <stdlib.h>
int main(void) { printf("success=%d failure=%d\n", EXIT_SUCCESS, EXIT_FAILURE); return 0; }
```

**Output**

```text
success=0 failure=1
```

---

## Q11. What is declaration vs definition?

**Level:** Core / interview &nbsp;|&nbsp; **Topic:** C foundations

**Answer.** A declaration introduces a name and its type. A definition provides the function body or allocates an object. Put declarations in headers and one definition in a source file.

**Code** (`code_Q011.c`)

```c
#include <stdio.h>
int count = 3;
extern int count;
int main(void) { printf("count=%d\n", count); return 0; }
```

**Output**

```text
count=3
```

---

## Q12. How does declaration vs definition work in C?

**Level:** Core / interview &nbsp;|&nbsp; **Topic:** C foundations

**Answer.** A declaration introduces a name and its type. A definition provides the function body or allocates an object. Put declarations in headers and one definition in a source file. The example below demonstrates the rule with a small, deterministic program.

**Code** (`code_Q012.c`)

```c
#include <stdio.h>
int count = 3;
extern int count;
int main(void) { printf("count=%d\n", count); return 0; }
```

**Output**

```text
count=3
```

---

## Q13. When would you use declaration vs definition?

**Level:** Core / interview &nbsp;|&nbsp; **Topic:** C foundations

**Answer.** A declaration introduces a name and its type. A definition provides the function body or allocates an object. Put declarations in headers and one definition in a source file.

**Code** (`code_Q013.c`)

```c
#include <stdio.h>
int count = 3;
extern int count;
int main(void) { printf("count=%d\n", count); return 0; }
```

**Output**

```text
count=3
```

---

## Q14. What common bug or interview trap involves declaration vs definition?

**Level:** Core / interview &nbsp;|&nbsp; **Topic:** C foundations

**Answer.** A common trap is overlooking the exact language rule and assuming behavior from one compiler. A declaration introduces a name and its type. A definition provides the function body or allocates an object. Put declarations in headers and one definition in a source file.

**Code** (`code_Q014.c`)

```c
#include <stdio.h>
int count = 3;
extern int count;
int main(void) { printf("count=%d\n", count); return 0; }
```

**Output**

```text
count=3
```

---

## Q15. How would you explain declaration vs definition in a code review?

**Level:** Core / interview &nbsp;|&nbsp; **Topic:** C foundations

**Answer.** State the relevant rule, then trace the example's inputs and outputs. A declaration introduces a name and its type. A definition provides the function body or allocates an object. Put declarations in headers and one definition in a source file.

**Code** (`code_Q015.c`)

```c
#include <stdio.h>
int count = 3;
extern int count;
int main(void) { printf("count=%d\n", count); return 0; }
```

**Output**

```text
count=3
```

---

## Q16. What is const pointer forms?

**Level:** Core / interview &nbsp;|&nbsp; **Topic:** C foundations

**Answer.** `const int *p` prevents modification through p; `int *const p` prevents changing p; `const int *const p` does both. Const qualification is part of the interface contract.

**Code** (`code_Q016.c`)

```c
#include <stdio.h>
int main(void) { int x=4; const int *p=&x; x=9; printf("read through const pointer=%d\n", *p); return 0; }
```

**Output**

```text
read through const pointer=9
```

---

## Q17. How does const pointer forms work in C?

**Level:** Core / interview &nbsp;|&nbsp; **Topic:** C foundations

**Answer.** `const int *p` prevents modification through p; `int *const p` prevents changing p; `const int *const p` does both. Const qualification is part of the interface contract. The example below demonstrates the rule with a small, deterministic program.

**Code** (`code_Q017.c`)

```c
#include <stdio.h>
int main(void) { int x=4; const int *p=&x; x=9; printf("read through const pointer=%d\n", *p); return 0; }
```

**Output**

```text
read through const pointer=9
```

---

## Q18. When would you use const pointer forms?

**Level:** Core / interview &nbsp;|&nbsp; **Topic:** C foundations

**Answer.** `const int *p` prevents modification through p; `int *const p` prevents changing p; `const int *const p` does both. Const qualification is part of the interface contract.

**Code** (`code_Q018.c`)

```c
#include <stdio.h>
int main(void) { int x=4; const int *p=&x; x=9; printf("read through const pointer=%d\n", *p); return 0; }
```

**Output**

```text
read through const pointer=9
```

---

## Q19. What common bug or interview trap involves const pointer forms?

**Level:** Core / interview &nbsp;|&nbsp; **Topic:** C foundations

**Answer.** A common trap is overlooking the exact language rule and assuming behavior from one compiler. `const int *p` prevents modification through p; `int *const p` prevents changing p; `const int *const p` does both. Const qualification is part of the interface contract.

**Code** (`code_Q019.c`)

```c
#include <stdio.h>
int main(void) { int x=4; const int *p=&x; x=9; printf("read through const pointer=%d\n", *p); return 0; }
```

**Output**

```text
read through const pointer=9
```

---

## Q20. How would you explain const pointer forms in a code review?

**Level:** Core / interview &nbsp;|&nbsp; **Topic:** C foundations

**Answer.** State the relevant rule, then trace the example's inputs and outputs. `const int *p` prevents modification through p; `int *const p` prevents changing p; `const int *const p` does both. Const qualification is part of the interface contract.

**Code** (`code_Q020.c`)

```c
#include <stdio.h>
int main(void) { int x=4; const int *p=&x; x=9; printf("read through const pointer=%d\n", *p); return 0; }
```

**Output**

```text
read through const pointer=9
```

---

## Q21. What is sizeof and size_t?

**Level:** Core / interview &nbsp;|&nbsp; **Topic:** C foundations

**Answer.** sizeof returns a size_t byte count, so print it with `%zu`. Most operands are not evaluated, except for variable length arrays. Do not assume exact sizes beyond standard minimums.

**Code** (`code_Q021.c`)

```c
#include <stdio.h>
int main(void) { printf("char=%zu int=%zu\n", sizeof(char), sizeof(int)); return 0; }
```

**Output**

```text
char=1 int=4
```

---

## Q22. How does sizeof and size_t work in C?

**Level:** Core / interview &nbsp;|&nbsp; **Topic:** C foundations

**Answer.** sizeof returns a size_t byte count, so print it with `%zu`. Most operands are not evaluated, except for variable length arrays. Do not assume exact sizes beyond standard minimums. The example below demonstrates the rule with a small, deterministic program.

**Code** (`code_Q022.c`)

```c
#include <stdio.h>
int main(void) { printf("char=%zu int=%zu\n", sizeof(char), sizeof(int)); return 0; }
```

**Output**

```text
char=1 int=4
```

---

## Q23. When would you use sizeof and size_t?

**Level:** Core / interview &nbsp;|&nbsp; **Topic:** C foundations

**Answer.** sizeof returns a size_t byte count, so print it with `%zu`. Most operands are not evaluated, except for variable length arrays. Do not assume exact sizes beyond standard minimums.

**Code** (`code_Q023.c`)

```c
#include <stdio.h>
int main(void) { printf("char=%zu int=%zu\n", sizeof(char), sizeof(int)); return 0; }
```

**Output**

```text
char=1 int=4
```

---

## Q24. What common bug or interview trap involves sizeof and size_t?

**Level:** Core / interview &nbsp;|&nbsp; **Topic:** C foundations

**Answer.** A common trap is overlooking the exact language rule and assuming behavior from one compiler. sizeof returns a size_t byte count, so print it with `%zu`. Most operands are not evaluated, except for variable length arrays. Do not assume exact sizes beyond standard minimums.

**Code** (`code_Q024.c`)

```c
#include <stdio.h>
int main(void) { printf("char=%zu int=%zu\n", sizeof(char), sizeof(int)); return 0; }
```

**Output**

```text
char=1 int=4
```

---

## Q25. How would you explain sizeof and size_t in a code review?

**Level:** Core / interview &nbsp;|&nbsp; **Topic:** C foundations

**Answer.** State the relevant rule, then trace the example's inputs and outputs. sizeof returns a size_t byte count, so print it with `%zu`. Most operands are not evaluated, except for variable length arrays. Do not assume exact sizes beyond standard minimums.

**Code** (`code_Q025.c`)

```c
#include <stdio.h>
int main(void) { printf("char=%zu int=%zu\n", sizeof(char), sizeof(int)); return 0; }
```

**Output**

```text
char=1 int=4
```

---

## Q26. What is integer promotions?

**Level:** Core / interview &nbsp;|&nbsp; **Topic:** C foundations

**Answer.** Small integer types such as char and short are promoted to int (or unsigned int) before arithmetic. This can change the type and signedness of an expression.

**Code** (`code_Q026.c`)

```c
#include <stdio.h>
int main(void) { char c=10; printf("sum=%d expression_bytes=%zu\n", c+c, sizeof(c+c)); return 0; }
```

**Output**

```text
sum=20 expression_bytes=4
```

---

## Q27. How does integer promotions work in C?

**Level:** Core / interview &nbsp;|&nbsp; **Topic:** C foundations

**Answer.** Small integer types such as char and short are promoted to int (or unsigned int) before arithmetic. This can change the type and signedness of an expression. The example below demonstrates the rule with a small, deterministic program.

**Code** (`code_Q027.c`)

```c
#include <stdio.h>
int main(void) { char c=10; printf("sum=%d expression_bytes=%zu\n", c+c, sizeof(c+c)); return 0; }
```

**Output**

```text
sum=20 expression_bytes=4
```

---

## Q28. When would you use integer promotions?

**Level:** Core / interview &nbsp;|&nbsp; **Topic:** C foundations

**Answer.** Small integer types such as char and short are promoted to int (or unsigned int) before arithmetic. This can change the type and signedness of an expression.

**Code** (`code_Q028.c`)

```c
#include <stdio.h>
int main(void) { char c=10; printf("sum=%d expression_bytes=%zu\n", c+c, sizeof(c+c)); return 0; }
```

**Output**

```text
sum=20 expression_bytes=4
```

---

## Q29. What common bug or interview trap involves integer promotions?

**Level:** Core / interview &nbsp;|&nbsp; **Topic:** C foundations

**Answer.** A common trap is overlooking the exact language rule and assuming behavior from one compiler. Small integer types such as char and short are promoted to int (or unsigned int) before arithmetic. This can change the type and signedness of an expression.

**Code** (`code_Q029.c`)

```c
#include <stdio.h>
int main(void) { char c=10; printf("sum=%d expression_bytes=%zu\n", c+c, sizeof(c+c)); return 0; }
```

**Output**

```text
sum=20 expression_bytes=4
```

---

## Q30. How would you explain integer promotions in a code review?

**Level:** Core / interview &nbsp;|&nbsp; **Topic:** C foundations

**Answer.** State the relevant rule, then trace the example's inputs and outputs. Small integer types such as char and short are promoted to int (or unsigned int) before arithmetic. This can change the type and signedness of an expression.

**Code** (`code_Q030.c`)

```c
#include <stdio.h>
int main(void) { char c=10; printf("sum=%d expression_bytes=%zu\n", c+c, sizeof(c+c)); return 0; }
```

**Output**

```text
sum=20 expression_bytes=4
```

---

## Q31. What is integer division?

**Level:** Core / interview &nbsp;|&nbsp; **Topic:** C foundations

**Answer.** When both operands are integers, division truncates toward zero. Convert at least one operand to double before division when a fractional result is required.

**Code** (`code_Q031.c`)

```c
#include <stdio.h>
int main(void) { int a=7,b=2; printf("integer=%d floating=%.1f\n", a/b, (double)a/b); return 0; }
```

**Output**

```text
integer=3 floating=3.5
```

---

## Q32. How does integer division work in C?

**Level:** Core / interview &nbsp;|&nbsp; **Topic:** C foundations

**Answer.** When both operands are integers, division truncates toward zero. Convert at least one operand to double before division when a fractional result is required. The example below demonstrates the rule with a small, deterministic program.

**Code** (`code_Q032.c`)

```c
#include <stdio.h>
int main(void) { int a=7,b=2; printf("integer=%d floating=%.1f\n", a/b, (double)a/b); return 0; }
```

**Output**

```text
integer=3 floating=3.5
```

---

## Q33. When would you use integer division?

**Level:** Core / interview &nbsp;|&nbsp; **Topic:** C foundations

**Answer.** When both operands are integers, division truncates toward zero. Convert at least one operand to double before division when a fractional result is required.

**Code** (`code_Q033.c`)

```c
#include <stdio.h>
int main(void) { int a=7,b=2; printf("integer=%d floating=%.1f\n", a/b, (double)a/b); return 0; }
```

**Output**

```text
integer=3 floating=3.5
```

---

## Q34. What common bug or interview trap involves integer division?

**Level:** Core / interview &nbsp;|&nbsp; **Topic:** C foundations

**Answer.** A common trap is overlooking the exact language rule and assuming behavior from one compiler. When both operands are integers, division truncates toward zero. Convert at least one operand to double before division when a fractional result is required.

**Code** (`code_Q034.c`)

```c
#include <stdio.h>
int main(void) { int a=7,b=2; printf("integer=%d floating=%.1f\n", a/b, (double)a/b); return 0; }
```

**Output**

```text
integer=3 floating=3.5
```

---

## Q35. How would you explain integer division in a code review?

**Level:** Core / interview &nbsp;|&nbsp; **Topic:** C foundations

**Answer.** State the relevant rule, then trace the example's inputs and outputs. When both operands are integers, division truncates toward zero. Convert at least one operand to double before division when a fractional result is required.

**Code** (`code_Q035.c`)

```c
#include <stdio.h>
int main(void) { int a=7,b=2; printf("integer=%d floating=%.1f\n", a/b, (double)a/b); return 0; }
```

**Output**

```text
integer=3 floating=3.5
```

---

## Q36. What is unsigned wraparound?

**Level:** Core / interview &nbsp;|&nbsp; **Topic:** C foundations

**Answer.** Unsigned arithmetic is defined modulo 2^N. Signed overflow is undefined behavior, so check before adding or multiplying signed values that may exceed their range.

**Code** (`code_Q036.c`)

```c
#include <stdio.h>
#include <limits.h>
int main(void) { unsigned u=UINT_MAX; printf("UINT_MAX=%u plus_one=%u\n", u, u+1u); return 0; }
```

**Output**

```text
UINT_MAX=4294967295 plus_one=0
```

---

## Q37. How does unsigned wraparound work in C?

**Level:** Core / interview &nbsp;|&nbsp; **Topic:** C foundations

**Answer.** Unsigned arithmetic is defined modulo 2^N. Signed overflow is undefined behavior, so check before adding or multiplying signed values that may exceed their range. The example below demonstrates the rule with a small, deterministic program.

**Code** (`code_Q037.c`)

```c
#include <stdio.h>
#include <limits.h>
int main(void) { unsigned u=UINT_MAX; printf("UINT_MAX=%u plus_one=%u\n", u, u+1u); return 0; }
```

**Output**

```text
UINT_MAX=4294967295 plus_one=0
```

---

## Q38. When would you use unsigned wraparound?

**Level:** Core / interview &nbsp;|&nbsp; **Topic:** C foundations

**Answer.** Unsigned arithmetic is defined modulo 2^N. Signed overflow is undefined behavior, so check before adding or multiplying signed values that may exceed their range.

**Code** (`code_Q038.c`)

```c
#include <stdio.h>
#include <limits.h>
int main(void) { unsigned u=UINT_MAX; printf("UINT_MAX=%u plus_one=%u\n", u, u+1u); return 0; }
```

**Output**

```text
UINT_MAX=4294967295 plus_one=0
```

---

## Q39. What common bug or interview trap involves unsigned wraparound?

**Level:** Core / interview &nbsp;|&nbsp; **Topic:** C foundations

**Answer.** A common trap is overlooking the exact language rule and assuming behavior from one compiler. Unsigned arithmetic is defined modulo 2^N. Signed overflow is undefined behavior, so check before adding or multiplying signed values that may exceed their range.

**Code** (`code_Q039.c`)

```c
#include <stdio.h>
#include <limits.h>
int main(void) { unsigned u=UINT_MAX; printf("UINT_MAX=%u plus_one=%u\n", u, u+1u); return 0; }
```

**Output**

```text
UINT_MAX=4294967295 plus_one=0
```

---

## Q40. How would you explain unsigned wraparound in a code review?

**Level:** Core / interview &nbsp;|&nbsp; **Topic:** C foundations

**Answer.** State the relevant rule, then trace the example's inputs and outputs. Unsigned arithmetic is defined modulo 2^N. Signed overflow is undefined behavior, so check before adding or multiplying signed values that may exceed their range.

**Code** (`code_Q040.c`)

```c
#include <stdio.h>
#include <limits.h>
int main(void) { unsigned u=UINT_MAX; printf("UINT_MAX=%u plus_one=%u\n", u, u+1u); return 0; }
```

**Output**

```text
UINT_MAX=4294967295 plus_one=0
```

---

## Q41. What is format specifiers?

**Level:** Core / interview &nbsp;|&nbsp; **Topic:** C foundations

**Answer.** A printf format must match the promoted argument type. Common forms include `%d`, `%zu`, `%ld`, `%lld`, `%f`, `%Lf`, `%s`, and `%p` (with a void pointer). A mismatch is undefined behavior.

**Code** (`code_Q041.c`)

```c
#include <stdio.h>
int main(void) { size_t n=3; double d=2.5; printf("n=%zu d=%.1f text=%s\n",n,d,"C"); return 0; }
```

**Output**

```text
n=3 d=2.5 text=C
```

---

## Q42. How does format specifiers work in C?

**Level:** Core / interview &nbsp;|&nbsp; **Topic:** C foundations

**Answer.** A printf format must match the promoted argument type. Common forms include `%d`, `%zu`, `%ld`, `%lld`, `%f`, `%Lf`, `%s`, and `%p` (with a void pointer). A mismatch is undefined behavior. The example below demonstrates the rule with a small, deterministic program.

**Code** (`code_Q042.c`)

```c
#include <stdio.h>
int main(void) { size_t n=3; double d=2.5; printf("n=%zu d=%.1f text=%s\n",n,d,"C"); return 0; }
```

**Output**

```text
n=3 d=2.5 text=C
```

---

## Q43. When would you use format specifiers?

**Level:** Core / interview &nbsp;|&nbsp; **Topic:** C foundations

**Answer.** A printf format must match the promoted argument type. Common forms include `%d`, `%zu`, `%ld`, `%lld`, `%f`, `%Lf`, `%s`, and `%p` (with a void pointer). A mismatch is undefined behavior.

**Code** (`code_Q043.c`)

```c
#include <stdio.h>
int main(void) { size_t n=3; double d=2.5; printf("n=%zu d=%.1f text=%s\n",n,d,"C"); return 0; }
```

**Output**

```text
n=3 d=2.5 text=C
```

---

## Q44. What common bug or interview trap involves format specifiers?

**Level:** Core / interview &nbsp;|&nbsp; **Topic:** C foundations

**Answer.** A common trap is overlooking the exact language rule and assuming behavior from one compiler. A printf format must match the promoted argument type. Common forms include `%d`, `%zu`, `%ld`, `%lld`, `%f`, `%Lf`, `%s`, and `%p` (with a void pointer). A mismatch is undefined behavior.

**Code** (`code_Q044.c`)

```c
#include <stdio.h>
int main(void) { size_t n=3; double d=2.5; printf("n=%zu d=%.1f text=%s\n",n,d,"C"); return 0; }
```

**Output**

```text
n=3 d=2.5 text=C
```

---

## Q45. How would you explain format specifiers in a code review?

**Level:** Core / interview &nbsp;|&nbsp; **Topic:** C foundations

**Answer.** State the relevant rule, then trace the example's inputs and outputs. A printf format must match the promoted argument type. Common forms include `%d`, `%zu`, `%ld`, `%lld`, `%f`, `%Lf`, `%s`, and `%p` (with a void pointer). A mismatch is undefined behavior.

**Code** (`code_Q045.c`)

```c
#include <stdio.h>
int main(void) { size_t n=3; double d=2.5; printf("n=%zu d=%.1f text=%s\n",n,d,"C"); return 0; }
```

**Output**

```text
n=3 d=2.5 text=C
```

---

## Q46. What is enum constants?

**Level:** Core / interview &nbsp;|&nbsp; **Topic:** C foundations

**Answer.** An enum defines named integer constants. Use it for finite states or modes, and validate externally supplied integers before treating them as valid enumerators.

**Code** (`code_Q046.c`)

```c
#include <stdio.h>
enum State { OFF, ON, ERROR };
int main(void) { enum State s=ON; printf("OFF=%d ON=%d state=%d\n", OFF, ON, s); return 0; }
```

**Output**

```text
OFF=0 ON=1 state=1
```

---

## Q47. How does enum constants work in C?

**Level:** Core / interview &nbsp;|&nbsp; **Topic:** C foundations

**Answer.** An enum defines named integer constants. Use it for finite states or modes, and validate externally supplied integers before treating them as valid enumerators. The example below demonstrates the rule with a small, deterministic program.

**Code** (`code_Q047.c`)

```c
#include <stdio.h>
enum State { OFF, ON, ERROR };
int main(void) { enum State s=ON; printf("OFF=%d ON=%d state=%d\n", OFF, ON, s); return 0; }
```

**Output**

```text
OFF=0 ON=1 state=1
```

---

## Q48. When would you use enum constants?

**Level:** Core / interview &nbsp;|&nbsp; **Topic:** C foundations

**Answer.** An enum defines named integer constants. Use it for finite states or modes, and validate externally supplied integers before treating them as valid enumerators.

**Code** (`code_Q048.c`)

```c
#include <stdio.h>
enum State { OFF, ON, ERROR };
int main(void) { enum State s=ON; printf("OFF=%d ON=%d state=%d\n", OFF, ON, s); return 0; }
```

**Output**

```text
OFF=0 ON=1 state=1
```

---

## Q49. What common bug or interview trap involves enum constants?

**Level:** Core / interview &nbsp;|&nbsp; **Topic:** C foundations

**Answer.** A common trap is overlooking the exact language rule and assuming behavior from one compiler. An enum defines named integer constants. Use it for finite states or modes, and validate externally supplied integers before treating them as valid enumerators.

**Code** (`code_Q049.c`)

```c
#include <stdio.h>
enum State { OFF, ON, ERROR };
int main(void) { enum State s=ON; printf("OFF=%d ON=%d state=%d\n", OFF, ON, s); return 0; }
```

**Output**

```text
OFF=0 ON=1 state=1
```

---

## Q50. How would you explain enum constants in a code review?

**Level:** Core / interview &nbsp;|&nbsp; **Topic:** C foundations

**Answer.** State the relevant rule, then trace the example's inputs and outputs. An enum defines named integer constants. Use it for finite states or modes, and validate externally supplied integers before treating them as valid enumerators.

**Code** (`code_Q050.c`)

```c
#include <stdio.h>
enum State { OFF, ON, ERROR };
int main(void) { enum State s=ON; printf("OFF=%d ON=%d state=%d\n", OFF, ON, s); return 0; }
```

**Output**

```text
OFF=0 ON=1 state=1
```

---

## Q51. What is if and else-if?

**Level:** Core / interview &nbsp;|&nbsp; **Topic:** Control flow

**Answer.** An if/else-if chain selects the first true condition. Order overlapping conditions from most specific to least specific and use braces to make control flow clear.

**Code** (`code_Q051.c`)

```c
#include <stdio.h>
int main(void) { int score=86; if(score>=90) puts("A"); else if(score>=80) puts("B"); else puts("C"); return 0; }
```

**Output**

```text
B
```

---

## Q52. How does if and else-if work in C?

**Level:** Core / interview &nbsp;|&nbsp; **Topic:** Control flow

**Answer.** An if/else-if chain selects the first true condition. Order overlapping conditions from most specific to least specific and use braces to make control flow clear. The example below demonstrates the rule with a small, deterministic program.

**Code** (`code_Q052.c`)

```c
#include <stdio.h>
int main(void) { int score=86; if(score>=90) puts("A"); else if(score>=80) puts("B"); else puts("C"); return 0; }
```

**Output**

```text
B
```

---

## Q53. When would you use if and else-if?

**Level:** Core / interview &nbsp;|&nbsp; **Topic:** Control flow

**Answer.** An if/else-if chain selects the first true condition. Order overlapping conditions from most specific to least specific and use braces to make control flow clear.

**Code** (`code_Q053.c`)

```c
#include <stdio.h>
int main(void) { int score=86; if(score>=90) puts("A"); else if(score>=80) puts("B"); else puts("C"); return 0; }
```

**Output**

```text
B
```

---

## Q54. What common bug or interview trap involves if and else-if?

**Level:** Core / interview &nbsp;|&nbsp; **Topic:** Control flow

**Answer.** A common trap is overlooking the exact language rule and assuming behavior from one compiler. An if/else-if chain selects the first true condition. Order overlapping conditions from most specific to least specific and use braces to make control flow clear.

**Code** (`code_Q054.c`)

```c
#include <stdio.h>
int main(void) { int score=86; if(score>=90) puts("A"); else if(score>=80) puts("B"); else puts("C"); return 0; }
```

**Output**

```text
B
```

---

## Q55. How would you explain if and else-if in a code review?

**Level:** Core / interview &nbsp;|&nbsp; **Topic:** Control flow

**Answer.** State the relevant rule, then trace the example's inputs and outputs. An if/else-if chain selects the first true condition. Order overlapping conditions from most specific to least specific and use braces to make control flow clear.

**Code** (`code_Q055.c`)

```c
#include <stdio.h>
int main(void) { int score=86; if(score>=90) puts("A"); else if(score>=80) puts("B"); else puts("C"); return 0; }
```

**Output**

```text
B
```

---

## Q56. What is switch and break?

**Level:** Core / interview &nbsp;|&nbsp; **Topic:** Control flow

**Answer.** switch compares an integer-like expression against case constants. `break` exits the switch; without it, execution falls through into the next case. `default` handles unmatched values.

**Code** (`code_Q056.c`)

```c
#include <stdio.h>
int main(void) { int day=2; switch(day){case 1: puts("Mon"); break; case 2: puts("Tue"); break; default: puts("other");} return 0; }
```

**Output**

```text
Tue
```

---

## Q57. How does switch and break work in C?

**Level:** Core / interview &nbsp;|&nbsp; **Topic:** Control flow

**Answer.** switch compares an integer-like expression against case constants. `break` exits the switch; without it, execution falls through into the next case. `default` handles unmatched values. The example below demonstrates the rule with a small, deterministic program.

**Code** (`code_Q057.c`)

```c
#include <stdio.h>
int main(void) { int day=2; switch(day){case 1: puts("Mon"); break; case 2: puts("Tue"); break; default: puts("other");} return 0; }
```

**Output**

```text
Tue
```

---

## Q58. When would you use switch and break?

**Level:** Core / interview &nbsp;|&nbsp; **Topic:** Control flow

**Answer.** switch compares an integer-like expression against case constants. `break` exits the switch; without it, execution falls through into the next case. `default` handles unmatched values.

**Code** (`code_Q058.c`)

```c
#include <stdio.h>
int main(void) { int day=2; switch(day){case 1: puts("Mon"); break; case 2: puts("Tue"); break; default: puts("other");} return 0; }
```

**Output**

```text
Tue
```

---

## Q59. What common bug or interview trap involves switch and break?

**Level:** Core / interview &nbsp;|&nbsp; **Topic:** Control flow

**Answer.** A common trap is overlooking the exact language rule and assuming behavior from one compiler. switch compares an integer-like expression against case constants. `break` exits the switch; without it, execution falls through into the next case. `default` handles unmatched values.

**Code** (`code_Q059.c`)

```c
#include <stdio.h>
int main(void) { int day=2; switch(day){case 1: puts("Mon"); break; case 2: puts("Tue"); break; default: puts("other");} return 0; }
```

**Output**

```text
Tue
```

---

## Q60. How would you explain switch and break in a code review?

**Level:** Core / interview &nbsp;|&nbsp; **Topic:** Control flow

**Answer.** State the relevant rule, then trace the example's inputs and outputs. switch compares an integer-like expression against case constants. `break` exits the switch; without it, execution falls through into the next case. `default` handles unmatched values.

**Code** (`code_Q060.c`)

```c
#include <stdio.h>
int main(void) { int day=2; switch(day){case 1: puts("Mon"); break; case 2: puts("Tue"); break; default: puts("other");} return 0; }
```

**Output**

```text
Tue
```

---

## Q61. What is for loop?

**Level:** Core / interview &nbsp;|&nbsp; **Topic:** Control flow

**Answer.** A for loop groups initialization, continuation test, and update. It is a natural choice for a counted loop. Ensure the update makes progress toward terminating the condition.

**Code** (`code_Q061.c`)

```c
#include <stdio.h>
int main(void) { for(int i=1;i<=4;++i) printf("%d ",i); putchar('\n'); return 0; }
```

**Output**

```text
1 2 3 4 
```

---

## Q62. How does for loop work in C?

**Level:** Core / interview &nbsp;|&nbsp; **Topic:** Control flow

**Answer.** A for loop groups initialization, continuation test, and update. It is a natural choice for a counted loop. Ensure the update makes progress toward terminating the condition. The example below demonstrates the rule with a small, deterministic program.

**Code** (`code_Q062.c`)

```c
#include <stdio.h>
int main(void) { for(int i=1;i<=4;++i) printf("%d ",i); putchar('\n'); return 0; }
```

**Output**

```text
1 2 3 4 
```

---

## Q63. When would you use for loop?

**Level:** Core / interview &nbsp;|&nbsp; **Topic:** Control flow

**Answer.** A for loop groups initialization, continuation test, and update. It is a natural choice for a counted loop. Ensure the update makes progress toward terminating the condition.

**Code** (`code_Q063.c`)

```c
#include <stdio.h>
int main(void) { for(int i=1;i<=4;++i) printf("%d ",i); putchar('\n'); return 0; }
```

**Output**

```text
1 2 3 4 
```

---

## Q64. What common bug or interview trap involves for loop?

**Level:** Core / interview &nbsp;|&nbsp; **Topic:** Control flow

**Answer.** A common trap is overlooking the exact language rule and assuming behavior from one compiler. A for loop groups initialization, continuation test, and update. It is a natural choice for a counted loop. Ensure the update makes progress toward terminating the condition.

**Code** (`code_Q064.c`)

```c
#include <stdio.h>
int main(void) { for(int i=1;i<=4;++i) printf("%d ",i); putchar('\n'); return 0; }
```

**Output**

```text
1 2 3 4 
```

---

## Q65. How would you explain for loop in a code review?

**Level:** Core / interview &nbsp;|&nbsp; **Topic:** Control flow

**Answer.** State the relevant rule, then trace the example's inputs and outputs. A for loop groups initialization, continuation test, and update. It is a natural choice for a counted loop. Ensure the update makes progress toward terminating the condition.

**Code** (`code_Q065.c`)

```c
#include <stdio.h>
int main(void) { for(int i=1;i<=4;++i) printf("%d ",i); putchar('\n'); return 0; }
```

**Output**

```text
1 2 3 4 
```

---

## Q66. What is while and do-while?

**Level:** Core / interview &nbsp;|&nbsp; **Topic:** Control flow

**Answer.** while tests before each iteration and may run zero times. do-while tests after the body and therefore runs at least once; it is useful for menu prompts.

**Code** (`code_Q066.c`)

```c
#include <stdio.h>
int main(void) { int n=0; do { printf("iteration %d\n",n); ++n; } while(n<1); return 0; }
```

**Output**

```text
iteration 0
```

---

## Q67. How does while and do-while work in C?

**Level:** Core / interview &nbsp;|&nbsp; **Topic:** Control flow

**Answer.** while tests before each iteration and may run zero times. do-while tests after the body and therefore runs at least once; it is useful for menu prompts. The example below demonstrates the rule with a small, deterministic program.

**Code** (`code_Q067.c`)

```c
#include <stdio.h>
int main(void) { int n=0; do { printf("iteration %d\n",n); ++n; } while(n<1); return 0; }
```

**Output**

```text
iteration 0
```

---

## Q68. When would you use while and do-while?

**Level:** Core / interview &nbsp;|&nbsp; **Topic:** Control flow

**Answer.** while tests before each iteration and may run zero times. do-while tests after the body and therefore runs at least once; it is useful for menu prompts.

**Code** (`code_Q068.c`)

```c
#include <stdio.h>
int main(void) { int n=0; do { printf("iteration %d\n",n); ++n; } while(n<1); return 0; }
```

**Output**

```text
iteration 0
```

---

## Q69. What common bug or interview trap involves while and do-while?

**Level:** Core / interview &nbsp;|&nbsp; **Topic:** Control flow

**Answer.** A common trap is overlooking the exact language rule and assuming behavior from one compiler. while tests before each iteration and may run zero times. do-while tests after the body and therefore runs at least once; it is useful for menu prompts.

**Code** (`code_Q069.c`)

```c
#include <stdio.h>
int main(void) { int n=0; do { printf("iteration %d\n",n); ++n; } while(n<1); return 0; }
```

**Output**

```text
iteration 0
```

---

## Q70. How would you explain while and do-while in a code review?

**Level:** Core / interview &nbsp;|&nbsp; **Topic:** Control flow

**Answer.** State the relevant rule, then trace the example's inputs and outputs. while tests before each iteration and may run zero times. do-while tests after the body and therefore runs at least once; it is useful for menu prompts.

**Code** (`code_Q070.c`)

```c
#include <stdio.h>
int main(void) { int n=0; do { printf("iteration %d\n",n); ++n; } while(n<1); return 0; }
```

**Output**

```text
iteration 0
```

---

## Q71. What is break and continue?

**Level:** Core / interview &nbsp;|&nbsp; **Topic:** Control flow

**Answer.** break exits the nearest loop or switch. continue skips to the next loop iteration. Avoid deeply nested jumps; helper functions often make the logic easier to reason about.

**Code** (`code_Q071.c`)

```c
#include <stdio.h>
int main(void) { for(int i=1;i<=5;++i){ if(i==2) continue; if(i==5) break; printf("%d ",i);} putchar('\n'); return 0; }
```

**Output**

```text
1 3 4 
```

---

## Q72. How does break and continue work in C?

**Level:** Core / interview &nbsp;|&nbsp; **Topic:** Control flow

**Answer.** break exits the nearest loop or switch. continue skips to the next loop iteration. Avoid deeply nested jumps; helper functions often make the logic easier to reason about. The example below demonstrates the rule with a small, deterministic program.

**Code** (`code_Q072.c`)

```c
#include <stdio.h>
int main(void) { for(int i=1;i<=5;++i){ if(i==2) continue; if(i==5) break; printf("%d ",i);} putchar('\n'); return 0; }
```

**Output**

```text
1 3 4 
```

---

## Q73. When would you use break and continue?

**Level:** Core / interview &nbsp;|&nbsp; **Topic:** Control flow

**Answer.** break exits the nearest loop or switch. continue skips to the next loop iteration. Avoid deeply nested jumps; helper functions often make the logic easier to reason about.

**Code** (`code_Q073.c`)

```c
#include <stdio.h>
int main(void) { for(int i=1;i<=5;++i){ if(i==2) continue; if(i==5) break; printf("%d ",i);} putchar('\n'); return 0; }
```

**Output**

```text
1 3 4 
```

---

## Q74. What common bug or interview trap involves break and continue?

**Level:** Core / interview &nbsp;|&nbsp; **Topic:** Control flow

**Answer.** A common trap is overlooking the exact language rule and assuming behavior from one compiler. break exits the nearest loop or switch. continue skips to the next loop iteration. Avoid deeply nested jumps; helper functions often make the logic easier to reason about.

**Code** (`code_Q074.c`)

```c
#include <stdio.h>
int main(void) { for(int i=1;i<=5;++i){ if(i==2) continue; if(i==5) break; printf("%d ",i);} putchar('\n'); return 0; }
```

**Output**

```text
1 3 4 
```

---

## Q75. How would you explain break and continue in a code review?

**Level:** Core / interview &nbsp;|&nbsp; **Topic:** Control flow

**Answer.** State the relevant rule, then trace the example's inputs and outputs. break exits the nearest loop or switch. continue skips to the next loop iteration. Avoid deeply nested jumps; helper functions often make the logic easier to reason about.

**Code** (`code_Q075.c`)

```c
#include <stdio.h>
int main(void) { for(int i=1;i<=5;++i){ if(i==2) continue; if(i==5) break; printf("%d ",i);} putchar('\n'); return 0; }
```

**Output**

```text
1 3 4 
```

---

## Q76. What is pass by value?

**Level:** Core / interview &nbsp;|&nbsp; **Topic:** Functions

**Answer.** C passes arguments by value, so a parameter is a local copy. To change a caller's object, pass its address and modify through a valid pointer.

**Code** (`code_Q076.c`)

```c
#include <stdio.h>
void set_to_9(int x){ x=9; }
int main(void){int n=2;set_to_9(n);printf("caller still has %d\n",n);return 0;}
```

**Output**

```text
caller still has 2
```

---

## Q77. How does pass by value work in C?

**Level:** Core / interview &nbsp;|&nbsp; **Topic:** Functions

**Answer.** C passes arguments by value, so a parameter is a local copy. To change a caller's object, pass its address and modify through a valid pointer. The example below demonstrates the rule with a small, deterministic program.

**Code** (`code_Q077.c`)

```c
#include <stdio.h>
void set_to_9(int x){ x=9; }
int main(void){int n=2;set_to_9(n);printf("caller still has %d\n",n);return 0;}
```

**Output**

```text
caller still has 2
```

---

## Q78. When would you use pass by value?

**Level:** Core / interview &nbsp;|&nbsp; **Topic:** Functions

**Answer.** C passes arguments by value, so a parameter is a local copy. To change a caller's object, pass its address and modify through a valid pointer.

**Code** (`code_Q078.c`)

```c
#include <stdio.h>
void set_to_9(int x){ x=9; }
int main(void){int n=2;set_to_9(n);printf("caller still has %d\n",n);return 0;}
```

**Output**

```text
caller still has 2
```

---

## Q79. What common bug or interview trap involves pass by value?

**Level:** Core / interview &nbsp;|&nbsp; **Topic:** Functions

**Answer.** A common trap is overlooking the exact language rule and assuming behavior from one compiler. C passes arguments by value, so a parameter is a local copy. To change a caller's object, pass its address and modify through a valid pointer.

**Code** (`code_Q079.c`)

```c
#include <stdio.h>
void set_to_9(int x){ x=9; }
int main(void){int n=2;set_to_9(n);printf("caller still has %d\n",n);return 0;}
```

**Output**

```text
caller still has 2
```

---

## Q80. How would you explain pass by value in a code review?

**Level:** Core / interview &nbsp;|&nbsp; **Topic:** Functions

**Answer.** State the relevant rule, then trace the example's inputs and outputs. C passes arguments by value, so a parameter is a local copy. To change a caller's object, pass its address and modify through a valid pointer.

**Code** (`code_Q080.c`)

```c
#include <stdio.h>
void set_to_9(int x){ x=9; }
int main(void){int n=2;set_to_9(n);printf("caller still has %d\n",n);return 0;}
```

**Output**

```text
caller still has 2
```

---

## Q81. What is pointer-based output parameter?

**Level:** Core / interview &nbsp;|&nbsp; **Topic:** Functions

**Answer.** A function can return one value directly and write additional results through pointer parameters. Document whether a pointer may be null and whether it is read or modified.

**Code** (`code_Q081.c`)

```c
#include <stdio.h>
void square(int x,int *out){*out=x*x;}
int main(void){int y=0;square(6,&y);printf("square=%d\n",y);return 0;}
```

**Output**

```text
square=36
```

---

## Q82. How does pointer-based output parameter work in C?

**Level:** Core / interview &nbsp;|&nbsp; **Topic:** Functions

**Answer.** A function can return one value directly and write additional results through pointer parameters. Document whether a pointer may be null and whether it is read or modified. The example below demonstrates the rule with a small, deterministic program.

**Code** (`code_Q082.c`)

```c
#include <stdio.h>
void square(int x,int *out){*out=x*x;}
int main(void){int y=0;square(6,&y);printf("square=%d\n",y);return 0;}
```

**Output**

```text
square=36
```

---

## Q83. When would you use pointer-based output parameter?

**Level:** Core / interview &nbsp;|&nbsp; **Topic:** Functions

**Answer.** A function can return one value directly and write additional results through pointer parameters. Document whether a pointer may be null and whether it is read or modified.

**Code** (`code_Q083.c`)

```c
#include <stdio.h>
void square(int x,int *out){*out=x*x;}
int main(void){int y=0;square(6,&y);printf("square=%d\n",y);return 0;}
```

**Output**

```text
square=36
```

---

## Q84. What common bug or interview trap involves pointer-based output parameter?

**Level:** Core / interview &nbsp;|&nbsp; **Topic:** Functions

**Answer.** A common trap is overlooking the exact language rule and assuming behavior from one compiler. A function can return one value directly and write additional results through pointer parameters. Document whether a pointer may be null and whether it is read or modified.

**Code** (`code_Q084.c`)

```c
#include <stdio.h>
void square(int x,int *out){*out=x*x;}
int main(void){int y=0;square(6,&y);printf("square=%d\n",y);return 0;}
```

**Output**

```text
square=36
```

---

## Q85. How would you explain pointer-based output parameter in a code review?

**Level:** Core / interview &nbsp;|&nbsp; **Topic:** Functions

**Answer.** State the relevant rule, then trace the example's inputs and outputs. A function can return one value directly and write additional results through pointer parameters. Document whether a pointer may be null and whether it is read or modified.

**Code** (`code_Q085.c`)

```c
#include <stdio.h>
void square(int x,int *out){*out=x*x;}
int main(void){int y=0;square(6,&y);printf("square=%d\n",y);return 0;}
```

**Output**

```text
square=36
```

---

## Q86. What is function prototype?

**Level:** Core / interview &nbsp;|&nbsp; **Topic:** Functions

**Answer.** A prototype declares the function's return and parameter types before use, enabling argument checking. Put shared prototypes in a header protected by an include guard.

**Code** (`code_Q086.c`)

```c
#include <stdio.h>
int add(int a,int b);
int main(void){printf("%d\n",add(2,3));return 0;}
int add(int a,int b){return a+b;}
```

**Output**

```text
5
```

---

## Q87. How does function prototype work in C?

**Level:** Core / interview &nbsp;|&nbsp; **Topic:** Functions

**Answer.** A prototype declares the function's return and parameter types before use, enabling argument checking. Put shared prototypes in a header protected by an include guard. The example below demonstrates the rule with a small, deterministic program.

**Code** (`code_Q087.c`)

```c
#include <stdio.h>
int add(int a,int b);
int main(void){printf("%d\n",add(2,3));return 0;}
int add(int a,int b){return a+b;}
```

**Output**

```text
5
```

---

## Q88. When would you use function prototype?

**Level:** Core / interview &nbsp;|&nbsp; **Topic:** Functions

**Answer.** A prototype declares the function's return and parameter types before use, enabling argument checking. Put shared prototypes in a header protected by an include guard.

**Code** (`code_Q088.c`)

```c
#include <stdio.h>
int add(int a,int b);
int main(void){printf("%d\n",add(2,3));return 0;}
int add(int a,int b){return a+b;}
```

**Output**

```text
5
```

---

## Q89. What common bug or interview trap involves function prototype?

**Level:** Core / interview &nbsp;|&nbsp; **Topic:** Functions

**Answer.** A common trap is overlooking the exact language rule and assuming behavior from one compiler. A prototype declares the function's return and parameter types before use, enabling argument checking. Put shared prototypes in a header protected by an include guard.

**Code** (`code_Q089.c`)

```c
#include <stdio.h>
int add(int a,int b);
int main(void){printf("%d\n",add(2,3));return 0;}
int add(int a,int b){return a+b;}
```

**Output**

```text
5
```

---

## Q90. How would you explain function prototype in a code review?

**Level:** Core / interview &nbsp;|&nbsp; **Topic:** Functions

**Answer.** State the relevant rule, then trace the example's inputs and outputs. A prototype declares the function's return and parameter types before use, enabling argument checking. Put shared prototypes in a header protected by an include guard.

**Code** (`code_Q090.c`)

```c
#include <stdio.h>
int add(int a,int b);
int main(void){printf("%d\n",add(2,3));return 0;}
int add(int a,int b){return a+b;}
```

**Output**

```text
5
```

---

## Q91. What is recursion and base case?

**Level:** Core / interview &nbsp;|&nbsp; **Topic:** Functions

**Answer.** A recursive function calls itself on a smaller problem and must have a base case. Each call consumes stack space; iteration may be preferable for deep or unbounded input.

**Code** (`code_Q091.c`)

```c
#include <stdio.h>
int fact(int n){return n<=1?1:n*fact(n-1);}
int main(void){printf("5!=%d\n",fact(5));return 0;}
```

**Output**

```text
5!=120
```

---

## Q92. How does recursion and base case work in C?

**Level:** Core / interview &nbsp;|&nbsp; **Topic:** Functions

**Answer.** A recursive function calls itself on a smaller problem and must have a base case. Each call consumes stack space; iteration may be preferable for deep or unbounded input. The example below demonstrates the rule with a small, deterministic program.

**Code** (`code_Q092.c`)

```c
#include <stdio.h>
int fact(int n){return n<=1?1:n*fact(n-1);}
int main(void){printf("5!=%d\n",fact(5));return 0;}
```

**Output**

```text
5!=120
```

---

## Q93. When would you use recursion and base case?

**Level:** Core / interview &nbsp;|&nbsp; **Topic:** Functions

**Answer.** A recursive function calls itself on a smaller problem and must have a base case. Each call consumes stack space; iteration may be preferable for deep or unbounded input.

**Code** (`code_Q093.c`)

```c
#include <stdio.h>
int fact(int n){return n<=1?1:n*fact(n-1);}
int main(void){printf("5!=%d\n",fact(5));return 0;}
```

**Output**

```text
5!=120
```

---

## Q94. What common bug or interview trap involves recursion and base case?

**Level:** Core / interview &nbsp;|&nbsp; **Topic:** Functions

**Answer.** A common trap is overlooking the exact language rule and assuming behavior from one compiler. A recursive function calls itself on a smaller problem and must have a base case. Each call consumes stack space; iteration may be preferable for deep or unbounded input.

**Code** (`code_Q094.c`)

```c
#include <stdio.h>
int fact(int n){return n<=1?1:n*fact(n-1);}
int main(void){printf("5!=%d\n",fact(5));return 0;}
```

**Output**

```text
5!=120
```

---

## Q95. How would you explain recursion and base case in a code review?

**Level:** Core / interview &nbsp;|&nbsp; **Topic:** Functions

**Answer.** State the relevant rule, then trace the example's inputs and outputs. A recursive function calls itself on a smaller problem and must have a base case. Each call consumes stack space; iteration may be preferable for deep or unbounded input.

**Code** (`code_Q095.c`)

```c
#include <stdio.h>
int fact(int n){return n<=1?1:n*fact(n-1);}
int main(void){printf("5!=%d\n",fact(5));return 0;}
```

**Output**

```text
5!=120
```

---

## Q96. What is static local variable?

**Level:** Core / interview &nbsp;|&nbsp; **Topic:** Functions

**Answer.** A block-scope static object has static storage duration: it is initialized once and retains its value between calls. It is not reinitialized on each call.

**Code** (`code_Q096.c`)

```c
#include <stdio.h>
int next(void){static int n=0;return ++n;}
int main(void){printf("%d %d %d\n",next(),next(),next());return 0;}
```

**Output**

```text
3 2 1
```

---

## Q97. How does static local variable work in C?

**Level:** Core / interview &nbsp;|&nbsp; **Topic:** Functions

**Answer.** A block-scope static object has static storage duration: it is initialized once and retains its value between calls. It is not reinitialized on each call. The example below demonstrates the rule with a small, deterministic program.

**Code** (`code_Q097.c`)

```c
#include <stdio.h>
int next(void){static int n=0;return ++n;}
int main(void){printf("%d %d %d\n",next(),next(),next());return 0;}
```

**Output**

```text
3 2 1
```

---

## Q98. When would you use static local variable?

**Level:** Core / interview &nbsp;|&nbsp; **Topic:** Functions

**Answer.** A block-scope static object has static storage duration: it is initialized once and retains its value between calls. It is not reinitialized on each call.

**Code** (`code_Q098.c`)

```c
#include <stdio.h>
int next(void){static int n=0;return ++n;}
int main(void){printf("%d %d %d\n",next(),next(),next());return 0;}
```

**Output**

```text
3 2 1
```

---

## Q99. What common bug or interview trap involves static local variable?

**Level:** Core / interview &nbsp;|&nbsp; **Topic:** Functions

**Answer.** A common trap is overlooking the exact language rule and assuming behavior from one compiler. A block-scope static object has static storage duration: it is initialized once and retains its value between calls. It is not reinitialized on each call.

**Code** (`code_Q099.c`)

```c
#include <stdio.h>
int next(void){static int n=0;return ++n;}
int main(void){printf("%d %d %d\n",next(),next(),next());return 0;}
```

**Output**

```text
3 2 1
```

---

## Q100. How would you explain static local variable in a code review?

**Level:** Core / interview &nbsp;|&nbsp; **Topic:** Functions

**Answer.** State the relevant rule, then trace the example's inputs and outputs. A block-scope static object has static storage duration: it is initialized once and retains its value between calls. It is not reinitialized on each call.

**Code** (`code_Q100.c`)

```c
#include <stdio.h>
int next(void){static int n=0;return ++n;}
int main(void){printf("%d %d %d\n",next(),next(),next());return 0;}
```

**Output**

```text
3 2 1
```

---

## Q101. What is array length?

**Level:** Core / interview &nbsp;|&nbsp; **Topic:** Arrays and strings

**Answer.** An array's element count can be computed with `sizeof a / sizeof a[0]` only where a is an actual array. Function parameters are adjusted to pointers, so pass the length separately.

**Code** (`code_Q101.c`)

```c
#include <stdio.h>
int main(void){int a[]={3,5,8};size_t n=sizeof a/sizeof a[0];printf("elements=%zu\n",n);return 0;}
```

**Output**

```text
elements=3
```

---

## Q102. How does array length work in C?

**Level:** Core / interview &nbsp;|&nbsp; **Topic:** Arrays and strings

**Answer.** An array's element count can be computed with `sizeof a / sizeof a[0]` only where a is an actual array. Function parameters are adjusted to pointers, so pass the length separately. The example below demonstrates the rule with a small, deterministic program.

**Code** (`code_Q102.c`)

```c
#include <stdio.h>
int main(void){int a[]={3,5,8};size_t n=sizeof a/sizeof a[0];printf("elements=%zu\n",n);return 0;}
```

**Output**

```text
elements=3
```

---

## Q103. When would you use array length?

**Level:** Core / interview &nbsp;|&nbsp; **Topic:** Arrays and strings

**Answer.** An array's element count can be computed with `sizeof a / sizeof a[0]` only where a is an actual array. Function parameters are adjusted to pointers, so pass the length separately.

**Code** (`code_Q103.c`)

```c
#include <stdio.h>
int main(void){int a[]={3,5,8};size_t n=sizeof a/sizeof a[0];printf("elements=%zu\n",n);return 0;}
```

**Output**

```text
elements=3
```

---

## Q104. What common bug or interview trap involves array length?

**Level:** Core / interview &nbsp;|&nbsp; **Topic:** Arrays and strings

**Answer.** A common trap is overlooking the exact language rule and assuming behavior from one compiler. An array's element count can be computed with `sizeof a / sizeof a[0]` only where a is an actual array. Function parameters are adjusted to pointers, so pass the length separately.

**Code** (`code_Q104.c`)

```c
#include <stdio.h>
int main(void){int a[]={3,5,8};size_t n=sizeof a/sizeof a[0];printf("elements=%zu\n",n);return 0;}
```

**Output**

```text
elements=3
```

---

## Q105. How would you explain array length in a code review?

**Level:** Core / interview &nbsp;|&nbsp; **Topic:** Arrays and strings

**Answer.** State the relevant rule, then trace the example's inputs and outputs. An array's element count can be computed with `sizeof a / sizeof a[0]` only where a is an actual array. Function parameters are adjusted to pointers, so pass the length separately.

**Code** (`code_Q105.c`)

```c
#include <stdio.h>
int main(void){int a[]={3,5,8};size_t n=sizeof a/sizeof a[0];printf("elements=%zu\n",n);return 0;}
```

**Output**

```text
elements=3
```

---

## Q106. What is array parameter?

**Level:** Core / interview &nbsp;|&nbsp; **Topic:** Arrays and strings

**Answer.** An array parameter is effectively a pointer parameter. The callee cannot recover the original array length from it; supply a separate size argument and keep it consistent.

**Code** (`code_Q106.c`)

```c
#include <stdio.h>
int sum(const int a[],size_t n){int s=0;for(size_t i=0;i<n;i++)s+=a[i];return s;}
int main(void){int a[]={2,4,6};printf("sum=%d\n",sum(a,3));return 0;}
```

**Output**

```text
sum=12
```

---

## Q107. How does array parameter work in C?

**Level:** Core / interview &nbsp;|&nbsp; **Topic:** Arrays and strings

**Answer.** An array parameter is effectively a pointer parameter. The callee cannot recover the original array length from it; supply a separate size argument and keep it consistent. The example below demonstrates the rule with a small, deterministic program.

**Code** (`code_Q107.c`)

```c
#include <stdio.h>
int sum(const int a[],size_t n){int s=0;for(size_t i=0;i<n;i++)s+=a[i];return s;}
int main(void){int a[]={2,4,6};printf("sum=%d\n",sum(a,3));return 0;}
```

**Output**

```text
sum=12
```

---

## Q108. When would you use array parameter?

**Level:** Core / interview &nbsp;|&nbsp; **Topic:** Arrays and strings

**Answer.** An array parameter is effectively a pointer parameter. The callee cannot recover the original array length from it; supply a separate size argument and keep it consistent.

**Code** (`code_Q108.c`)

```c
#include <stdio.h>
int sum(const int a[],size_t n){int s=0;for(size_t i=0;i<n;i++)s+=a[i];return s;}
int main(void){int a[]={2,4,6};printf("sum=%d\n",sum(a,3));return 0;}
```

**Output**

```text
sum=12
```

---

## Q109. What common bug or interview trap involves array parameter?

**Level:** Core / interview &nbsp;|&nbsp; **Topic:** Arrays and strings

**Answer.** A common trap is overlooking the exact language rule and assuming behavior from one compiler. An array parameter is effectively a pointer parameter. The callee cannot recover the original array length from it; supply a separate size argument and keep it consistent.

**Code** (`code_Q109.c`)

```c
#include <stdio.h>
int sum(const int a[],size_t n){int s=0;for(size_t i=0;i<n;i++)s+=a[i];return s;}
int main(void){int a[]={2,4,6};printf("sum=%d\n",sum(a,3));return 0;}
```

**Output**

```text
sum=12
```

---

## Q110. How would you explain array parameter in a code review?

**Level:** Core / interview &nbsp;|&nbsp; **Topic:** Arrays and strings

**Answer.** State the relevant rule, then trace the example's inputs and outputs. An array parameter is effectively a pointer parameter. The callee cannot recover the original array length from it; supply a separate size argument and keep it consistent.

**Code** (`code_Q110.c`)

```c
#include <stdio.h>
int sum(const int a[],size_t n){int s=0;for(size_t i=0;i<n;i++)s+=a[i];return s;}
int main(void){int a[]={2,4,6};printf("sum=%d\n",sum(a,3));return 0;}
```

**Output**

```text
sum=12
```

---

## Q111. What is C string terminator?

**Level:** Core / interview &nbsp;|&nbsp; **Topic:** Arrays and strings

**Answer.** A C string is a sequence of char values ending in `\0`. Its array needs space for all visible characters plus the terminator. Use bounded operations and check capacities.

**Code** (`code_Q111.c`)

```c
#include <stdio.h>
#include <string.h>
int main(void){char s[8]="cat";printf("length=%zu storage=%zu\n",strlen(s),sizeof s);return 0;}
```

**Output**

```text
length=3 storage=8
```

---

## Q112. How does C string terminator work in C?

**Level:** Core / interview &nbsp;|&nbsp; **Topic:** Arrays and strings

**Answer.** A C string is a sequence of char values ending in `\0`. Its array needs space for all visible characters plus the terminator. Use bounded operations and check capacities. The example below demonstrates the rule with a small, deterministic program.

**Code** (`code_Q112.c`)

```c
#include <stdio.h>
#include <string.h>
int main(void){char s[8]="cat";printf("length=%zu storage=%zu\n",strlen(s),sizeof s);return 0;}
```

**Output**

```text
length=3 storage=8
```

---

## Q113. When would you use C string terminator?

**Level:** Core / interview &nbsp;|&nbsp; **Topic:** Arrays and strings

**Answer.** A C string is a sequence of char values ending in `\0`. Its array needs space for all visible characters plus the terminator. Use bounded operations and check capacities.

**Code** (`code_Q113.c`)

```c
#include <stdio.h>
#include <string.h>
int main(void){char s[8]="cat";printf("length=%zu storage=%zu\n",strlen(s),sizeof s);return 0;}
```

**Output**

```text
length=3 storage=8
```

---

## Q114. What common bug or interview trap involves C string terminator?

**Level:** Core / interview &nbsp;|&nbsp; **Topic:** Arrays and strings

**Answer.** A common trap is overlooking the exact language rule and assuming behavior from one compiler. A C string is a sequence of char values ending in `\0`. Its array needs space for all visible characters plus the terminator. Use bounded operations and check capacities.

**Code** (`code_Q114.c`)

```c
#include <stdio.h>
#include <string.h>
int main(void){char s[8]="cat";printf("length=%zu storage=%zu\n",strlen(s),sizeof s);return 0;}
```

**Output**

```text
length=3 storage=8
```

---

## Q115. How would you explain C string terminator in a code review?

**Level:** Core / interview &nbsp;|&nbsp; **Topic:** Arrays and strings

**Answer.** State the relevant rule, then trace the example's inputs and outputs. A C string is a sequence of char values ending in `\0`. Its array needs space for all visible characters plus the terminator. Use bounded operations and check capacities.

**Code** (`code_Q115.c`)

```c
#include <stdio.h>
#include <string.h>
int main(void){char s[8]="cat";printf("length=%zu storage=%zu\n",strlen(s),sizeof s);return 0;}
```

**Output**

```text
length=3 storage=8
```

---

## Q116. What is fgets input?

**Level:** Core / interview &nbsp;|&nbsp; **Topic:** Arrays and strings

**Answer.** fgets reads at most capacity minus one characters and appends a terminator. Check its return value; a newline may remain in the buffer. It is safer than unbounded input.

**Code** (`code_Q116.c`)

```c
#include <stdio.h>
#include <string.h>
int main(void){char line[16];if(fgets(line,sizeof line,stdin)){line[strcspn(line,"\n")]=0;printf("got: %s\n",line);}return 0;}
```

**Output**

```text
got: hello
```

---

## Q117. How does fgets input work in C?

**Level:** Core / interview &nbsp;|&nbsp; **Topic:** Arrays and strings

**Answer.** fgets reads at most capacity minus one characters and appends a terminator. Check its return value; a newline may remain in the buffer. It is safer than unbounded input. The example below demonstrates the rule with a small, deterministic program.

**Code** (`code_Q117.c`)

```c
#include <stdio.h>
#include <string.h>
int main(void){char line[16];if(fgets(line,sizeof line,stdin)){line[strcspn(line,"\n")]=0;printf("got: %s\n",line);}return 0;}
```

**Output**

```text
got: hello
```

---

## Q118. When would you use fgets input?

**Level:** Core / interview &nbsp;|&nbsp; **Topic:** Arrays and strings

**Answer.** fgets reads at most capacity minus one characters and appends a terminator. Check its return value; a newline may remain in the buffer. It is safer than unbounded input.

**Code** (`code_Q118.c`)

```c
#include <stdio.h>
#include <string.h>
int main(void){char line[16];if(fgets(line,sizeof line,stdin)){line[strcspn(line,"\n")]=0;printf("got: %s\n",line);}return 0;}
```

**Output**

```text
got: hello
```

---

## Q119. What common bug or interview trap involves fgets input?

**Level:** Core / interview &nbsp;|&nbsp; **Topic:** Arrays and strings

**Answer.** A common trap is overlooking the exact language rule and assuming behavior from one compiler. fgets reads at most capacity minus one characters and appends a terminator. Check its return value; a newline may remain in the buffer. It is safer than unbounded input.

**Code** (`code_Q119.c`)

```c
#include <stdio.h>
#include <string.h>
int main(void){char line[16];if(fgets(line,sizeof line,stdin)){line[strcspn(line,"\n")]=0;printf("got: %s\n",line);}return 0;}
```

**Output**

```text
got: hello
```

---

## Q120. How would you explain fgets input in a code review?

**Level:** Core / interview &nbsp;|&nbsp; **Topic:** Arrays and strings

**Answer.** State the relevant rule, then trace the example's inputs and outputs. fgets reads at most capacity minus one characters and appends a terminator. Check its return value; a newline may remain in the buffer. It is safer than unbounded input.

**Code** (`code_Q120.c`)

```c
#include <stdio.h>
#include <string.h>
int main(void){char line[16];if(fgets(line,sizeof line,stdin)){line[strcspn(line,"\n")]=0;printf("got: %s\n",line);}return 0;}
```

**Output**

```text
got: hello
```

---

## Q121. What is strcmp?

**Level:** Core / interview &nbsp;|&nbsp; **Topic:** Arrays and strings

**Answer.** strcmp compares strings lexicographically and returns a negative, zero, or positive value. It does not return a guaranteed -1 or +1; test whether it is less than, equal to, or greater than zero.

**Code** (`code_Q121.c`)

```c
#include <stdio.h>
#include <string.h>
int main(void){printf("same=%d different=%d\n",strcmp("cat","cat")==0,strcmp("cat","dog")<0);return 0;}
```

**Output**

```text
same=1 different=1
```

---

## Q122. How does strcmp work in C?

**Level:** Core / interview &nbsp;|&nbsp; **Topic:** Arrays and strings

**Answer.** strcmp compares strings lexicographically and returns a negative, zero, or positive value. It does not return a guaranteed -1 or +1; test whether it is less than, equal to, or greater than zero. The example below demonstrates the rule with a small, deterministic program.

**Code** (`code_Q122.c`)

```c
#include <stdio.h>
#include <string.h>
int main(void){printf("same=%d different=%d\n",strcmp("cat","cat")==0,strcmp("cat","dog")<0);return 0;}
```

**Output**

```text
same=1 different=1
```

---

## Q123. When would you use strcmp?

**Level:** Core / interview &nbsp;|&nbsp; **Topic:** Arrays and strings

**Answer.** strcmp compares strings lexicographically and returns a negative, zero, or positive value. It does not return a guaranteed -1 or +1; test whether it is less than, equal to, or greater than zero.

**Code** (`code_Q123.c`)

```c
#include <stdio.h>
#include <string.h>
int main(void){printf("same=%d different=%d\n",strcmp("cat","cat")==0,strcmp("cat","dog")<0);return 0;}
```

**Output**

```text
same=1 different=1
```

---

## Q124. What common bug or interview trap involves strcmp?

**Level:** Core / interview &nbsp;|&nbsp; **Topic:** Arrays and strings

**Answer.** A common trap is overlooking the exact language rule and assuming behavior from one compiler. strcmp compares strings lexicographically and returns a negative, zero, or positive value. It does not return a guaranteed -1 or +1; test whether it is less than, equal to, or greater than zero.

**Code** (`code_Q124.c`)

```c
#include <stdio.h>
#include <string.h>
int main(void){printf("same=%d different=%d\n",strcmp("cat","cat")==0,strcmp("cat","dog")<0);return 0;}
```

**Output**

```text
same=1 different=1
```

---

## Q125. How would you explain strcmp in a code review?

**Level:** Core / interview &nbsp;|&nbsp; **Topic:** Arrays and strings

**Answer.** State the relevant rule, then trace the example's inputs and outputs. strcmp compares strings lexicographically and returns a negative, zero, or positive value. It does not return a guaranteed -1 or +1; test whether it is less than, equal to, or greater than zero.

**Code** (`code_Q125.c`)

```c
#include <stdio.h>
#include <string.h>
int main(void){printf("same=%d different=%d\n",strcmp("cat","cat")==0,strcmp("cat","dog")<0);return 0;}
```

**Output**

```text
same=1 different=1
```

---

## Q126. What is address-of and dereference?

**Level:** Core / interview &nbsp;|&nbsp; **Topic:** Pointers

**Answer.** `&x` produces the address of x; `*p` accesses the object designated by p. Dereference only a pointer that points to a live object of a compatible type.

**Code** (`code_Q126.c`)

```c
#include <stdio.h>
int main(void){int x=42;int *p=&x;printf("x=%d *p=%d\n",x,*p);return 0;}
```

**Output**

```text
x=42 *p=42
```

---

## Q127. How does address-of and dereference work in C?

**Level:** Core / interview &nbsp;|&nbsp; **Topic:** Pointers

**Answer.** `&x` produces the address of x; `*p` accesses the object designated by p. Dereference only a pointer that points to a live object of a compatible type. The example below demonstrates the rule with a small, deterministic program.

**Code** (`code_Q127.c`)

```c
#include <stdio.h>
int main(void){int x=42;int *p=&x;printf("x=%d *p=%d\n",x,*p);return 0;}
```

**Output**

```text
x=42 *p=42
```

---

## Q128. When would you use address-of and dereference?

**Level:** Core / interview &nbsp;|&nbsp; **Topic:** Pointers

**Answer.** `&x` produces the address of x; `*p` accesses the object designated by p. Dereference only a pointer that points to a live object of a compatible type.

**Code** (`code_Q128.c`)

```c
#include <stdio.h>
int main(void){int x=42;int *p=&x;printf("x=%d *p=%d\n",x,*p);return 0;}
```

**Output**

```text
x=42 *p=42
```

---

## Q129. What common bug or interview trap involves address-of and dereference?

**Level:** Core / interview &nbsp;|&nbsp; **Topic:** Pointers

**Answer.** A common trap is overlooking the exact language rule and assuming behavior from one compiler. `&x` produces the address of x; `*p` accesses the object designated by p. Dereference only a pointer that points to a live object of a compatible type.

**Code** (`code_Q129.c`)

```c
#include <stdio.h>
int main(void){int x=42;int *p=&x;printf("x=%d *p=%d\n",x,*p);return 0;}
```

**Output**

```text
x=42 *p=42
```

---

## Q130. How would you explain address-of and dereference in a code review?

**Level:** Core / interview &nbsp;|&nbsp; **Topic:** Pointers

**Answer.** State the relevant rule, then trace the example's inputs and outputs. `&x` produces the address of x; `*p` accesses the object designated by p. Dereference only a pointer that points to a live object of a compatible type.

**Code** (`code_Q130.c`)

```c
#include <stdio.h>
int main(void){int x=42;int *p=&x;printf("x=%d *p=%d\n",x,*p);return 0;}
```

**Output**

```text
x=42 *p=42
```

---

## Q131. What is null pointer?

**Level:** Core / interview &nbsp;|&nbsp; **Topic:** Pointers

**Answer.** A null pointer does not point to an object and must not be dereferenced. Test with `p != NULL` before optional access; initialize pointer variables before use.

**Code** (`code_Q131.c`)

```c
#include <stdio.h>
#include <stddef.h>
int main(void){int *p=NULL;printf("pointer is %s\n",p==NULL?"null":"non-null");return 0;}
```

**Output**

```text
pointer is null
```

---

## Q132. How does null pointer work in C?

**Level:** Core / interview &nbsp;|&nbsp; **Topic:** Pointers

**Answer.** A null pointer does not point to an object and must not be dereferenced. Test with `p != NULL` before optional access; initialize pointer variables before use. The example below demonstrates the rule with a small, deterministic program.

**Code** (`code_Q132.c`)

```c
#include <stdio.h>
#include <stddef.h>
int main(void){int *p=NULL;printf("pointer is %s\n",p==NULL?"null":"non-null");return 0;}
```

**Output**

```text
pointer is null
```

---

## Q133. When would you use null pointer?

**Level:** Core / interview &nbsp;|&nbsp; **Topic:** Pointers

**Answer.** A null pointer does not point to an object and must not be dereferenced. Test with `p != NULL` before optional access; initialize pointer variables before use.

**Code** (`code_Q133.c`)

```c
#include <stdio.h>
#include <stddef.h>
int main(void){int *p=NULL;printf("pointer is %s\n",p==NULL?"null":"non-null");return 0;}
```

**Output**

```text
pointer is null
```

---

## Q134. What common bug or interview trap involves null pointer?

**Level:** Core / interview &nbsp;|&nbsp; **Topic:** Pointers

**Answer.** A common trap is overlooking the exact language rule and assuming behavior from one compiler. A null pointer does not point to an object and must not be dereferenced. Test with `p != NULL` before optional access; initialize pointer variables before use.

**Code** (`code_Q134.c`)

```c
#include <stdio.h>
#include <stddef.h>
int main(void){int *p=NULL;printf("pointer is %s\n",p==NULL?"null":"non-null");return 0;}
```

**Output**

```text
pointer is null
```

---

## Q135. How would you explain null pointer in a code review?

**Level:** Core / interview &nbsp;|&nbsp; **Topic:** Pointers

**Answer.** State the relevant rule, then trace the example's inputs and outputs. A null pointer does not point to an object and must not be dereferenced. Test with `p != NULL` before optional access; initialize pointer variables before use.

**Code** (`code_Q135.c`)

```c
#include <stdio.h>
#include <stddef.h>
int main(void){int *p=NULL;printf("pointer is %s\n",p==NULL?"null":"non-null");return 0;}
```

**Output**

```text
pointer is null
```

---

## Q136. What is const pointer combinations?

**Level:** Core / interview &nbsp;|&nbsp; **Topic:** Pointers

**Answer.** Read a declaration from the identifier outward: `int *p` is a pointer to int; `const int *p` points to const int; `int * const p` is a const pointer to int.

**Code** (`code_Q136.c`)

```c
#include <stdio.h>
int main(void){int a=1,b=2;int * const p=&a;*p=7;printf("a=%d b=%d\n",a,b);return 0;}
```

**Output**

```text
a=7 b=2
```

---

## Q137. How does const pointer combinations work in C?

**Level:** Core / interview &nbsp;|&nbsp; **Topic:** Pointers

**Answer.** Read a declaration from the identifier outward: `int *p` is a pointer to int; `const int *p` points to const int; `int * const p` is a const pointer to int. The example below demonstrates the rule with a small, deterministic program.

**Code** (`code_Q137.c`)

```c
#include <stdio.h>
int main(void){int a=1,b=2;int * const p=&a;*p=7;printf("a=%d b=%d\n",a,b);return 0;}
```

**Output**

```text
a=7 b=2
```

---

## Q138. When would you use const pointer combinations?

**Level:** Core / interview &nbsp;|&nbsp; **Topic:** Pointers

**Answer.** Read a declaration from the identifier outward: `int *p` is a pointer to int; `const int *p` points to const int; `int * const p` is a const pointer to int.

**Code** (`code_Q138.c`)

```c
#include <stdio.h>
int main(void){int a=1,b=2;int * const p=&a;*p=7;printf("a=%d b=%d\n",a,b);return 0;}
```

**Output**

```text
a=7 b=2
```

---

## Q139. What common bug or interview trap involves const pointer combinations?

**Level:** Core / interview &nbsp;|&nbsp; **Topic:** Pointers

**Answer.** A common trap is overlooking the exact language rule and assuming behavior from one compiler. Read a declaration from the identifier outward: `int *p` is a pointer to int; `const int *p` points to const int; `int * const p` is a const pointer to int.

**Code** (`code_Q139.c`)

```c
#include <stdio.h>
int main(void){int a=1,b=2;int * const p=&a;*p=7;printf("a=%d b=%d\n",a,b);return 0;}
```

**Output**

```text
a=7 b=2
```

---

## Q140. How would you explain const pointer combinations in a code review?

**Level:** Core / interview &nbsp;|&nbsp; **Topic:** Pointers

**Answer.** State the relevant rule, then trace the example's inputs and outputs. Read a declaration from the identifier outward: `int *p` is a pointer to int; `const int *p` points to const int; `int * const p` is a const pointer to int.

**Code** (`code_Q140.c`)

```c
#include <stdio.h>
int main(void){int a=1,b=2;int * const p=&a;*p=7;printf("a=%d b=%d\n",a,b);return 0;}
```

**Output**

```text
a=7 b=2
```

---

## Q141. What is pointer arithmetic?

**Level:** Core / interview &nbsp;|&nbsp; **Topic:** Pointers

**Answer.** Pointer arithmetic is defined within one array object and one past its end. The increment is scaled by the pointed-to type. Never dereference a one-past pointer.

**Code** (`code_Q141.c`)

```c
#include <stdio.h>
#include <stddef.h>
int main(void){int a[]={10,20,30};int *p=a;printf("%d %d offset=%td\n",*p,*(p+2),(p+2)-p);return 0;}
```

**Output**

```text
10 30 offset=2
```

---

## Q142. How does pointer arithmetic work in C?

**Level:** Core / interview &nbsp;|&nbsp; **Topic:** Pointers

**Answer.** Pointer arithmetic is defined within one array object and one past its end. The increment is scaled by the pointed-to type. Never dereference a one-past pointer. The example below demonstrates the rule with a small, deterministic program.

**Code** (`code_Q142.c`)

```c
#include <stdio.h>
#include <stddef.h>
int main(void){int a[]={10,20,30};int *p=a;printf("%d %d offset=%td\n",*p,*(p+2),(p+2)-p);return 0;}
```

**Output**

```text
10 30 offset=2
```

---

## Q143. When would you use pointer arithmetic?

**Level:** Core / interview &nbsp;|&nbsp; **Topic:** Pointers

**Answer.** Pointer arithmetic is defined within one array object and one past its end. The increment is scaled by the pointed-to type. Never dereference a one-past pointer.

**Code** (`code_Q143.c`)

```c
#include <stdio.h>
#include <stddef.h>
int main(void){int a[]={10,20,30};int *p=a;printf("%d %d offset=%td\n",*p,*(p+2),(p+2)-p);return 0;}
```

**Output**

```text
10 30 offset=2
```

---

## Q144. What common bug or interview trap involves pointer arithmetic?

**Level:** Core / interview &nbsp;|&nbsp; **Topic:** Pointers

**Answer.** A common trap is overlooking the exact language rule and assuming behavior from one compiler. Pointer arithmetic is defined within one array object and one past its end. The increment is scaled by the pointed-to type. Never dereference a one-past pointer.

**Code** (`code_Q144.c`)

```c
#include <stdio.h>
#include <stddef.h>
int main(void){int a[]={10,20,30};int *p=a;printf("%d %d offset=%td\n",*p,*(p+2),(p+2)-p);return 0;}
```

**Output**

```text
10 30 offset=2
```

---

## Q145. How would you explain pointer arithmetic in a code review?

**Level:** Core / interview &nbsp;|&nbsp; **Topic:** Pointers

**Answer.** State the relevant rule, then trace the example's inputs and outputs. Pointer arithmetic is defined within one array object and one past its end. The increment is scaled by the pointed-to type. Never dereference a one-past pointer.

**Code** (`code_Q145.c`)

```c
#include <stdio.h>
#include <stddef.h>
int main(void){int a[]={10,20,30};int *p=a;printf("%d %d offset=%td\n",*p,*(p+2),(p+2)-p);return 0;}
```

**Output**

```text
10 30 offset=2
```

---

## Q146. What is void pointer?

**Level:** Core / interview &nbsp;|&nbsp; **Topic:** Pointers

**Answer.** void * is a generic object pointer that can hold an address to any object type. Convert it to a compatible object pointer before dereferencing; standard C does not allow arithmetic on void *.

**Code** (`code_Q146.c`)

```c
#include <stdio.h>
int main(void){int x=17;void *v=&x;int *p=v;printf("%d\n",*p);return 0;}
```

**Output**

```text
17
```

---

## Q147. How does void pointer work in C?

**Level:** Core / interview &nbsp;|&nbsp; **Topic:** Pointers

**Answer.** void * is a generic object pointer that can hold an address to any object type. Convert it to a compatible object pointer before dereferencing; standard C does not allow arithmetic on void *. The example below demonstrates the rule with a small, deterministic program.

**Code** (`code_Q147.c`)

```c
#include <stdio.h>
int main(void){int x=17;void *v=&x;int *p=v;printf("%d\n",*p);return 0;}
```

**Output**

```text
17
```

---

## Q148. When would you use void pointer?

**Level:** Core / interview &nbsp;|&nbsp; **Topic:** Pointers

**Answer.** void * is a generic object pointer that can hold an address to any object type. Convert it to a compatible object pointer before dereferencing; standard C does not allow arithmetic on void *.

**Code** (`code_Q148.c`)

```c
#include <stdio.h>
int main(void){int x=17;void *v=&x;int *p=v;printf("%d\n",*p);return 0;}
```

**Output**

```text
17
```

---

## Q149. What common bug or interview trap involves void pointer?

**Level:** Core / interview &nbsp;|&nbsp; **Topic:** Pointers

**Answer.** A common trap is overlooking the exact language rule and assuming behavior from one compiler. void * is a generic object pointer that can hold an address to any object type. Convert it to a compatible object pointer before dereferencing; standard C does not allow arithmetic on void *.

**Code** (`code_Q149.c`)

```c
#include <stdio.h>
int main(void){int x=17;void *v=&x;int *p=v;printf("%d\n",*p);return 0;}
```

**Output**

```text
17
```

---

## Q150. How would you explain void pointer in a code review?

**Level:** Core / interview &nbsp;|&nbsp; **Topic:** Pointers

**Answer.** State the relevant rule, then trace the example's inputs and outputs. void * is a generic object pointer that can hold an address to any object type. Convert it to a compatible object pointer before dereferencing; standard C does not allow arithmetic on void *.

**Code** (`code_Q150.c`)

```c
#include <stdio.h>
int main(void){int x=17;void *v=&x;int *p=v;printf("%d\n",*p);return 0;}
```

**Output**

```text
17
```

---

## Q151. What is struct member access?

**Level:** Core / interview &nbsp;|&nbsp; **Topic:** Structs and unions

**Answer.** Use `.` to access a member of a struct object and `->` to access a member through a pointer. A struct packages related fields with a single type.

**Code** (`code_Q151.c`)

```c
#include <stdio.h>
struct Point{int x,y;};
int main(void){struct Point p={.x=3,.y=4};struct Point *q=&p;printf("%d,%d\n",q->x,q->y);return 0;}
```

**Output**

```text
3,4
```

---

## Q152. How does struct member access work in C?

**Level:** Core / interview &nbsp;|&nbsp; **Topic:** Structs and unions

**Answer.** Use `.` to access a member of a struct object and `->` to access a member through a pointer. A struct packages related fields with a single type. The example below demonstrates the rule with a small, deterministic program.

**Code** (`code_Q152.c`)

```c
#include <stdio.h>
struct Point{int x,y;};
int main(void){struct Point p={.x=3,.y=4};struct Point *q=&p;printf("%d,%d\n",q->x,q->y);return 0;}
```

**Output**

```text
3,4
```

---

## Q153. When would you use struct member access?

**Level:** Core / interview &nbsp;|&nbsp; **Topic:** Structs and unions

**Answer.** Use `.` to access a member of a struct object and `->` to access a member through a pointer. A struct packages related fields with a single type.

**Code** (`code_Q153.c`)

```c
#include <stdio.h>
struct Point{int x,y;};
int main(void){struct Point p={.x=3,.y=4};struct Point *q=&p;printf("%d,%d\n",q->x,q->y);return 0;}
```

**Output**

```text
3,4
```

---

## Q154. What common bug or interview trap involves struct member access?

**Level:** Core / interview &nbsp;|&nbsp; **Topic:** Structs and unions

**Answer.** A common trap is overlooking the exact language rule and assuming behavior from one compiler. Use `.` to access a member of a struct object and `->` to access a member through a pointer. A struct packages related fields with a single type.

**Code** (`code_Q154.c`)

```c
#include <stdio.h>
struct Point{int x,y;};
int main(void){struct Point p={.x=3,.y=4};struct Point *q=&p;printf("%d,%d\n",q->x,q->y);return 0;}
```

**Output**

```text
3,4
```

---

## Q155. How would you explain struct member access in a code review?

**Level:** Core / interview &nbsp;|&nbsp; **Topic:** Structs and unions

**Answer.** State the relevant rule, then trace the example's inputs and outputs. Use `.` to access a member of a struct object and `->` to access a member through a pointer. A struct packages related fields with a single type.

**Code** (`code_Q155.c`)

```c
#include <stdio.h>
struct Point{int x,y;};
int main(void){struct Point p={.x=3,.y=4};struct Point *q=&p;printf("%d,%d\n",q->x,q->y);return 0;}
```

**Output**

```text
3,4
```

---

## Q156. What is struct padding?

**Level:** Core / interview &nbsp;|&nbsp; **Topic:** Structs and unions

**Answer.** A compiler may insert padding between members or at the end to meet alignment requirements. Member order can affect size, but exact layout is implementation-dependent; do not serialize raw structs as portable files.

**Code** (`code_Q156.c`)

```c
#include <stdio.h>
struct Example{char c;int n;};
int main(void){printf("sizeof struct=%zu (implementation dependent)\n",sizeof(struct Example));return 0;}
```

**Output**

```text
sizeof struct=8 (implementation dependent)
```

---

## Q157. How does struct padding work in C?

**Level:** Core / interview &nbsp;|&nbsp; **Topic:** Structs and unions

**Answer.** A compiler may insert padding between members or at the end to meet alignment requirements. Member order can affect size, but exact layout is implementation-dependent; do not serialize raw structs as portable files. The example below demonstrates the rule with a small, deterministic program.

**Code** (`code_Q157.c`)

```c
#include <stdio.h>
struct Example{char c;int n;};
int main(void){printf("sizeof struct=%zu (implementation dependent)\n",sizeof(struct Example));return 0;}
```

**Output**

```text
sizeof struct=8 (implementation dependent)
```

---

## Q158. When would you use struct padding?

**Level:** Core / interview &nbsp;|&nbsp; **Topic:** Structs and unions

**Answer.** A compiler may insert padding between members or at the end to meet alignment requirements. Member order can affect size, but exact layout is implementation-dependent; do not serialize raw structs as portable files.

**Code** (`code_Q158.c`)

```c
#include <stdio.h>
struct Example{char c;int n;};
int main(void){printf("sizeof struct=%zu (implementation dependent)\n",sizeof(struct Example));return 0;}
```

**Output**

```text
sizeof struct=8 (implementation dependent)
```

---

## Q159. What common bug or interview trap involves struct padding?

**Level:** Core / interview &nbsp;|&nbsp; **Topic:** Structs and unions

**Answer.** A common trap is overlooking the exact language rule and assuming behavior from one compiler. A compiler may insert padding between members or at the end to meet alignment requirements. Member order can affect size, but exact layout is implementation-dependent; do not serialize raw structs as portable files.

**Code** (`code_Q159.c`)

```c
#include <stdio.h>
struct Example{char c;int n;};
int main(void){printf("sizeof struct=%zu (implementation dependent)\n",sizeof(struct Example));return 0;}
```

**Output**

```text
sizeof struct=8 (implementation dependent)
```

---

## Q160. How would you explain struct padding in a code review?

**Level:** Core / interview &nbsp;|&nbsp; **Topic:** Structs and unions

**Answer.** State the relevant rule, then trace the example's inputs and outputs. A compiler may insert padding between members or at the end to meet alignment requirements. Member order can affect size, but exact layout is implementation-dependent; do not serialize raw structs as portable files.

**Code** (`code_Q160.c`)

```c
#include <stdio.h>
struct Example{char c;int n;};
int main(void){printf("sizeof struct=%zu (implementation dependent)\n",sizeof(struct Example));return 0;}
```

**Output**

```text
sizeof struct=8 (implementation dependent)
```

---

## Q161. What is union storage?

**Level:** Core / interview &nbsp;|&nbsp; **Topic:** Structs and unions

**Answer.** A union's members overlap the same storage. It can save space when only one alternative is active, but code must track which member is currently valid.

**Code** (`code_Q161.c`)

```c
#include <stdio.h>
union Value{int i;float f;};
int main(void){union Value v;v.i=12;printf("active integer=%d\n",v.i);return 0;}
```

**Output**

```text
active integer=12
```

---

## Q162. How does union storage work in C?

**Level:** Core / interview &nbsp;|&nbsp; **Topic:** Structs and unions

**Answer.** A union's members overlap the same storage. It can save space when only one alternative is active, but code must track which member is currently valid. The example below demonstrates the rule with a small, deterministic program.

**Code** (`code_Q162.c`)

```c
#include <stdio.h>
union Value{int i;float f;};
int main(void){union Value v;v.i=12;printf("active integer=%d\n",v.i);return 0;}
```

**Output**

```text
active integer=12
```

---

## Q163. When would you use union storage?

**Level:** Core / interview &nbsp;|&nbsp; **Topic:** Structs and unions

**Answer.** A union's members overlap the same storage. It can save space when only one alternative is active, but code must track which member is currently valid.

**Code** (`code_Q163.c`)

```c
#include <stdio.h>
union Value{int i;float f;};
int main(void){union Value v;v.i=12;printf("active integer=%d\n",v.i);return 0;}
```

**Output**

```text
active integer=12
```

---

## Q164. What common bug or interview trap involves union storage?

**Level:** Core / interview &nbsp;|&nbsp; **Topic:** Structs and unions

**Answer.** A common trap is overlooking the exact language rule and assuming behavior from one compiler. A union's members overlap the same storage. It can save space when only one alternative is active, but code must track which member is currently valid.

**Code** (`code_Q164.c`)

```c
#include <stdio.h>
union Value{int i;float f;};
int main(void){union Value v;v.i=12;printf("active integer=%d\n",v.i);return 0;}
```

**Output**

```text
active integer=12
```

---

## Q165. How would you explain union storage in a code review?

**Level:** Core / interview &nbsp;|&nbsp; **Topic:** Structs and unions

**Answer.** State the relevant rule, then trace the example's inputs and outputs. A union's members overlap the same storage. It can save space when only one alternative is active, but code must track which member is currently valid.

**Code** (`code_Q165.c`)

```c
#include <stdio.h>
union Value{int i;float f;};
int main(void){union Value v;v.i=12;printf("active integer=%d\n",v.i);return 0;}
```

**Output**

```text
active integer=12
```

---

## Q166. What is typedef?

**Level:** Core / interview &nbsp;|&nbsp; **Topic:** Structs and unions

**Answer.** typedef introduces an alias for a type; it does not create a distinct type. Use it for readability, but avoid hiding pointer-ness or ownership semantics.

**Code** (`code_Q166.c`)

```c
#include <stdio.h>
typedef unsigned long UserId;
int main(void){UserId id=1204UL;printf("id=%lu\n",id);return 0;}
```

**Output**

```text
id=1204
```

---

## Q167. How does typedef work in C?

**Level:** Core / interview &nbsp;|&nbsp; **Topic:** Structs and unions

**Answer.** typedef introduces an alias for a type; it does not create a distinct type. Use it for readability, but avoid hiding pointer-ness or ownership semantics. The example below demonstrates the rule with a small, deterministic program.

**Code** (`code_Q167.c`)

```c
#include <stdio.h>
typedef unsigned long UserId;
int main(void){UserId id=1204UL;printf("id=%lu\n",id);return 0;}
```

**Output**

```text
id=1204
```

---

## Q168. When would you use typedef?

**Level:** Core / interview &nbsp;|&nbsp; **Topic:** Structs and unions

**Answer.** typedef introduces an alias for a type; it does not create a distinct type. Use it for readability, but avoid hiding pointer-ness or ownership semantics.

**Code** (`code_Q168.c`)

```c
#include <stdio.h>
typedef unsigned long UserId;
int main(void){UserId id=1204UL;printf("id=%lu\n",id);return 0;}
```

**Output**

```text
id=1204
```

---

## Q169. What common bug or interview trap involves typedef?

**Level:** Core / interview &nbsp;|&nbsp; **Topic:** Structs and unions

**Answer.** A common trap is overlooking the exact language rule and assuming behavior from one compiler. typedef introduces an alias for a type; it does not create a distinct type. Use it for readability, but avoid hiding pointer-ness or ownership semantics.

**Code** (`code_Q169.c`)

```c
#include <stdio.h>
typedef unsigned long UserId;
int main(void){UserId id=1204UL;printf("id=%lu\n",id);return 0;}
```

**Output**

```text
id=1204
```

---

## Q170. How would you explain typedef in a code review?

**Level:** Core / interview &nbsp;|&nbsp; **Topic:** Structs and unions

**Answer.** State the relevant rule, then trace the example's inputs and outputs. typedef introduces an alias for a type; it does not create a distinct type. Use it for readability, but avoid hiding pointer-ness or ownership semantics.

**Code** (`code_Q170.c`)

```c
#include <stdio.h>
typedef unsigned long UserId;
int main(void){UserId id=1204UL;printf("id=%lu\n",id);return 0;}
```

**Output**

```text
id=1204
```

---

## Q171. What is designated initializers?

**Level:** Core / interview &nbsp;|&nbsp; **Topic:** Structs and unions

**Answer.** Designated initializers name fields or indices, improving clarity and reducing mistakes when aggregate order is long. They are standard in C99 and later.

**Code** (`code_Q171.c`)

```c
#include <stdio.h>
struct User{int id;int active;};
int main(void){struct User u={.active=1,.id=7};printf("id=%d active=%d\n",u.id,u.active);return 0;}
```

**Output**

```text
id=7 active=1
```

---

## Q172. How does designated initializers work in C?

**Level:** Core / interview &nbsp;|&nbsp; **Topic:** Structs and unions

**Answer.** Designated initializers name fields or indices, improving clarity and reducing mistakes when aggregate order is long. They are standard in C99 and later. The example below demonstrates the rule with a small, deterministic program.

**Code** (`code_Q172.c`)

```c
#include <stdio.h>
struct User{int id;int active;};
int main(void){struct User u={.active=1,.id=7};printf("id=%d active=%d\n",u.id,u.active);return 0;}
```

**Output**

```text
id=7 active=1
```

---

## Q173. When would you use designated initializers?

**Level:** Core / interview &nbsp;|&nbsp; **Topic:** Structs and unions

**Answer.** Designated initializers name fields or indices, improving clarity and reducing mistakes when aggregate order is long. They are standard in C99 and later.

**Code** (`code_Q173.c`)

```c
#include <stdio.h>
struct User{int id;int active;};
int main(void){struct User u={.active=1,.id=7};printf("id=%d active=%d\n",u.id,u.active);return 0;}
```

**Output**

```text
id=7 active=1
```

---

## Q174. What common bug or interview trap involves designated initializers?

**Level:** Core / interview &nbsp;|&nbsp; **Topic:** Structs and unions

**Answer.** A common trap is overlooking the exact language rule and assuming behavior from one compiler. Designated initializers name fields or indices, improving clarity and reducing mistakes when aggregate order is long. They are standard in C99 and later.

**Code** (`code_Q174.c`)

```c
#include <stdio.h>
struct User{int id;int active;};
int main(void){struct User u={.active=1,.id=7};printf("id=%d active=%d\n",u.id,u.active);return 0;}
```

**Output**

```text
id=7 active=1
```

---

## Q175. How would you explain designated initializers in a code review?

**Level:** Core / interview &nbsp;|&nbsp; **Topic:** Structs and unions

**Answer.** State the relevant rule, then trace the example's inputs and outputs. Designated initializers name fields or indices, improving clarity and reducing mistakes when aggregate order is long. They are standard in C99 and later.

**Code** (`code_Q175.c`)

```c
#include <stdio.h>
struct User{int id;int active;};
int main(void){struct User u={.active=1,.id=7};printf("id=%d active=%d\n",u.id,u.active);return 0;}
```

**Output**

```text
id=7 active=1
```

---

## Q176. What is malloc and free?

**Level:** Core / interview &nbsp;|&nbsp; **Topic:** Dynamic memory

**Answer.** malloc allocates uninitialized storage and returns NULL on failure. Check the result, use the right size, and free it once when finished. After free, do not access the former object.

**Code** (`code_Q176.c`)

```c
#include <stdio.h>
#include <stdlib.h>
int main(void){int *p=malloc(3*sizeof *p);if(!p)return 1;p[0]=4;p[1]=5;p[2]=6;printf("sum=%d\n",p[0]+p[1]+p[2]);free(p);return 0;}
```

**Output**

```text
sum=15
```

---

## Q177. How does malloc and free work in C?

**Level:** Core / interview &nbsp;|&nbsp; **Topic:** Dynamic memory

**Answer.** malloc allocates uninitialized storage and returns NULL on failure. Check the result, use the right size, and free it once when finished. After free, do not access the former object. The example below demonstrates the rule with a small, deterministic program.

**Code** (`code_Q177.c`)

```c
#include <stdio.h>
#include <stdlib.h>
int main(void){int *p=malloc(3*sizeof *p);if(!p)return 1;p[0]=4;p[1]=5;p[2]=6;printf("sum=%d\n",p[0]+p[1]+p[2]);free(p);return 0;}
```

**Output**

```text
sum=15
```

---

## Q178. When would you use malloc and free?

**Level:** Core / interview &nbsp;|&nbsp; **Topic:** Dynamic memory

**Answer.** malloc allocates uninitialized storage and returns NULL on failure. Check the result, use the right size, and free it once when finished. After free, do not access the former object.

**Code** (`code_Q178.c`)

```c
#include <stdio.h>
#include <stdlib.h>
int main(void){int *p=malloc(3*sizeof *p);if(!p)return 1;p[0]=4;p[1]=5;p[2]=6;printf("sum=%d\n",p[0]+p[1]+p[2]);free(p);return 0;}
```

**Output**

```text
sum=15
```

---

## Q179. What common bug or interview trap involves malloc and free?

**Level:** Core / interview &nbsp;|&nbsp; **Topic:** Dynamic memory

**Answer.** A common trap is overlooking the exact language rule and assuming behavior from one compiler. malloc allocates uninitialized storage and returns NULL on failure. Check the result, use the right size, and free it once when finished. After free, do not access the former object.

**Code** (`code_Q179.c`)

```c
#include <stdio.h>
#include <stdlib.h>
int main(void){int *p=malloc(3*sizeof *p);if(!p)return 1;p[0]=4;p[1]=5;p[2]=6;printf("sum=%d\n",p[0]+p[1]+p[2]);free(p);return 0;}
```

**Output**

```text
sum=15
```

---

## Q180. How would you explain malloc and free in a code review?

**Level:** Core / interview &nbsp;|&nbsp; **Topic:** Dynamic memory

**Answer.** State the relevant rule, then trace the example's inputs and outputs. malloc allocates uninitialized storage and returns NULL on failure. Check the result, use the right size, and free it once when finished. After free, do not access the former object.

**Code** (`code_Q180.c`)

```c
#include <stdio.h>
#include <stdlib.h>
int main(void){int *p=malloc(3*sizeof *p);if(!p)return 1;p[0]=4;p[1]=5;p[2]=6;printf("sum=%d\n",p[0]+p[1]+p[2]);free(p);return 0;}
```

**Output**

```text
sum=15
```

---

## Q181. What is calloc?

**Level:** Core / interview &nbsp;|&nbsp; **Topic:** Dynamic memory

**Answer.** calloc allocates an array and initializes its bytes to zero. It can help create zeroed storage, though zero bytes are not universally guaranteed to represent every possible pointer or floating value.

**Code** (`code_Q181.c`)

```c
#include <stdio.h>
#include <stdlib.h>
int main(void){int *p=calloc(3,sizeof *p);if(!p)return 1;printf("%d %d %d\n",p[0],p[1],p[2]);free(p);return 0;}
```

**Output**

```text
0 0 0
```

---

## Q182. How does calloc work in C?

**Level:** Core / interview &nbsp;|&nbsp; **Topic:** Dynamic memory

**Answer.** calloc allocates an array and initializes its bytes to zero. It can help create zeroed storage, though zero bytes are not universally guaranteed to represent every possible pointer or floating value. The example below demonstrates the rule with a small, deterministic program.

**Code** (`code_Q182.c`)

```c
#include <stdio.h>
#include <stdlib.h>
int main(void){int *p=calloc(3,sizeof *p);if(!p)return 1;printf("%d %d %d\n",p[0],p[1],p[2]);free(p);return 0;}
```

**Output**

```text
0 0 0
```

---

## Q183. When would you use calloc?

**Level:** Core / interview &nbsp;|&nbsp; **Topic:** Dynamic memory

**Answer.** calloc allocates an array and initializes its bytes to zero. It can help create zeroed storage, though zero bytes are not universally guaranteed to represent every possible pointer or floating value.

**Code** (`code_Q183.c`)

```c
#include <stdio.h>
#include <stdlib.h>
int main(void){int *p=calloc(3,sizeof *p);if(!p)return 1;printf("%d %d %d\n",p[0],p[1],p[2]);free(p);return 0;}
```

**Output**

```text
0 0 0
```

---

## Q184. What common bug or interview trap involves calloc?

**Level:** Core / interview &nbsp;|&nbsp; **Topic:** Dynamic memory

**Answer.** A common trap is overlooking the exact language rule and assuming behavior from one compiler. calloc allocates an array and initializes its bytes to zero. It can help create zeroed storage, though zero bytes are not universally guaranteed to represent every possible pointer or floating value.

**Code** (`code_Q184.c`)

```c
#include <stdio.h>
#include <stdlib.h>
int main(void){int *p=calloc(3,sizeof *p);if(!p)return 1;printf("%d %d %d\n",p[0],p[1],p[2]);free(p);return 0;}
```

**Output**

```text
0 0 0
```

---

## Q185. How would you explain calloc in a code review?

**Level:** Core / interview &nbsp;|&nbsp; **Topic:** Dynamic memory

**Answer.** State the relevant rule, then trace the example's inputs and outputs. calloc allocates an array and initializes its bytes to zero. It can help create zeroed storage, though zero bytes are not universally guaranteed to represent every possible pointer or floating value.

**Code** (`code_Q185.c`)

```c
#include <stdio.h>
#include <stdlib.h>
int main(void){int *p=calloc(3,sizeof *p);if(!p)return 1;printf("%d %d %d\n",p[0],p[1],p[2]);free(p);return 0;}
```

**Output**

```text
0 0 0
```

---

## Q186. What is realloc safely?

**Level:** Core / interview &nbsp;|&nbsp; **Topic:** Dynamic memory

**Answer.** Store realloc's result in a temporary pointer. On failure the original allocation remains valid; assigning directly to the sole pointer would lose it. Handle size zero explicitly for portability.

**Code** (`code_Q186.c`)

```c
#include <stdio.h>
#include <stdlib.h>
int main(void){int *p=malloc(2*sizeof *p);if(!p)return 1;p[0]=3;p[1]=4;int *tmp=realloc(p,4*sizeof *p);if(!tmp){free(p);return 1;}p=tmp;p[2]=5;p[3]=6;printf("sum=%d\n",p[0]+p[1]+p[2]+p[3]);free(p);return 0;}
```

**Output**

```text
sum=18
```

---

## Q187. How does realloc safely work in C?

**Level:** Core / interview &nbsp;|&nbsp; **Topic:** Dynamic memory

**Answer.** Store realloc's result in a temporary pointer. On failure the original allocation remains valid; assigning directly to the sole pointer would lose it. Handle size zero explicitly for portability. The example below demonstrates the rule with a small, deterministic program.

**Code** (`code_Q187.c`)

```c
#include <stdio.h>
#include <stdlib.h>
int main(void){int *p=malloc(2*sizeof *p);if(!p)return 1;p[0]=3;p[1]=4;int *tmp=realloc(p,4*sizeof *p);if(!tmp){free(p);return 1;}p=tmp;p[2]=5;p[3]=6;printf("sum=%d\n",p[0]+p[1]+p[2]+p[3]);free(p);return 0;}
```

**Output**

```text
sum=18
```

---

## Q188. When would you use realloc safely?

**Level:** Core / interview &nbsp;|&nbsp; **Topic:** Dynamic memory

**Answer.** Store realloc's result in a temporary pointer. On failure the original allocation remains valid; assigning directly to the sole pointer would lose it. Handle size zero explicitly for portability.

**Code** (`code_Q188.c`)

```c
#include <stdio.h>
#include <stdlib.h>
int main(void){int *p=malloc(2*sizeof *p);if(!p)return 1;p[0]=3;p[1]=4;int *tmp=realloc(p,4*sizeof *p);if(!tmp){free(p);return 1;}p=tmp;p[2]=5;p[3]=6;printf("sum=%d\n",p[0]+p[1]+p[2]+p[3]);free(p);return 0;}
```

**Output**

```text
sum=18
```

---

## Q189. What common bug or interview trap involves realloc safely?

**Level:** Core / interview &nbsp;|&nbsp; **Topic:** Dynamic memory

**Answer.** A common trap is overlooking the exact language rule and assuming behavior from one compiler. Store realloc's result in a temporary pointer. On failure the original allocation remains valid; assigning directly to the sole pointer would lose it. Handle size zero explicitly for portability.

**Code** (`code_Q189.c`)

```c
#include <stdio.h>
#include <stdlib.h>
int main(void){int *p=malloc(2*sizeof *p);if(!p)return 1;p[0]=3;p[1]=4;int *tmp=realloc(p,4*sizeof *p);if(!tmp){free(p);return 1;}p=tmp;p[2]=5;p[3]=6;printf("sum=%d\n",p[0]+p[1]+p[2]+p[3]);free(p);return 0;}
```

**Output**

```text
sum=18
```

---

## Q190. How would you explain realloc safely in a code review?

**Level:** Core / interview &nbsp;|&nbsp; **Topic:** Dynamic memory

**Answer.** State the relevant rule, then trace the example's inputs and outputs. Store realloc's result in a temporary pointer. On failure the original allocation remains valid; assigning directly to the sole pointer would lose it. Handle size zero explicitly for portability.

**Code** (`code_Q190.c`)

```c
#include <stdio.h>
#include <stdlib.h>
int main(void){int *p=malloc(2*sizeof *p);if(!p)return 1;p[0]=3;p[1]=4;int *tmp=realloc(p,4*sizeof *p);if(!tmp){free(p);return 1;}p=tmp;p[2]=5;p[3]=6;printf("sum=%d\n",p[0]+p[1]+p[2]+p[3]);free(p);return 0;}
```

**Output**

```text
sum=18
```

---

## Q191. What is memory leak?

**Level:** Core / interview &nbsp;|&nbsp; **Topic:** Dynamic memory

**Answer.** A memory leak occurs when allocated storage becomes unreachable without being freed. Give ownership clear rules, release resources on every exit path, and use leak checkers where available.

**Code** (`code_Q191.c`)

```c
#include <stdio.h>
#include <stdlib.h>
int main(void){int *p=malloc(sizeof *p);if(!p)return 1;*p=8;printf("value=%d\n",*p);free(p);return 0;}
```

**Output**

```text
value=8
```

---

## Q192. How does memory leak work in C?

**Level:** Core / interview &nbsp;|&nbsp; **Topic:** Dynamic memory

**Answer.** A memory leak occurs when allocated storage becomes unreachable without being freed. Give ownership clear rules, release resources on every exit path, and use leak checkers where available. The example below demonstrates the rule with a small, deterministic program.

**Code** (`code_Q192.c`)

```c
#include <stdio.h>
#include <stdlib.h>
int main(void){int *p=malloc(sizeof *p);if(!p)return 1;*p=8;printf("value=%d\n",*p);free(p);return 0;}
```

**Output**

```text
value=8
```

---

## Q193. When would you use memory leak?

**Level:** Core / interview &nbsp;|&nbsp; **Topic:** Dynamic memory

**Answer.** A memory leak occurs when allocated storage becomes unreachable without being freed. Give ownership clear rules, release resources on every exit path, and use leak checkers where available.

**Code** (`code_Q193.c`)

```c
#include <stdio.h>
#include <stdlib.h>
int main(void){int *p=malloc(sizeof *p);if(!p)return 1;*p=8;printf("value=%d\n",*p);free(p);return 0;}
```

**Output**

```text
value=8
```

---

## Q194. What common bug or interview trap involves memory leak?

**Level:** Core / interview &nbsp;|&nbsp; **Topic:** Dynamic memory

**Answer.** A common trap is overlooking the exact language rule and assuming behavior from one compiler. A memory leak occurs when allocated storage becomes unreachable without being freed. Give ownership clear rules, release resources on every exit path, and use leak checkers where available.

**Code** (`code_Q194.c`)

```c
#include <stdio.h>
#include <stdlib.h>
int main(void){int *p=malloc(sizeof *p);if(!p)return 1;*p=8;printf("value=%d\n",*p);free(p);return 0;}
```

**Output**

```text
value=8
```

---

## Q195. How would you explain memory leak in a code review?

**Level:** Core / interview &nbsp;|&nbsp; **Topic:** Dynamic memory

**Answer.** State the relevant rule, then trace the example's inputs and outputs. A memory leak occurs when allocated storage becomes unreachable without being freed. Give ownership clear rules, release resources on every exit path, and use leak checkers where available.

**Code** (`code_Q195.c`)

```c
#include <stdio.h>
#include <stdlib.h>
int main(void){int *p=malloc(sizeof *p);if(!p)return 1;*p=8;printf("value=%d\n",*p);free(p);return 0;}
```

**Output**

```text
value=8
```

---

## Q196. What is use after free?

**Level:** Core / interview &nbsp;|&nbsp; **Topic:** Dynamic memory

**Answer.** Using a pointer after free is undefined behavior. Set an owning pointer to NULL after freeing when that helps avoid accidental reuse; this does not fix aliases to the same allocation.

**Code** (`code_Q196.c`)

```c
#include <stdio.h>
#include <stdlib.h>
int main(void){int *p=malloc(sizeof *p);if(!p)return 1;*p=9;printf("before free=%d\n",*p);free(p);p=NULL;printf("cleared=%s\n",p==NULL?"yes":"no");return 0;}
```

**Output**

```text
before free=9
cleared=yes
```

---

## Q197. How does use after free work in C?

**Level:** Core / interview &nbsp;|&nbsp; **Topic:** Dynamic memory

**Answer.** Using a pointer after free is undefined behavior. Set an owning pointer to NULL after freeing when that helps avoid accidental reuse; this does not fix aliases to the same allocation. The example below demonstrates the rule with a small, deterministic program.

**Code** (`code_Q197.c`)

```c
#include <stdio.h>
#include <stdlib.h>
int main(void){int *p=malloc(sizeof *p);if(!p)return 1;*p=9;printf("before free=%d\n",*p);free(p);p=NULL;printf("cleared=%s\n",p==NULL?"yes":"no");return 0;}
```

**Output**

```text
before free=9
cleared=yes
```

---

## Q198. When would you use use after free?

**Level:** Core / interview &nbsp;|&nbsp; **Topic:** Dynamic memory

**Answer.** Using a pointer after free is undefined behavior. Set an owning pointer to NULL after freeing when that helps avoid accidental reuse; this does not fix aliases to the same allocation.

**Code** (`code_Q198.c`)

```c
#include <stdio.h>
#include <stdlib.h>
int main(void){int *p=malloc(sizeof *p);if(!p)return 1;*p=9;printf("before free=%d\n",*p);free(p);p=NULL;printf("cleared=%s\n",p==NULL?"yes":"no");return 0;}
```

**Output**

```text
before free=9
cleared=yes
```

---

## Q199. What common bug or interview trap involves use after free?

**Level:** Core / interview &nbsp;|&nbsp; **Topic:** Dynamic memory

**Answer.** A common trap is overlooking the exact language rule and assuming behavior from one compiler. Using a pointer after free is undefined behavior. Set an owning pointer to NULL after freeing when that helps avoid accidental reuse; this does not fix aliases to the same allocation.

**Code** (`code_Q199.c`)

```c
#include <stdio.h>
#include <stdlib.h>
int main(void){int *p=malloc(sizeof *p);if(!p)return 1;*p=9;printf("before free=%d\n",*p);free(p);p=NULL;printf("cleared=%s\n",p==NULL?"yes":"no");return 0;}
```

**Output**

```text
before free=9
cleared=yes
```

---

## Q200. How would you explain use after free in a code review?

**Level:** Core / interview &nbsp;|&nbsp; **Topic:** Dynamic memory

**Answer.** State the relevant rule, then trace the example's inputs and outputs. Using a pointer after free is undefined behavior. Set an owning pointer to NULL after freeing when that helps avoid accidental reuse; this does not fix aliases to the same allocation.

**Code** (`code_Q200.c`)

```c
#include <stdio.h>
#include <stdlib.h>
int main(void){int *p=malloc(sizeof *p);if(!p)return 1;*p=9;printf("before free=%d\n",*p);free(p);p=NULL;printf("cleared=%s\n",p==NULL?"yes":"no");return 0;}
```

**Output**

```text
before free=9
cleared=yes
```

---

## Q201. What is fopen and fclose?

**Level:** Core / interview &nbsp;|&nbsp; **Topic:** Files and preprocessor

**Answer.** fopen returns NULL on failure and sets errno. Check it before using the stream, check writes and close errors, and close each successfully opened stream.

**Code** (`code_Q201.c`)

```c
#include <stdio.h>
int main(void){FILE *f=fopen("interview-demo.txt","w");if(!f){perror("fopen");return 1;}fputs("saved\n",f);if(fclose(f)!=0){perror("fclose");return 1;}puts("file written");return 0;}
```

**Output**

```text
file written
```

---

## Q202. How does fopen and fclose work in C?

**Level:** Core / interview &nbsp;|&nbsp; **Topic:** Files and preprocessor

**Answer.** fopen returns NULL on failure and sets errno. Check it before using the stream, check writes and close errors, and close each successfully opened stream. The example below demonstrates the rule with a small, deterministic program.

**Code** (`code_Q202.c`)

```c
#include <stdio.h>
int main(void){FILE *f=fopen("interview-demo.txt","w");if(!f){perror("fopen");return 1;}fputs("saved\n",f);if(fclose(f)!=0){perror("fclose");return 1;}puts("file written");return 0;}
```

**Output**

```text
file written
```

---

## Q203. When would you use fopen and fclose?

**Level:** Core / interview &nbsp;|&nbsp; **Topic:** Files and preprocessor

**Answer.** fopen returns NULL on failure and sets errno. Check it before using the stream, check writes and close errors, and close each successfully opened stream.

**Code** (`code_Q203.c`)

```c
#include <stdio.h>
int main(void){FILE *f=fopen("interview-demo.txt","w");if(!f){perror("fopen");return 1;}fputs("saved\n",f);if(fclose(f)!=0){perror("fclose");return 1;}puts("file written");return 0;}
```

**Output**

```text
file written
```

---

## Q204. What common bug or interview trap involves fopen and fclose?

**Level:** Core / interview &nbsp;|&nbsp; **Topic:** Files and preprocessor

**Answer.** A common trap is overlooking the exact language rule and assuming behavior from one compiler. fopen returns NULL on failure and sets errno. Check it before using the stream, check writes and close errors, and close each successfully opened stream.

**Code** (`code_Q204.c`)

```c
#include <stdio.h>
int main(void){FILE *f=fopen("interview-demo.txt","w");if(!f){perror("fopen");return 1;}fputs("saved\n",f);if(fclose(f)!=0){perror("fclose");return 1;}puts("file written");return 0;}
```

**Output**

```text
file written
```

---

## Q205. How would you explain fopen and fclose in a code review?

**Level:** Core / interview &nbsp;|&nbsp; **Topic:** Files and preprocessor

**Answer.** State the relevant rule, then trace the example's inputs and outputs. fopen returns NULL on failure and sets errno. Check it before using the stream, check writes and close errors, and close each successfully opened stream.

**Code** (`code_Q205.c`)

```c
#include <stdio.h>
int main(void){FILE *f=fopen("interview-demo.txt","w");if(!f){perror("fopen");return 1;}fputs("saved\n",f);if(fclose(f)!=0){perror("fclose");return 1;}puts("file written");return 0;}
```

**Output**

```text
file written
```

---

## Q206. What is text vs binary modes?

**Level:** Core / interview &nbsp;|&nbsp; **Topic:** Files and preprocessor

**Answer.** Text mode may translate line endings on some systems; binary mode requests byte-preserving I/O. For portable data exchange, define byte order, widths, and encoding rather than dumping a struct.

**Code** (`code_Q206.c`)

```c
#include <stdio.h>
int main(void){FILE *f=fopen("bytes.bin","wb");if(!f)return 1;unsigned char b[]={0x41,0x42,0x43};size_t n=fwrite(b,1,sizeof b,f);fclose(f);printf("wrote %zu bytes\n",n);return n==sizeof b?0:1;}
```

**Output**

```text
wrote 3 bytes
```

---

## Q207. How does text vs binary modes work in C?

**Level:** Core / interview &nbsp;|&nbsp; **Topic:** Files and preprocessor

**Answer.** Text mode may translate line endings on some systems; binary mode requests byte-preserving I/O. For portable data exchange, define byte order, widths, and encoding rather than dumping a struct. The example below demonstrates the rule with a small, deterministic program.

**Code** (`code_Q207.c`)

```c
#include <stdio.h>
int main(void){FILE *f=fopen("bytes.bin","wb");if(!f)return 1;unsigned char b[]={0x41,0x42,0x43};size_t n=fwrite(b,1,sizeof b,f);fclose(f);printf("wrote %zu bytes\n",n);return n==sizeof b?0:1;}
```

**Output**

```text
wrote 3 bytes
```

---

## Q208. When would you use text vs binary modes?

**Level:** Core / interview &nbsp;|&nbsp; **Topic:** Files and preprocessor

**Answer.** Text mode may translate line endings on some systems; binary mode requests byte-preserving I/O. For portable data exchange, define byte order, widths, and encoding rather than dumping a struct.

**Code** (`code_Q208.c`)

```c
#include <stdio.h>
int main(void){FILE *f=fopen("bytes.bin","wb");if(!f)return 1;unsigned char b[]={0x41,0x42,0x43};size_t n=fwrite(b,1,sizeof b,f);fclose(f);printf("wrote %zu bytes\n",n);return n==sizeof b?0:1;}
```

**Output**

```text
wrote 3 bytes
```

---

## Q209. What common bug or interview trap involves text vs binary modes?

**Level:** Core / interview &nbsp;|&nbsp; **Topic:** Files and preprocessor

**Answer.** A common trap is overlooking the exact language rule and assuming behavior from one compiler. Text mode may translate line endings on some systems; binary mode requests byte-preserving I/O. For portable data exchange, define byte order, widths, and encoding rather than dumping a struct.

**Code** (`code_Q209.c`)

```c
#include <stdio.h>
int main(void){FILE *f=fopen("bytes.bin","wb");if(!f)return 1;unsigned char b[]={0x41,0x42,0x43};size_t n=fwrite(b,1,sizeof b,f);fclose(f);printf("wrote %zu bytes\n",n);return n==sizeof b?0:1;}
```

**Output**

```text
wrote 3 bytes
```

---

## Q210. How would you explain text vs binary modes in a code review?

**Level:** Core / interview &nbsp;|&nbsp; **Topic:** Files and preprocessor

**Answer.** State the relevant rule, then trace the example's inputs and outputs. Text mode may translate line endings on some systems; binary mode requests byte-preserving I/O. For portable data exchange, define byte order, widths, and encoding rather than dumping a struct.

**Code** (`code_Q210.c`)

```c
#include <stdio.h>
int main(void){FILE *f=fopen("bytes.bin","wb");if(!f)return 1;unsigned char b[]={0x41,0x42,0x43};size_t n=fwrite(b,1,sizeof b,f);fclose(f);printf("wrote %zu bytes\n",n);return n==sizeof b?0:1;}
```

**Output**

```text
wrote 3 bytes
```

---

## Q211. What is fgets and EOF?

**Level:** Core / interview &nbsp;|&nbsp; **Topic:** Files and preprocessor

**Answer.** fgets returns NULL at end-of-file or on error. Use feof/ferror to distinguish after a failed read; do not loop on `while (!feof(file))` because EOF is set only after a read fails.

**Code** (`code_Q211.c`)

```c
#include <stdio.h>
int main(void){FILE *f=tmpfile();if(!f)return 1;fputs("one\ntwo\n",f);rewind(f);char b[16];while(fgets(b,sizeof b,f))printf("%s",b);printf("eof=%d error=%d\n",feof(f)!=0,ferror(f)!=0);fclose(f);return 0;}
```

**Output**

```text
one
two
eof=1 error=0
```

---

## Q212. How does fgets and EOF work in C?

**Level:** Core / interview &nbsp;|&nbsp; **Topic:** Files and preprocessor

**Answer.** fgets returns NULL at end-of-file or on error. Use feof/ferror to distinguish after a failed read; do not loop on `while (!feof(file))` because EOF is set only after a read fails. The example below demonstrates the rule with a small, deterministic program.

**Code** (`code_Q212.c`)

```c
#include <stdio.h>
int main(void){FILE *f=tmpfile();if(!f)return 1;fputs("one\ntwo\n",f);rewind(f);char b[16];while(fgets(b,sizeof b,f))printf("%s",b);printf("eof=%d error=%d\n",feof(f)!=0,ferror(f)!=0);fclose(f);return 0;}
```

**Output**

```text
one
two
eof=1 error=0
```

---

## Q213. When would you use fgets and EOF?

**Level:** Core / interview &nbsp;|&nbsp; **Topic:** Files and preprocessor

**Answer.** fgets returns NULL at end-of-file or on error. Use feof/ferror to distinguish after a failed read; do not loop on `while (!feof(file))` because EOF is set only after a read fails.

**Code** (`code_Q213.c`)

```c
#include <stdio.h>
int main(void){FILE *f=tmpfile();if(!f)return 1;fputs("one\ntwo\n",f);rewind(f);char b[16];while(fgets(b,sizeof b,f))printf("%s",b);printf("eof=%d error=%d\n",feof(f)!=0,ferror(f)!=0);fclose(f);return 0;}
```

**Output**

```text
one
two
eof=1 error=0
```

---

## Q214. What common bug or interview trap involves fgets and EOF?

**Level:** Core / interview &nbsp;|&nbsp; **Topic:** Files and preprocessor

**Answer.** A common trap is overlooking the exact language rule and assuming behavior from one compiler. fgets returns NULL at end-of-file or on error. Use feof/ferror to distinguish after a failed read; do not loop on `while (!feof(file))` because EOF is set only after a read fails.

**Code** (`code_Q214.c`)

```c
#include <stdio.h>
int main(void){FILE *f=tmpfile();if(!f)return 1;fputs("one\ntwo\n",f);rewind(f);char b[16];while(fgets(b,sizeof b,f))printf("%s",b);printf("eof=%d error=%d\n",feof(f)!=0,ferror(f)!=0);fclose(f);return 0;}
```

**Output**

```text
one
two
eof=1 error=0
```

---

## Q215. How would you explain fgets and EOF in a code review?

**Level:** Core / interview &nbsp;|&nbsp; **Topic:** Files and preprocessor

**Answer.** State the relevant rule, then trace the example's inputs and outputs. fgets returns NULL at end-of-file or on error. Use feof/ferror to distinguish after a failed read; do not loop on `while (!feof(file))` because EOF is set only after a read fails.

**Code** (`code_Q215.c`)

```c
#include <stdio.h>
int main(void){FILE *f=tmpfile();if(!f)return 1;fputs("one\ntwo\n",f);rewind(f);char b[16];while(fgets(b,sizeof b,f))printf("%s",b);printf("eof=%d error=%d\n",feof(f)!=0,ferror(f)!=0);fclose(f);return 0;}
```

**Output**

```text
one
two
eof=1 error=0
```

---

## Q216. What is include guards?

**Level:** Core / interview &nbsp;|&nbsp; **Topic:** Files and preprocessor

**Answer.** An include guard prevents a header from being processed more than once in one translation unit. A unique macro name avoids collisions. `#pragma once` is widely supported but not ISO C.

**Code** (`code_Q216.c`)

```c
#include <stdio.h>
#ifndef APP_VERSION
#define APP_VERSION 3
#endif
int main(void){printf("version=%d\n",APP_VERSION);return 0;}
```

**Output**

```text
version=3
```

---

## Q217. How does include guards work in C?

**Level:** Core / interview &nbsp;|&nbsp; **Topic:** Files and preprocessor

**Answer.** An include guard prevents a header from being processed more than once in one translation unit. A unique macro name avoids collisions. `#pragma once` is widely supported but not ISO C. The example below demonstrates the rule with a small, deterministic program.

**Code** (`code_Q217.c`)

```c
#include <stdio.h>
#ifndef APP_VERSION
#define APP_VERSION 3
#endif
int main(void){printf("version=%d\n",APP_VERSION);return 0;}
```

**Output**

```text
version=3
```

---

## Q218. When would you use include guards?

**Level:** Core / interview &nbsp;|&nbsp; **Topic:** Files and preprocessor

**Answer.** An include guard prevents a header from being processed more than once in one translation unit. A unique macro name avoids collisions. `#pragma once` is widely supported but not ISO C.

**Code** (`code_Q218.c`)

```c
#include <stdio.h>
#ifndef APP_VERSION
#define APP_VERSION 3
#endif
int main(void){printf("version=%d\n",APP_VERSION);return 0;}
```

**Output**

```text
version=3
```

---

## Q219. What common bug or interview trap involves include guards?

**Level:** Core / interview &nbsp;|&nbsp; **Topic:** Files and preprocessor

**Answer.** A common trap is overlooking the exact language rule and assuming behavior from one compiler. An include guard prevents a header from being processed more than once in one translation unit. A unique macro name avoids collisions. `#pragma once` is widely supported but not ISO C.

**Code** (`code_Q219.c`)

```c
#include <stdio.h>
#ifndef APP_VERSION
#define APP_VERSION 3
#endif
int main(void){printf("version=%d\n",APP_VERSION);return 0;}
```

**Output**

```text
version=3
```

---

## Q220. How would you explain include guards in a code review?

**Level:** Core / interview &nbsp;|&nbsp; **Topic:** Files and preprocessor

**Answer.** State the relevant rule, then trace the example's inputs and outputs. An include guard prevents a header from being processed more than once in one translation unit. A unique macro name avoids collisions. `#pragma once` is widely supported but not ISO C.

**Code** (`code_Q220.c`)

```c
#include <stdio.h>
#ifndef APP_VERSION
#define APP_VERSION 3
#endif
int main(void){printf("version=%d\n",APP_VERSION);return 0;}
```

**Output**

```text
version=3
```

---

## Q221. What is macro pitfalls?

**Level:** Core / interview &nbsp;|&nbsp; **Topic:** Files and preprocessor

**Answer.** Macros perform textual substitution and can evaluate arguments more than once. Parenthesize both parameters and the full replacement; prefer inline functions for type-checked behavior.

**Code** (`code_Q221.c`)

```c
#include <stdio.h>
#define SQUARE(x) ((x)*(x))
int main(void){printf("square=%d\n",SQUARE(1+2));return 0;}
```

**Output**

```text
square=9
```

---

## Q222. How does macro pitfalls work in C?

**Level:** Core / interview &nbsp;|&nbsp; **Topic:** Files and preprocessor

**Answer.** Macros perform textual substitution and can evaluate arguments more than once. Parenthesize both parameters and the full replacement; prefer inline functions for type-checked behavior. The example below demonstrates the rule with a small, deterministic program.

**Code** (`code_Q222.c`)

```c
#include <stdio.h>
#define SQUARE(x) ((x)*(x))
int main(void){printf("square=%d\n",SQUARE(1+2));return 0;}
```

**Output**

```text
square=9
```

---

## Q223. When would you use macro pitfalls?

**Level:** Core / interview &nbsp;|&nbsp; **Topic:** Files and preprocessor

**Answer.** Macros perform textual substitution and can evaluate arguments more than once. Parenthesize both parameters and the full replacement; prefer inline functions for type-checked behavior.

**Code** (`code_Q223.c`)

```c
#include <stdio.h>
#define SQUARE(x) ((x)*(x))
int main(void){printf("square=%d\n",SQUARE(1+2));return 0;}
```

**Output**

```text
square=9
```

---

## Q224. What common bug or interview trap involves macro pitfalls?

**Level:** Core / interview &nbsp;|&nbsp; **Topic:** Files and preprocessor

**Answer.** A common trap is overlooking the exact language rule and assuming behavior from one compiler. Macros perform textual substitution and can evaluate arguments more than once. Parenthesize both parameters and the full replacement; prefer inline functions for type-checked behavior.

**Code** (`code_Q224.c`)

```c
#include <stdio.h>
#define SQUARE(x) ((x)*(x))
int main(void){printf("square=%d\n",SQUARE(1+2));return 0;}
```

**Output**

```text
square=9
```

---

## Q225. How would you explain macro pitfalls in a code review?

**Level:** Core / interview &nbsp;|&nbsp; **Topic:** Files and preprocessor

**Answer.** State the relevant rule, then trace the example's inputs and outputs. Macros perform textual substitution and can evaluate arguments more than once. Parenthesize both parameters and the full replacement; prefer inline functions for type-checked behavior.

**Code** (`code_Q225.c`)

```c
#include <stdio.h>
#define SQUARE(x) ((x)*(x))
int main(void){printf("square=%d\n",SQUARE(1+2));return 0;}
```

**Output**

```text
square=9
```

---

## Q226. What is linear vs binary search?

**Level:** Core / interview &nbsp;|&nbsp; **Topic:** Algorithms and systems

**Answer.** Linear search works on any sequence in O(n). Binary search requires sorted data and takes O(log n); bugs commonly arise from incorrect midpoint and inclusive/exclusive boundaries.

**Code** (`code_Q226.c`)

```c
#include <stdio.h>
int main(void){int a[]={1,3,5,7,9},lo=0,hi=4,target=7,found=-1;while(lo<=hi){int mid=lo+(hi-lo)/2;if(a[mid]==target){found=mid;break;}if(a[mid]<target)lo=mid+1;else hi=mid-1;}printf("index=%d\n",found);return 0;}
```

**Output**

```text
index=3
```

---

## Q227. How does linear vs binary search work in C?

**Level:** Core / interview &nbsp;|&nbsp; **Topic:** Algorithms and systems

**Answer.** Linear search works on any sequence in O(n). Binary search requires sorted data and takes O(log n); bugs commonly arise from incorrect midpoint and inclusive/exclusive boundaries. The example below demonstrates the rule with a small, deterministic program.

**Code** (`code_Q227.c`)

```c
#include <stdio.h>
int main(void){int a[]={1,3,5,7,9},lo=0,hi=4,target=7,found=-1;while(lo<=hi){int mid=lo+(hi-lo)/2;if(a[mid]==target){found=mid;break;}if(a[mid]<target)lo=mid+1;else hi=mid-1;}printf("index=%d\n",found);return 0;}
```

**Output**

```text
index=3
```

---

## Q228. When would you use linear vs binary search?

**Level:** Core / interview &nbsp;|&nbsp; **Topic:** Algorithms and systems

**Answer.** Linear search works on any sequence in O(n). Binary search requires sorted data and takes O(log n); bugs commonly arise from incorrect midpoint and inclusive/exclusive boundaries.

**Code** (`code_Q228.c`)

```c
#include <stdio.h>
int main(void){int a[]={1,3,5,7,9},lo=0,hi=4,target=7,found=-1;while(lo<=hi){int mid=lo+(hi-lo)/2;if(a[mid]==target){found=mid;break;}if(a[mid]<target)lo=mid+1;else hi=mid-1;}printf("index=%d\n",found);return 0;}
```

**Output**

```text
index=3
```

---

## Q229. What common bug or interview trap involves linear vs binary search?

**Level:** Core / interview &nbsp;|&nbsp; **Topic:** Algorithms and systems

**Answer.** A common trap is overlooking the exact language rule and assuming behavior from one compiler. Linear search works on any sequence in O(n). Binary search requires sorted data and takes O(log n); bugs commonly arise from incorrect midpoint and inclusive/exclusive boundaries.

**Code** (`code_Q229.c`)

```c
#include <stdio.h>
int main(void){int a[]={1,3,5,7,9},lo=0,hi=4,target=7,found=-1;while(lo<=hi){int mid=lo+(hi-lo)/2;if(a[mid]==target){found=mid;break;}if(a[mid]<target)lo=mid+1;else hi=mid-1;}printf("index=%d\n",found);return 0;}
```

**Output**

```text
index=3
```

---

## Q230. How would you explain linear vs binary search in a code review?

**Level:** Core / interview &nbsp;|&nbsp; **Topic:** Algorithms and systems

**Answer.** State the relevant rule, then trace the example's inputs and outputs. Linear search works on any sequence in O(n). Binary search requires sorted data and takes O(log n); bugs commonly arise from incorrect midpoint and inclusive/exclusive boundaries.

**Code** (`code_Q230.c`)

```c
#include <stdio.h>
int main(void){int a[]={1,3,5,7,9},lo=0,hi=4,target=7,found=-1;while(lo<=hi){int mid=lo+(hi-lo)/2;if(a[mid]==target){found=mid;break;}if(a[mid]<target)lo=mid+1;else hi=mid-1;}printf("index=%d\n",found);return 0;}
```

**Output**

```text
index=3
```

---

## Q231. What is bubble sort and complexity?

**Level:** Core / interview &nbsp;|&nbsp; **Topic:** Algorithms and systems

**Answer.** Bubble sort is simple but O(n^2) average/worst time and O(1) extra space. It is useful pedagogically, not for large production datasets; choose an algorithm based on constraints.

**Code** (`code_Q231.c`)

```c
#include <stdio.h>
int main(void){int a[]={4,1,3,2},n=4;for(int i=0;i<n-1;i++)for(int j=0;j<n-1-i;j++)if(a[j]>a[j+1]){int t=a[j];a[j]=a[j+1];a[j+1]=t;}for(int i=0;i<n;i++)printf("%d ",a[i]);putchar('\n');return 0;}
```

**Output**

```text
1 2 3 4 
```

---

## Q232. How does bubble sort and complexity work in C?

**Level:** Core / interview &nbsp;|&nbsp; **Topic:** Algorithms and systems

**Answer.** Bubble sort is simple but O(n^2) average/worst time and O(1) extra space. It is useful pedagogically, not for large production datasets; choose an algorithm based on constraints. The example below demonstrates the rule with a small, deterministic program.

**Code** (`code_Q232.c`)

```c
#include <stdio.h>
int main(void){int a[]={4,1,3,2},n=4;for(int i=0;i<n-1;i++)for(int j=0;j<n-1-i;j++)if(a[j]>a[j+1]){int t=a[j];a[j]=a[j+1];a[j+1]=t;}for(int i=0;i<n;i++)printf("%d ",a[i]);putchar('\n');return 0;}
```

**Output**

```text
1 2 3 4 
```

---

## Q233. When would you use bubble sort and complexity?

**Level:** Core / interview &nbsp;|&nbsp; **Topic:** Algorithms and systems

**Answer.** Bubble sort is simple but O(n^2) average/worst time and O(1) extra space. It is useful pedagogically, not for large production datasets; choose an algorithm based on constraints.

**Code** (`code_Q233.c`)

```c
#include <stdio.h>
int main(void){int a[]={4,1,3,2},n=4;for(int i=0;i<n-1;i++)for(int j=0;j<n-1-i;j++)if(a[j]>a[j+1]){int t=a[j];a[j]=a[j+1];a[j+1]=t;}for(int i=0;i<n;i++)printf("%d ",a[i]);putchar('\n');return 0;}
```

**Output**

```text
1 2 3 4 
```

---

## Q234. What common bug or interview trap involves bubble sort and complexity?

**Level:** Core / interview &nbsp;|&nbsp; **Topic:** Algorithms and systems

**Answer.** A common trap is overlooking the exact language rule and assuming behavior from one compiler. Bubble sort is simple but O(n^2) average/worst time and O(1) extra space. It is useful pedagogically, not for large production datasets; choose an algorithm based on constraints.

**Code** (`code_Q234.c`)

```c
#include <stdio.h>
int main(void){int a[]={4,1,3,2},n=4;for(int i=0;i<n-1;i++)for(int j=0;j<n-1-i;j++)if(a[j]>a[j+1]){int t=a[j];a[j]=a[j+1];a[j+1]=t;}for(int i=0;i<n;i++)printf("%d ",a[i]);putchar('\n');return 0;}
```

**Output**

```text
1 2 3 4 
```

---

## Q235. How would you explain bubble sort and complexity in a code review?

**Level:** Core / interview &nbsp;|&nbsp; **Topic:** Algorithms and systems

**Answer.** State the relevant rule, then trace the example's inputs and outputs. Bubble sort is simple but O(n^2) average/worst time and O(1) extra space. It is useful pedagogically, not for large production datasets; choose an algorithm based on constraints.

**Code** (`code_Q235.c`)

```c
#include <stdio.h>
int main(void){int a[]={4,1,3,2},n=4;for(int i=0;i<n-1;i++)for(int j=0;j<n-1-i;j++)if(a[j]>a[j+1]){int t=a[j];a[j]=a[j+1];a[j+1]=t;}for(int i=0;i<n;i++)printf("%d ",a[i]);putchar('\n');return 0;}
```

**Output**

```text
1 2 3 4 
```

---

## Q236. What is linked list vs array?

**Level:** Core / interview &nbsp;|&nbsp; **Topic:** Algorithms and systems

**Answer.** Arrays provide O(1) indexing and good cache locality; linked lists provide O(1) insertion after a known node but require pointer traversal and per-node allocation. Choose based on access and update patterns.

**Code** (`code_Q236.c`)

```c
#include <stdio.h>
struct Node{int v;struct Node *next;};
int main(void){struct Node c={3,NULL},b={2,&c},a={1,&b};for(struct Node *p=&a;p;p=p->next)printf("%d ",p->v);putchar('\n');return 0;}
```

**Output**

```text
1 2 3 
```

---

## Q237. How does linked list vs array work in C?

**Level:** Core / interview &nbsp;|&nbsp; **Topic:** Algorithms and systems

**Answer.** Arrays provide O(1) indexing and good cache locality; linked lists provide O(1) insertion after a known node but require pointer traversal and per-node allocation. Choose based on access and update patterns. The example below demonstrates the rule with a small, deterministic program.

**Code** (`code_Q237.c`)

```c
#include <stdio.h>
struct Node{int v;struct Node *next;};
int main(void){struct Node c={3,NULL},b={2,&c},a={1,&b};for(struct Node *p=&a;p;p=p->next)printf("%d ",p->v);putchar('\n');return 0;}
```

**Output**

```text
1 2 3 
```

---

## Q238. When would you use linked list vs array?

**Level:** Core / interview &nbsp;|&nbsp; **Topic:** Algorithms and systems

**Answer.** Arrays provide O(1) indexing and good cache locality; linked lists provide O(1) insertion after a known node but require pointer traversal and per-node allocation. Choose based on access and update patterns.

**Code** (`code_Q238.c`)

```c
#include <stdio.h>
struct Node{int v;struct Node *next;};
int main(void){struct Node c={3,NULL},b={2,&c},a={1,&b};for(struct Node *p=&a;p;p=p->next)printf("%d ",p->v);putchar('\n');return 0;}
```

**Output**

```text
1 2 3 
```

---

## Q239. What common bug or interview trap involves linked list vs array?

**Level:** Core / interview &nbsp;|&nbsp; **Topic:** Algorithms and systems

**Answer.** A common trap is overlooking the exact language rule and assuming behavior from one compiler. Arrays provide O(1) indexing and good cache locality; linked lists provide O(1) insertion after a known node but require pointer traversal and per-node allocation. Choose based on access and update patterns.

**Code** (`code_Q239.c`)

```c
#include <stdio.h>
struct Node{int v;struct Node *next;};
int main(void){struct Node c={3,NULL},b={2,&c},a={1,&b};for(struct Node *p=&a;p;p=p->next)printf("%d ",p->v);putchar('\n');return 0;}
```

**Output**

```text
1 2 3 
```

---

## Q240. How would you explain linked list vs array in a code review?

**Level:** Core / interview &nbsp;|&nbsp; **Topic:** Algorithms and systems

**Answer.** State the relevant rule, then trace the example's inputs and outputs. Arrays provide O(1) indexing and good cache locality; linked lists provide O(1) insertion after a known node but require pointer traversal and per-node allocation. Choose based on access and update patterns.

**Code** (`code_Q240.c`)

```c
#include <stdio.h>
struct Node{int v;struct Node *next;};
int main(void){struct Node c={3,NULL},b={2,&c},a={1,&b};for(struct Node *p=&a;p;p=p->next)printf("%d ",p->v);putchar('\n');return 0;}
```

**Output**

```text
1 2 3 
```

---

## Q241. What is bit masks?

**Level:** Core / interview &nbsp;|&nbsp; **Topic:** Algorithms and systems

**Answer.** Bit masks compactly represent independent flags. Use unsigned integer types and constants such as `UINT32_C(1) << bit`; ensure the shift count is less than the bit width.

**Code** (`code_Q241.c`)

```c
#include <stdio.h>
#include <stdint.h>
int main(void){uint32_t flags=0;const uint32_t READ=UINT32_C(1)<<0;flags|=READ;printf("read=%d flags=%u\n",(flags&READ)!=0,flags);return 0;}
```

**Output**

```text
read=1 flags=1
```

---

## Q242. How does bit masks work in C?

**Level:** Core / interview &nbsp;|&nbsp; **Topic:** Algorithms and systems

**Answer.** Bit masks compactly represent independent flags. Use unsigned integer types and constants such as `UINT32_C(1) << bit`; ensure the shift count is less than the bit width. The example below demonstrates the rule with a small, deterministic program.

**Code** (`code_Q242.c`)

```c
#include <stdio.h>
#include <stdint.h>
int main(void){uint32_t flags=0;const uint32_t READ=UINT32_C(1)<<0;flags|=READ;printf("read=%d flags=%u\n",(flags&READ)!=0,flags);return 0;}
```

**Output**

```text
read=1 flags=1
```

---

## Q243. When would you use bit masks?

**Level:** Core / interview &nbsp;|&nbsp; **Topic:** Algorithms and systems

**Answer.** Bit masks compactly represent independent flags. Use unsigned integer types and constants such as `UINT32_C(1) << bit`; ensure the shift count is less than the bit width.

**Code** (`code_Q243.c`)

```c
#include <stdio.h>
#include <stdint.h>
int main(void){uint32_t flags=0;const uint32_t READ=UINT32_C(1)<<0;flags|=READ;printf("read=%d flags=%u\n",(flags&READ)!=0,flags);return 0;}
```

**Output**

```text
read=1 flags=1
```

---

## Q244. What common bug or interview trap involves bit masks?

**Level:** Core / interview &nbsp;|&nbsp; **Topic:** Algorithms and systems

**Answer.** A common trap is overlooking the exact language rule and assuming behavior from one compiler. Bit masks compactly represent independent flags. Use unsigned integer types and constants such as `UINT32_C(1) << bit`; ensure the shift count is less than the bit width.

**Code** (`code_Q244.c`)

```c
#include <stdio.h>
#include <stdint.h>
int main(void){uint32_t flags=0;const uint32_t READ=UINT32_C(1)<<0;flags|=READ;printf("read=%d flags=%u\n",(flags&READ)!=0,flags);return 0;}
```

**Output**

```text
read=1 flags=1
```

---

## Q245. How would you explain bit masks in a code review?

**Level:** Core / interview &nbsp;|&nbsp; **Topic:** Algorithms and systems

**Answer.** State the relevant rule, then trace the example's inputs and outputs. Bit masks compactly represent independent flags. Use unsigned integer types and constants such as `UINT32_C(1) << bit`; ensure the shift count is less than the bit width.

**Code** (`code_Q245.c`)

```c
#include <stdio.h>
#include <stdint.h>
int main(void){uint32_t flags=0;const uint32_t READ=UINT32_C(1)<<0;flags|=READ;printf("read=%d flags=%u\n",(flags&READ)!=0,flags);return 0;}
```

**Output**

```text
read=1 flags=1
```

---

## Q246. What is volatile?

**Level:** Core / interview &nbsp;|&nbsp; **Topic:** Algorithms and systems

**Answer.** volatile tells the compiler that accesses are observable and should not be elided as ordinary memory accesses. It is not a thread-synchronization primitive; use atomics or locks for concurrency.

**Code** (`code_Q246.c`)

```c
#include <stdio.h>
int main(void){volatile int device_status=1;printf("status=%d\n",device_status);return 0;}
```

**Output**

```text
status=1
```

---

## Q247. How does volatile work in C?

**Level:** Core / interview &nbsp;|&nbsp; **Topic:** Algorithms and systems

**Answer.** volatile tells the compiler that accesses are observable and should not be elided as ordinary memory accesses. It is not a thread-synchronization primitive; use atomics or locks for concurrency. The example below demonstrates the rule with a small, deterministic program.

**Code** (`code_Q247.c`)

```c
#include <stdio.h>
int main(void){volatile int device_status=1;printf("status=%d\n",device_status);return 0;}
```

**Output**

```text
status=1
```

---

## Q248. When would you use volatile?

**Level:** Core / interview &nbsp;|&nbsp; **Topic:** Algorithms and systems

**Answer.** volatile tells the compiler that accesses are observable and should not be elided as ordinary memory accesses. It is not a thread-synchronization primitive; use atomics or locks for concurrency.

**Code** (`code_Q248.c`)

```c
#include <stdio.h>
int main(void){volatile int device_status=1;printf("status=%d\n",device_status);return 0;}
```

**Output**

```text
status=1
```

---

## Q249. What common bug or interview trap involves volatile?

**Level:** Core / interview &nbsp;|&nbsp; **Topic:** Algorithms and systems

**Answer.** A common trap is overlooking the exact language rule and assuming behavior from one compiler. volatile tells the compiler that accesses are observable and should not be elided as ordinary memory accesses. It is not a thread-synchronization primitive; use atomics or locks for concurrency.

**Code** (`code_Q249.c`)

```c
#include <stdio.h>
int main(void){volatile int device_status=1;printf("status=%d\n",device_status);return 0;}
```

**Output**

```text
status=1
```

---

## Q250. How would you explain volatile in a code review?

**Level:** Core / interview &nbsp;|&nbsp; **Topic:** Algorithms and systems

**Answer.** State the relevant rule, then trace the example's inputs and outputs. volatile tells the compiler that accesses are observable and should not be elided as ordinary memory accesses. It is not a thread-synchronization primitive; use atomics or locks for concurrency.

**Code** (`code_Q250.c`)

```c
#include <stdio.h>
int main(void){volatile int device_status=1;printf("status=%d\n",device_status);return 0;}
```

**Output**

```text
status=1
```
