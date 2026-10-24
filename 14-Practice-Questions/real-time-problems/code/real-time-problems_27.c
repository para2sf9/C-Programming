#include <stdio.h>
int main(void){FILE *f=fopen("practice-resource.txt","w");if(!f){perror("fopen");return 1;}if(fputs("record\n",f)==EOF){perror("write");fclose(f);return 1;}if(fclose(f)!=0){perror("close");return 1;}puts("write and close succeeded");return 0;}
