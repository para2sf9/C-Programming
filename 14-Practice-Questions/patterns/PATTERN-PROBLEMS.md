# Pattern Printing — 20 Solved Problems

A progression of star, number, alphabet, hollow, centered, and grid patterns. Pattern printing trains nested-loop control and boundary reasoning.

## How to practice
Try solving each prompt first, without opening the solution. Use the fixed sample dimensions to verify formatting; then replace constants with validated user input. Compile with `gcc -std=c11 -Wall -Wextra -Wpedantic`.

---

## 1. Right triangle of stars

**Problem.** Print n rows, with row i containing i stars.

**Idea.** Use nested loops: an outer loop chooses the row; inner loops decide spaces and visible characters.

**Solution source:** `code/patterns_01.c`

```c
#include <stdio.h>
int main(void){int n=5;for(int i=1;i<=n;i++){for(int j=1;j<=i;j++)putchar('*');putchar('\n');}return 0;}
```

**Output**

```text
*
**
***
****
*****
```

---

## 2. Inverted right triangle

**Problem.** Print n rows, decreasing from n stars to one.

**Idea.** Use nested loops: an outer loop chooses the row; inner loops decide spaces and visible characters.

**Solution source:** `code/patterns_02.c`

```c
#include <stdio.h>
int main(void){int n=5;for(int i=n;i>=1;i--){for(int j=1;j<=i;j++)putchar('*');putchar('\n');}return 0;}
```

**Output**

```text
*****
****
***
**
*
```

---

## 3. Centered pyramid

**Problem.** Print a centered star pyramid with n rows.

**Idea.** Use nested loops: an outer loop chooses the row; inner loops decide spaces and visible characters.

**Solution source:** `code/patterns_03.c`

```c
#include <stdio.h>
int main(void){int n=4;for(int i=1;i<=n;i++){for(int s=0;s<n-i;s++)putchar(' ');for(int j=0;j<2*i-1;j++)putchar('*');putchar('\n');}return 0;}
```

**Output**

```text
   *
  ***
 *****
*******
```

---

## 4. Inverted centered pyramid

**Problem.** Print a centered pyramid that narrows to one star.

**Idea.** Use nested loops: an outer loop chooses the row; inner loops decide spaces and visible characters.

**Solution source:** `code/patterns_04.c`

```c
#include <stdio.h>
int main(void){int n=4;for(int i=n;i>=1;i--){for(int s=0;s<n-i;s++)putchar(' ');for(int j=0;j<2*i-1;j++)putchar('*');putchar('\n');}return 0;}
```

**Output**

```text
*******
 *****
  ***
   *
```

---

## 5. Diamond

**Problem.** Combine an increasing and decreasing centered pyramid.

**Idea.** Use nested loops: an outer loop chooses the row; inner loops decide spaces and visible characters.

**Solution source:** `code/patterns_05.c`

```c
#include <stdio.h>
int main(void){int n=4;for(int i=1;i<=n;i++){for(int s=0;s<n-i;s++)putchar(' ');for(int j=0;j<2*i-1;j++)putchar('*');putchar('\n');}for(int i=n-1;i>=1;i--){for(int s=0;s<n-i;s++)putchar(' ');for(int j=0;j<2*i-1;j++)putchar('*');putchar('\n');}return 0;}
```

**Output**

```text
   *
  ***
 *****
*******
 *****
  ***
   *
```

---

## 6. Hollow rectangle

**Problem.** Print a 5-by-8 border, leaving the interior blank.

**Idea.** Use nested loops: an outer loop chooses the row; inner loops decide spaces and visible characters.

**Solution source:** `code/patterns_06.c`

```c
#include <stdio.h>
int main(void){int rows=5,cols=8;for(int r=0;r<rows;r++){for(int c=0;c<cols;c++)putchar(r==0||r==rows-1||c==0||c==cols-1?'*':' ');putchar('\n');}return 0;}
```

**Output**

```text
********
*      *
*      *
*      *
********
```

---

## 7. Number staircase

**Problem.** Print row i as the digits 1 through i.

**Idea.** Use nested loops: an outer loop chooses the row; inner loops decide spaces and visible characters.

**Solution source:** `code/patterns_07.c`

```c
#include <stdio.h>
int main(void){for(int i=1;i<=5;i++){for(int j=1;j<=i;j++)printf("%d",j);putchar('\n');}return 0;}
```

**Output**

```text
1
12
123
1234
12345
```

---

## 8. Floyd's triangle

**Problem.** Print consecutive integers in a left-aligned triangle.

**Idea.** Use nested loops: an outer loop chooses the row; inner loops decide spaces and visible characters.

**Solution source:** `code/patterns_08.c`

```c
#include <stdio.h>
int main(void){int x=1;for(int r=1;r<=5;r++){for(int c=0;c<r;c++)printf("%d ",x++);putchar('\n');}return 0;}
```

**Output**

```text
1 
2 3 
4 5 6 
7 8 9 10 
11 12 13 14 15 
```

---

## 9. Binary 0-1 triangle

**Problem.** Print alternating zeroes and ones according to row/column parity.

**Idea.** Use nested loops: an outer loop chooses the row; inner loops decide spaces and visible characters.

**Solution source:** `code/patterns_09.c`

```c
#include <stdio.h>
int main(void){for(int r=0;r<5;r++){for(int c=0;c<=r;c++)printf("%d",(r+c)%2);putchar('\n');}return 0;}
```

**Output**

```text
0
10
010
1010
01010
```

---

## 10. Alphabet staircase

**Problem.** Print A on row 1, then A B, then A B C, and so on.

**Idea.** Use nested loops: an outer loop chooses the row; inner loops decide spaces and visible characters.

**Solution source:** `code/patterns_10.c`

```c
#include <stdio.h>
int main(void){for(int r=1;r<=5;r++){for(int c=0;c<r;c++)printf("%c",'A'+c);putchar('\n');}return 0;}
```

**Output**

```text
A
AB
ABC
ABCD
ABCDE
```

---

## 11. Hollow square

**Problem.** Print a 5-by-5 square border.

**Idea.** Use nested loops: an outer loop chooses the row; inner loops decide spaces and visible characters.

**Solution source:** `code/patterns_11.c`

```c
#include <stdio.h>
int main(void){int n=5;for(int r=0;r<n;r++){for(int c=0;c<n;c++)putchar(r==0||r==n-1||c==0||c==n-1?'#':' ');putchar('\n');}return 0;}
```

**Output**

```text
#####
#   #
#   #
#   #
#####
```

---

## 12. Butterfly pattern

**Problem.** Print two mirrored wings that widen then narrow.

**Idea.** Use nested loops: an outer loop chooses the row; inner loops decide spaces and visible characters.

**Solution source:** `code/patterns_12.c`

```c
#include <stdio.h>
int main(void){int n=4;for(int i=1;i<=n;i++){for(int j=0;j<i;j++)putchar('*');for(int s=0;s<2*(n-i);s++)putchar(' ');for(int j=0;j<i;j++)putchar('*');putchar('\n');}for(int i=n;i>=1;i--){for(int j=0;j<i;j++)putchar('*');for(int s=0;s<2*(n-i);s++)putchar(' ');for(int j=0;j<i;j++)putchar('*');putchar('\n');}return 0;}
```

**Output**

```text
*      *
**    **
***  ***
********
********
***  ***
**    **
*      *
```

---

## 13. Number pyramid

**Problem.** Print centered rows where each row repeats its row number.

**Idea.** Use nested loops: an outer loop chooses the row; inner loops decide spaces and visible characters.

**Solution source:** `code/patterns_13.c`

```c
#include <stdio.h>
int main(void){int n=5;for(int i=1;i<=n;i++){for(int s=0;s<n-i;s++)putchar(' ');for(int j=0;j<i;j++)printf("%d ",i);putchar('\n');}return 0;}
```

**Output**

```text
    1 
   2 2 
  3 3 3 
 4 4 4 4 
5 5 5 5 5 
```

---

## 14. Pascal triangle

**Problem.** Print the first five rows using the recurrence for binomial coefficients.

**Idea.** Use nested loops: an outer loop chooses the row; inner loops decide spaces and visible characters.

**Solution source:** `code/patterns_14.c`

```c
#include <stdio.h>
int main(void){int rows=5;for(int r=0;r<rows;r++){long long v=1;for(int s=0;s<rows-r-1;s++)putchar(' ');for(int c=0;c<=r;c++){printf("%lld ",v);v=v*(r-c)/(c+1);}putchar('\n');}return 0;}
```

**Output**

```text
    1 
   1 1 
  1 2 1 
 1 3 3 1 
1 4 6 4 1 
```

---

## 15. X pattern

**Problem.** Print an X in a square grid, using dots elsewhere.

**Idea.** Use nested loops: an outer loop chooses the row; inner loops decide spaces and visible characters.

**Solution source:** `code/patterns_15.c`

```c
#include <stdio.h>
int main(void){int n=7;for(int r=0;r<n;r++){for(int c=0;c<n;c++)putchar(c==r||c==n-1-r?'X':'.');putchar('\n');}return 0;}
```

**Output**

```text
X.....X
.X...X.
..X.X..
...X...
..X.X..
.X...X.
X.....X
```

---

## 16. Sandglass

**Problem.** Print a decreasing pyramid followed by an increasing one.

**Idea.** Use nested loops: an outer loop chooses the row; inner loops decide spaces and visible characters.

**Solution source:** `code/patterns_16.c`

```c
#include <stdio.h>
int main(void){int n=4;for(int i=n;i>=1;i--){for(int s=0;s<n-i;s++)putchar(' ');for(int j=0;j<2*i-1;j++)putchar('*');putchar('\n');}for(int i=2;i<=n;i++){for(int s=0;s<n-i;s++)putchar(' ');for(int j=0;j<2*i-1;j++)putchar('*');putchar('\n');}return 0;}
```

**Output**

```text
*******
 *****
  ***
   *
  ***
 *****
*******
```

---

## 17. Multiplication grid

**Problem.** Print a 1-through-5 multiplication grid with aligned columns.

**Idea.** Use nested loops: an outer loop chooses the row; inner loops decide spaces and visible characters.

**Solution source:** `code/patterns_17.c`

```c
#include <stdio.h>
int main(void){for(int r=1;r<=5;r++){for(int c=1;c<=5;c++)printf("%4d",r*c);putchar('\n');}return 0;}
```

**Output**

```text
   1   2   3   4   5
   2   4   6   8  10
   3   6   9  12  15
   4   8  12  16  20
   5  10  15  20  25
```

---

## 18. Concentric number square

**Problem.** For a 5-by-5 square, print values increasing toward the outer edge.

**Idea.** Use nested loops: an outer loop chooses the row; inner loops decide spaces and visible characters.

**Solution source:** `code/patterns_18.c`

```c
#include <stdio.h>
int main(void){int n=5;for(int r=0;r<2*n-1;r++){for(int c=0;c<2*n-1;c++){int a=r<c?r:c;int b=(2*n-2-r)<(2*n-2-c)?(2*n-2-r):(2*n-2-c);int m=a<b?a:b;printf("%d ",n-m);}putchar('\n');}return 0;}
```

**Output**

```text
5 5 5 5 5 5 5 5 5 
5 4 4 4 4 4 4 4 5 
5 4 3 3 3 3 3 4 5 
5 4 3 2 2 2 3 4 5 
5 4 3 2 1 2 3 4 5 
5 4 3 2 2 2 3 4 5 
5 4 3 3 3 3 3 4 5 
5 4 4 4 4 4 4 4 5 
5 5 5 5 5 5 5 5 5 
```

---

## 19. Right-aligned number triangle

**Problem.** Print row 1 through row 5, aligned to the right.

**Idea.** Use nested loops: an outer loop chooses the row; inner loops decide spaces and visible characters.

**Solution source:** `code/patterns_19.c`

```c
#include <stdio.h>
int main(void){for(int r=1;r<=5;r++){for(int s=0;s<5-r;s++)putchar(' ');for(int c=1;c<=r;c++)printf("%d",c);putchar('\n');}return 0;}
```

**Output**

```text
    1
   12
  123
 1234
12345
```

---

## 20. Hollow pyramid

**Problem.** Print a pyramid with a solid base and hollow interior.

**Idea.** Use nested loops: an outer loop chooses the row; inner loops decide spaces and visible characters.

**Solution source:** `code/patterns_20.c`

```c
#include <stdio.h>
int main(void){int n=5;for(int r=0;r<n;r++){for(int s=0;s<n-r-1;s++)putchar(' ');for(int c=0;c<2*r+1;c++)putchar(r==n-1||c==0||c==2*r?'*':' ');putchar('\n');}return 0;}
```

**Output**

```text
    *
   * *
  *   *
 *     *
*********
```
