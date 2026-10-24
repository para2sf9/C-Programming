#include <stdio.h>
int main(void){FILE *f=tmpfile();if(!f)return 1;fputs("one\ntwo\n",f);rewind(f);char b[16];while(fgets(b,sizeof b,f))printf("%s",b);printf("eof=%d error=%d\n",feof(f)!=0,ferror(f)!=0);fclose(f);return 0;}
