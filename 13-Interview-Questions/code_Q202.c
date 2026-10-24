#include <stdio.h>
int main(void){FILE *f=fopen("interview-demo.txt","w");if(!f){perror("fopen");return 1;}fputs("saved\n",f);if(fclose(f)!=0){perror("fclose");return 1;}puts("file written");return 0;}
