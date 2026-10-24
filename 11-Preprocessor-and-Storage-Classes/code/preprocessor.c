#include <stdio.h>
#define SQUARE(x) ((x) * (x))

static int next_id(void) {
    static int id = 0;
    return ++id;
}

int main(void) {
    int first = next_id();
    int second = next_id();
    printf("square=%d ids=%d,%d\n", SQUARE(5), first, second);
    return 0;
}
