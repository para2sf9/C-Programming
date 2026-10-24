#include <stdio.h>
int main(void){for(int r=0;r<5;r++){for(int c=0;c<=r;c++)printf("%d",(r+c)%2);putchar('\n');}return 0;}
