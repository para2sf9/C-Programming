#include <stdio.h>
#include <stddef.h>
#include <stdalign.h>

#define POOL_SIZE 1024
static alignas(alignof(max_align_t)) char pool[POOL_SIZE];
static size_t pool_off = 0;

void *bump_alloc(size_t n) {
    if (n == 0) return NULL;
    size_t align = alignof(max_align_t);
    size_t rem = pool_off % align;
    size_t pad = rem ? align - rem : 0;
    if (pool_off > POOL_SIZE - pad) return NULL;
    size_t next = pool_off + pad;
    if (next > POOL_SIZE - n) return NULL;
    void *p = pool + next;
    pool_off = next + n;
    return p;
}

void bump_reset(void) { pool_off = 0; }

int main(void) {
    int *a = bump_alloc(5 * sizeof(int));
    char *b = bump_alloc(12);
    double *c = bump_alloc(3 * sizeof(double));
    printf("a=%p b=%p c=%p offset=%zu\n", (void*)a, (void*)b, (void*)c, pool_off);
    for (int i = 0; i < 5; ++i) a[i] = i + 1;
    for (int i = 0; i < 3; ++i) c[i] = (i + 1) * 1.1;
    printf("a[4]=%d c[2]=%.2f\n", a[4], c[2]);
    bump_reset();
    printf("after reset offset=%zu\n", pool_off);
    return 0;
}
