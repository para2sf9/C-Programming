#include <stdio.h>
int main(void){int n=5;for(int r=0;r<n;r++){for(int s=0;s<n-r-1;s++)putchar(' ');for(int c=0;c<2*r+1;c++)putchar(r==n-1||c==0||c==2*r?'*':' ');putchar('\n');}return 0;}
