#include <stdio.h>
int main(void){int rows=5,cols=8;for(int r=0;r<rows;r++){for(int c=0;c<cols;c++)putchar(r==0||r==rows-1||c==0||c==cols-1?'*':' ');putchar('\n');}return 0;}
