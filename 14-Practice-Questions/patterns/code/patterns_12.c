#include <stdio.h>
int main(void){int n=4;for(int i=1;i<=n;i++){for(int j=0;j<i;j++)putchar('*');for(int s=0;s<2*(n-i);s++)putchar(' ');for(int j=0;j<i;j++)putchar('*');putchar('\n');}for(int i=n;i>=1;i--){for(int j=0;j<i;j++)putchar('*');for(int s=0;s<2*(n-i);s++)putchar(' ');for(int j=0;j<i;j++)putchar('*');putchar('\n');}return 0;}
