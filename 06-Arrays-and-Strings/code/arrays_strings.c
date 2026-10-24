#include <stdio.h>
#include <string.h>

int main(void) {
    int values[] = {4, 1, 9, 2};
    size_t n = sizeof values / sizeof values[0];
    int sum = 0;
    for (size_t i = 0; i < n; ++i) sum += values[i];
    char name[32] = "Ada";
    printf("n=%zu average=%.2f greeting=Hello, %s\n", n, (double)sum / n, name);
    return 0;
}
