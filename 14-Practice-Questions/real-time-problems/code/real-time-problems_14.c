#include <stdio.h>
enum OrderState{CANCELLED,STANDARD,EXPRESS};
int main(void){enum OrderState s=EXPRESS;int priority=s==CANCELLED?0:(s==EXPRESS?1:2);printf("dispatch priority=%d\n",priority);return 0;}
