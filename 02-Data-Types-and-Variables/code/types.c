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
