#include <stdio.h>
int main(void){int s[]={75,88,92,65};int min=s[0],sum=0,passed=0;for(size_t i=0;i<4;i++){sum+=s[i];if(s[i]<min)min=s[i];if(s[i]>=80)passed++;}printf("average=%.2f min=%d at_least_80=%d\n",sum/4.0,min,passed);return 0;}
