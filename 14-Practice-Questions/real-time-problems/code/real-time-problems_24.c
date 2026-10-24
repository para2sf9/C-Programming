#include <stdio.h>
#include <string.h>
int main(void){char name[]="alex";size_t capacity=sizeof name;size_t max_name=8;printf("name length=%zu capacity=%zu\n",strlen(name),capacity);if(capacity<max_name+1)puts("buffer too small for max name");else puts("buffer size OK");return 0;}
