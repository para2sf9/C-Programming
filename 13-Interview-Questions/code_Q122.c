#include <stdio.h>
#include <string.h>
int main(void){printf("same=%d different=%d\n",strcmp("cat","cat")==0,strcmp("cat","dog")<0);return 0;}
