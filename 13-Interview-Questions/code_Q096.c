#include <stdio.h>
int next(void){static int n=0;return ++n;}
int main(void){printf("%d %d %d\n",next(),next(),next());return 0;}
