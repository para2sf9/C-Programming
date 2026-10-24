#include <stdio.h>
int main(void){double x[]={21.5,22.0,22.5};size_t n=sizeof x/sizeof x[0];double sum=0;for(size_t i=0;i<n;i++)sum+=x[i];printf("moving average=%.2f C\n",sum/(double)n);return 0;}
