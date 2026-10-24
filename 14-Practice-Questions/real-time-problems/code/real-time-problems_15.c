#include <stdio.h>
int main(void){long long cents=1234, fee=99;long long total=cents+fee;printf("total=$%lld.%02lld\n",total/100,total%100);return 0;}
