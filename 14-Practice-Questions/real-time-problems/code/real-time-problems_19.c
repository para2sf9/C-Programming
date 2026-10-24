#include <stdio.h>
#include <stdint.h>
int main(void){const uint32_t READY=1u<<0,ERROR=1u<<3;uint32_t status=READY|ERROR;printf("ready=%d\n",(status&READY)!=0);status&=~ERROR;printf("status=%u\n",status);return 0;}
