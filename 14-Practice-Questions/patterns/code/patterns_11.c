#include <stdio.h>
int main(void){int n=5;for(int r=0;r<n;r++){for(int c=0;c<n;c++)putchar(r==0||r==n-1||c==0||c==n-1?'#':' ');putchar('\n');}return 0;}
