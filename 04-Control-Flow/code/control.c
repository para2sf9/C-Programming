#include <stdio.h>

int main(void) {
    int score = 82;
    if (score >= 90) puts("A");
    else if (score >= 80) puts("B");
    else puts("Keep practicing");
    for (int i = 1; i <= 5; ++i) printf("%d ", i * i);
    putchar('\n');
    return 0;
}
