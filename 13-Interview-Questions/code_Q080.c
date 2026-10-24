#include <stdio.h>
void set_to_9(int x){ x=9; }
int main(void){int n=2;set_to_9(n);printf("caller still has %d\n",n);return 0;}
