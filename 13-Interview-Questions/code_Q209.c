#include <stdio.h>
int main(void){FILE *f=fopen("bytes.bin","wb");if(!f)return 1;unsigned char b[]={0x41,0x42,0x43};size_t n=fwrite(b,1,sizeof b,f);fclose(f);printf("wrote %zu bytes\n",n);return n==sizeof b?0:1;}
