#include <stdio.h>
int main(void){int x[]={10,13,16,19};for(size_t i=0;i+2<4;i++){int sum=x[i]+x[i+1]+x[i+2];printf("window %zu average=%.2f\n",i+1,sum/3.0);}return 0;}
