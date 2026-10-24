#include <stdio.h>
int main(void){int limit=3,accepted=0;for(int request=1;request<=5;request++){if(accepted<limit){accepted++;printf("request %d: allow\n",request);}else printf("request %d: reject\n",request);}return 0;}
