#include <stdio.h>
#include <stdlib.h>
int main(void){int *p=malloc(2*sizeof *p);if(!p)return 1;p[0]=3;p[1]=4;int *tmp=realloc(p,4*sizeof *p);if(!tmp){free(p);return 1;}p=tmp;p[2]=5;p[3]=6;printf("sum=%d\n",p[0]+p[1]+p[2]+p[3]);free(p);return 0;}
