#include <stdio.h>

int main(void){

    int x;
    int y;
    int sum;

    printf("Enter first number: \n");
    scanf("%d",&x);

    printf("Enter second number: \n");
    scanf("%d",&y);

    sum = x + y;
    printf("result of sum of two numbers: %d\n",sum);
    return 0;
}