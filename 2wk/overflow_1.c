#include <stdio.h>

int main(void){

    int x;
    unsigned int y;

    x = 2147483647;
    printf("x = %d\n",x);

    printf("x+1 = %d\n",x+1);
    printf("x+2 = %d\n",x+2);
    printf("x+3 = %d\n",x+3);

    y = 4294967295;
    printf("y = %u\n",y);
    printf("y+1 = %u\n",y+1);
    printf("y+2 = %u\n",y+2);
    printf("y+3 = %u\n",y+3);

    return 0;

}