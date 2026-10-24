#include <stdio.h>
int main(void){int a[]={1,3,5,7,9},lo=0,hi=4,target=7,found=-1;while(lo<=hi){int mid=lo+(hi-lo)/2;if(a[mid]==target){found=mid;break;}if(a[mid]<target)lo=mid+1;else hi=mid-1;}printf("index=%d\n",found);return 0;}
