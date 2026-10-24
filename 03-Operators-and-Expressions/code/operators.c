#include <stdio.h>

int main(void) {
    int a = 7, b = 2;
    printf("integer=%d floating=%.1f remainder=%d\n", a / b, (double)a / b, a % b);
    printf("compare=%d logical=%d\n", a > b, (a > b) && (b != 0));
    return 0;
}
