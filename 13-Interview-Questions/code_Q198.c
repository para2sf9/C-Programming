#include <stdio.h>
#include <stdlib.h>
int main(void){int *p=malloc(sizeof *p);if(!p)return 1;*p=9;printf("before free=%d\n",*p);free(p);p=NULL;printf("cleared=%s\n",p==NULL?"yes":"no");return 0;}
