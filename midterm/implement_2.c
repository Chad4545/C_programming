/*두 수의 합을 구하는 프로그램, 단 사용자에게 값을 전달 받아*/
#include <stdio.h> // 전처리기, 컴파일 전 선행 처리해야 함을 의미 

int main(void){
    int x, y, sum;

    printf("x를 입력하시오: ");
    scanf("%d",&x);
    printf("y를 입력하시오: ");
    scanf("%d",&y);

    sum = x+y;
    printf("두 수의 합: %d",sum);
    return 0;
}