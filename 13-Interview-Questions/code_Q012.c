#include <stdio.h>
int count = 3;
extern int count;
int main(void) { printf("count=%d\n", count); return 0; }
