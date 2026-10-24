#include <stdio.h>
int main(void){int a[]={3,5,8};size_t n=sizeof a/sizeof a[0];printf("elements=%zu\n",n);return 0;}
