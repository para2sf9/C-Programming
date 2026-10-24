#include <stdio.h>
#include <stddef.h>
int main(void){int a[]={10,20,30};int *p=a;printf("%d %d offset=%td\n",*p,*(p+2),(p+2)-p);return 0;}
