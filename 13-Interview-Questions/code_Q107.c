#include <stdio.h>
int sum(const int a[],size_t n){int s=0;for(size_t i=0;i<n;i++)s+=a[i];return s;}
int main(void){int a[]={2,4,6};printf("sum=%d\n",sum(a,3));return 0;}
