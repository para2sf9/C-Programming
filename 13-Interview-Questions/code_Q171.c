#include <stdio.h>
struct User{int id;int active;};
int main(void){struct User u={.active=1,.id=7};printf("id=%d active=%d\n",u.id,u.active);return 0;}
