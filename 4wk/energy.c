/*사용자로부터 물체의 질량m(g), 낙하속도v(m/s), 높이h(m)를 입력 받은 후
운동에너지 위치에너지 및 역학적 에너지를 구하는 프로그램
중력g는 9.8m/s라 가정하고, GRAVITY라는 기호 상수 사용
운동에너지(EK) = (1/2)*mv^2, 위치에너지(EP)= mgh, 역학적에너지(EM) = EP + EK
에너지 값은 소수점 이하 둘째 자리만 표현한다*/

#include <stdio.h>
#define GRAVITY 9.8

int main(void){

    float g, v, h, EK, EP, EM;

    printf("물체의 질량<g>, 속도<m/s>, 및 높이<m>을 입력하시오: ");
    scanf("%f %f %f", &g, &v, &h);

    EK = (1/2.0) * g * v * v;
    EP = GRAVITY * g * h;
    EM = EK + EP;

    printf("운동에너지 = %.2f[J],\n",EK);
    printf("위치에너지 = %.2f[J],\n",EP);
    printf("역학적에너지 = %.2f[J],\n",EM);

    return 0;
}