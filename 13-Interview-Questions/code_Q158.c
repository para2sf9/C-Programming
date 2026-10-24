#include <stdio.h>
struct Example{char c;int n;};
int main(void){printf("sizeof struct=%zu (implementation dependent)\n",sizeof(struct Example));return 0;}
