#include <stdio.h>

struct Point { int x; int y; };
enum Status { PENDING, COMPLETE, FAILED };

int main(void) {
    struct Point p = {.x = 3, .y = 4};
    enum Status task = COMPLETE;
    printf("point=(%d,%d) status=%d\n", p.x, p.y, task);
    return 0;
}
