#include <stdio.h>
int main(void){double price[]={12.50,3.25,4.00};double subtotal=0;for(size_t i=0;i<3;i++)subtotal+=price[i];double total=subtotal*1.0825;printf("subtotal=$%.2f total=$%.2f\n",subtotal,total);return 0;}
