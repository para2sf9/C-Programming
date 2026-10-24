#include <stdio.h>
int main(void){int a[]={4,1,3,2},n=4;for(int i=0;i<n-1;i++)for(int j=0;j<n-1-i;j++)if(a[j]>a[j+1]){int t=a[j];a[j]=a[j+1];a[j+1]=t;}for(int i=0;i<n;i++)printf("%d ",a[i]);putchar('\n');return 0;}
