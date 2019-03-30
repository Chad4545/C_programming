#include <stdio.h>
int main(void){

    float x = 1.23456e-38;
    float y = 1.23456e-40; // 양수지만 0에 가까운 숫자  근사치로 표현 
    float z = 1.23456e-46; // 양수지만 0에 가까운 숫자
    float t = -1.23456e-46; // 음수지만 0에 가까운 숫자

    // 따라서 float(실수) 로는 0을 표현 못한다. 근사시키는것 

    printf("x= %e\n",x);
    printf("y= %e\n",y);
    printf("z= %e\n",z);
    printf("t= %e\n",t);

    return 0;

}