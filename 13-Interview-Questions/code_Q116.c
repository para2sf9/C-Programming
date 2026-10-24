#include <stdio.h>
#include <string.h>
int main(void){char line[16];if(fgets(line,sizeof line,stdin)){line[strcspn(line,"\n")]=0;printf("got: %s\n",line);}return 0;}
