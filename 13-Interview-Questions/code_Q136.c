#include <stdio.h>
int main(void){int a=1,b=2;int * const p=&a;*p=7;printf("a=%d b=%d\n",a,b);return 0;}
