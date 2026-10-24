#include <stdio.h>
int main(void){int stock[]={3,12,0,8,21};int threshold[]={5,10,2,8,20};int alert=0;for(size_t i=0;i<5;i++)if(stock[i]<threshold[i]){printf("SKU%zu low: %d < %d\n",i+1,stock[i],threshold[i]);alert++;}printf("alerts=%d\n",alert);return 0;}
