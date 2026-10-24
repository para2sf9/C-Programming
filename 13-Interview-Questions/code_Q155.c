#include <stdio.h>
struct Point{int x,y;};
int main(void){struct Point p={.x=3,.y=4};struct Point *q=&p;printf("%d,%d\n",q->x,q->y);return 0;}
