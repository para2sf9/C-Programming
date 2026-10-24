#include <stdio.h>
#include <stdlib.h>
int main(void){int *p=malloc(sizeof *p);if(!p)return 1;*p=8;printf("value=%d\n",*p);free(p);return 0;}
