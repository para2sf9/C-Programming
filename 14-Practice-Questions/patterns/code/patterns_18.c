#include <stdio.h>
int main(void){int n=5;for(int r=0;r<2*n-1;r++){for(int c=0;c<2*n-1;c++){int a=r<c?r:c;int b=(2*n-2-r)<(2*n-2-c)?(2*n-2-r):(2*n-2-c);int m=a<b?a:b;printf("%d ",n-m);}putchar('\n');}return 0;}
