#include <stdio.h>
enum Level{INFO,WARN,ERROR};
int main(void){enum Level log[]={INFO,ERROR,WARN,INFO,ERROR,ERROR};int n[3]={0};for(size_t i=0;i<6;i++)n[log[i]]++;printf("INFO=%d WARN=%d ERROR=%d\n",n[INFO],n[WARN],n[ERROR]);return 0;}
