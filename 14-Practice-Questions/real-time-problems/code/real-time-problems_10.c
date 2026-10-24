#include <stdio.h>
#include <stddef.h>
int main(void){unsigned char p[]={0,3,0x41,0x42,0x43};size_t n=sizeof p;size_t len=((size_t)p[0]<<8)|p[1];if(n>=2&&len<=n-2)printf("valid payload length=%zu\n",len);else puts("truncated packet");return 0;}
