#include <stdio.h>
int main(void){int rows=5;for(int r=0;r<rows;r++){long long v=1;for(int s=0;s<rows-r-1;s++)putchar(' ');for(int c=0;c<=r;c++){printf("%lld ",v);v=v*(r-c)/(c+1);}putchar('\n');}return 0;}
