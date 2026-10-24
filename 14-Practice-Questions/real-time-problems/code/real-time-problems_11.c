#include <stdio.h>
int main(void){unsigned char bytes[]={0x10,0x20,0x30};unsigned char check=0;for(size_t i=0;i<sizeof bytes;i++)check^=bytes[i];printf("XOR checksum=0x%02X\n",check);return 0;}
