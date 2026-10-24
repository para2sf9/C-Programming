#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
int main(void){const char *s="42";char *end=NULL;errno=0;long v=strtol(s,&end,10);if(errno==0&&end!=s&&*end=='\\0')printf("valid integer=%ld\n",v);else puts("invalid integer");return 0;}
