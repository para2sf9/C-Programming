#include <stdio.h>
#include <stdlib.h>

int main(void) {
    size_t n = 4;
    int *values = malloc(n * sizeof *values);
    if (values == NULL) return 1;
    for (size_t i = 0; i < n; ++i) values[i] = (int)(i + 1);
    int sum = 0;
    for (size_t i = 0; i < n; ++i) sum += values[i];
    printf("sum=%d\n", sum);
    free(values);
    return 0;
}
