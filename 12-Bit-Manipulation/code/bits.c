#include <stdio.h>
#include <stdint.h>

int main(void) {
    uint32_t flags = 0;
    const uint32_t READ = UINT32_C(1) << 0;
    const uint32_t WRITE = UINT32_C(1) << 1;
    flags |= READ | WRITE;
    printf("flags=%u read=%d\n", flags, (flags & READ) != 0);
    flags &= ~READ;
    printf("after clear=%u\n", flags);
    return 0;
}
