#include <stdio.h>
int main(void){int reading=140,min=-40,max=125;if(reading<min)reading=min;if(reading>max)reading=max;printf("validated=%d C\n",reading);return 0;}
