#include <stdio.h>

int main(void){
    float x = 1.234567890123456789; // 20자리
    double y = 1.234567890123456789;

    printf("float의 크기: %d\n", sizeof(x));
    printf("double의 크기: %d\n", sizeof(y));
    

    printf("x = %30.25f\n",x); // 총 30자리인데 가수부는 25자리  // float이라서 유효숫자 7번째 까지 정확
    printf("y = %30.25f\n",y); // double 이라서 유효숫자 16,17번째 까지 정호가 

    return 0;
}