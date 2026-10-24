#include <stdio.h>
#include <stdlib.h>
int main(void){int *p=malloc(3*sizeof *p);if(!p)return 1;p[0]=4;p[1]=5;p[2]=6;printf("sum=%d\n",p[0]+p[1]+p[2]);free(p);return 0;}
