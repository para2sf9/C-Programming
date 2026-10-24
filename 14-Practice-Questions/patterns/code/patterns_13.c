#include <stdio.h>
int main(void){int n=5;for(int i=1;i<=n;i++){for(int s=0;s<n-i;s++)putchar(' ');for(int j=0;j<i;j++)printf("%d ",i);putchar('\n');}return 0;}
