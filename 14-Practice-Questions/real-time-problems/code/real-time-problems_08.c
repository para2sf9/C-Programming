#include <stdio.h>
int main(void){int amount=186;int d[]={100,50,20,10,5,1};for(size_t i=0;i<sizeof d/sizeof d[0];i++){int n=amount/d[i];if(n)printf("%d x %d\n",d[i],n);amount%=d[i];}return 0;}
