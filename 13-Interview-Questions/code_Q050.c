#include <stdio.h>
enum State { OFF, ON, ERROR };
int main(void) { enum State s=ON; printf("OFF=%d ON=%d state=%d\n", OFF, ON, s); return 0; }
