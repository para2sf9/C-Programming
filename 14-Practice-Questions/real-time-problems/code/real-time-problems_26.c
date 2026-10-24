#include <stdio.h>
int add(int a,int b){return a+b;}int mul(int a,int b){return a*b;}
int main(void){int (*op)(int,int)=mul;printf("result=%d\n",op(8,3));return 0;}
