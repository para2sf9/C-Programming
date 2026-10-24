#include <stdio.h>

int factorial(int n) {
    if (n <= 1) return 1;
    return n * factorial(n - 1);
}

void swap(int *a, int *b) {
    int temp = *a; *a = *b; *b = temp;
}

int main(void) {
    int x = 3, y = 9;
    swap(&x, &y);
    printf("x=%d y=%d 5!=%d\n", x, y, factorial(5));
    return 0;
}
