#include <stdio.h>
int main(void){int q[4]={0};size_t next=0;for(int v=1;v<=5;v++){q[next]=v;next=(next+1)%4;}printf("oldest=%d order:",q[next]);for(size_t i=0;i<4;i++)printf(" %d",q[(next+i)%4]);putchar('\n');return 0;}
