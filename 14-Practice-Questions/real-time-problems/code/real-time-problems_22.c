#include <stdio.h>
int main(void){int ids[]={101,104,110,125,140};int key=125,lo=0,hi=4,at=-1;while(lo<=hi){int m=lo+(hi-lo)/2;if(ids[m]==key){at=m;break;}if(ids[m]<key)lo=m+1;else hi=m-1;}printf("customer=%d index=%d\n",key,at);return 0;}
