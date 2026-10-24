#include <stdio.h>
#include <stdlib.h>
int main(void){int *p=calloc(3,sizeof *p);if(!p)return 1;printf("%d %d %d\n",p[0],p[1],p[2]);free(p);return 0;}
