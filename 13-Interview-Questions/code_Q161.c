#include <stdio.h>
union Value{int i;float f;};
int main(void){union Value v;v.i=12;printf("active integer=%d\n",v.i);return 0;}
