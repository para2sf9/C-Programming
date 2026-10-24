#include <stdio.h>
int main(void) { int x=4; const int *p=&x; x=9; printf("read through const pointer=%d\n", *p); return 0; }
