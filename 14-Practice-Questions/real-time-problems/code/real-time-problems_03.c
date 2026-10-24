#include <stdio.h>
int main(void){int stock=17,reorder_point=20,order=50;if(stock<=reorder_point)printf("REORDER %d units; projected stock=%d\n",order,stock+order);else puts("stock sufficient");return 0;}
