#include <stdio.h>
struct Device{unsigned id;int active;};
int main(void){struct Device d[]={{1,1},{2,0},{3,1}};int n=0;for(size_t i=0;i<3;i++)n+=d[i].active!=0;printf("active devices=%d\n",n);return 0;}
