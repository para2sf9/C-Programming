#include <stdio.h>
#include <stdint.h>
int main(void){uint32_t flags=0;const uint32_t READ=UINT32_C(1)<<0;flags|=READ;printf("read=%d flags=%u\n",(flags&READ)!=0,flags);return 0;}
