#include <stdio.h>
int main(void){int n=7;for(int r=0;r<n;r++){for(int c=0;c<n;c++)putchar(c==r||c==n-1-r?'X':'.');putchar('\n');}return 0;}
