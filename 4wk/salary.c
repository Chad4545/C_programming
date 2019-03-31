#include <stdio.h>

int main(void) {
    
    float salary;

    printf("\aEnter your desired monthly salary: ");
    printf("$-------\b\b\b\b\b\b\b");
    scanf("%f",&salary);
    printf("\n\t$%2.f a month is $%2.f a year.", salary, salary*12);
    printf("\rGee!\n");  // \n이랑 \r의 사용법 .. 순서가 바껴서 나오네 ???
    return 0;

}