#include <stdio.h>
void square(int x,int *out){*out=x*x;}
int main(void){int y=0;square(6,&y);printf("square=%d\n",y);return 0;}
