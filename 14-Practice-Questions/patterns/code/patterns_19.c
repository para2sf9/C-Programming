#include <stdio.h>
int main(void){for(int r=1;r<=5;r++){for(int s=0;s<5-r;s++)putchar(' ');for(int c=1;c<=r;c++)printf("%d",c);putchar('\n');}return 0;}
