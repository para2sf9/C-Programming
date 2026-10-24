#include <stdio.h>
int main(void){int t[]={18,21,17,25,20};int lo=t[0],hi=t[0];for(size_t i=1;i<5;i++){if(t[i]<lo)lo=t[i];if(t[i]>hi)hi=t[i];}printf("min=%d C max=%d C\n",lo,hi);return 0;}
