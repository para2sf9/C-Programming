#include <stdio.h>
int main(void){double kwh=250, bill=2.50;double a=kwh<100?kwh:100;bill+=a*0.05;kwh-=a;double b=kwh<100?kwh:100;bill+=b*0.08;kwh-=b;if(kwh>0)bill+=kwh*0.12;printf("Estimated bill: $%.2f\n",bill);return 0;}
