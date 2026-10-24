#include <stdio.h>
int main(void) { for(int i=1;i<=5;++i){ if(i==2) continue; if(i==5) break; printf("%d ",i);} putchar('\n'); return 0; }
