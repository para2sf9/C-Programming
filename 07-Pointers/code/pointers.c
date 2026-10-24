#include <stdio.h>

int main(void) {
    int value = 42;
    int *ptr = &value;
    printf("value=%d through pointer=%d\n", value, *ptr);
    *ptr = 99;
    printf("after update=%d\n", value);
    return 0;
}
