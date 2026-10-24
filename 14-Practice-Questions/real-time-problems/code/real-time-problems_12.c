#include <stdio.h>
int main(void){const char *row="12,7,5";int a,b,c;if(sscanf(row,"%d,%d,%d",&a,&b,&c)==3)printf("units=%d\n",a+b+c);else puts("invalid row");return 0;}
