#include <stdio.h>
int main(void){double kg=3.2;int extra=(int)(kg-1.0);if(kg>1.0 && (double)extra<kg-1.0)extra++;double fee=4.0+1.25*extra;printf("weight=%.1f kg fee=$%.2f\n",kg,fee);return 0;}
