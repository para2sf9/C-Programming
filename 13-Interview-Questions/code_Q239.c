#include <stdio.h>
struct Node{int v;struct Node *next;};
int main(void){struct Node c={3,NULL},b={2,&c},a={1,&b};for(struct Node *p=&a;p;p=p->next)printf("%d ",p->v);putchar('\n');return 0;}
