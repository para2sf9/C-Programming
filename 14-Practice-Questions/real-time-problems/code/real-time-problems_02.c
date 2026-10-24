#include <stdio.h>
int main(void){int minutes=260;int hours=(minutes+59)/60;double fee=hours<=1?3.0:3.0+(hours-1)*1.5;if(fee>15.0)fee=15.0;printf("billable hours=%d fee=$%.2f\n",hours,fee);return 0;}
