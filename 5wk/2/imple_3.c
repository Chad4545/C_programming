/*일주일 단위로 임금을 지급받는 직원을 위한 임금 계산 프로그램

시간당 기본 임금: 8350원/시간
초과 근무 수당: 1주일에 30시간을 넘는 초과시간에 대해서는 기본 임금의 1.2배지급
세율: 1주일에 10만원 이하는 3%, 10만원 초과는 5%

사용자로부터 주당 근무시간(시간단위)를 입력 받은 후, 총 임금 및 세금을 제한 실 수령액을 출력

ex)
근무시간을 입력하시오: 25
주당 총 임금 : 208750원
주급이 10만원 초과로 5세율 적용, 세액:10438원
실수령액 198313원

근무시간을 입력하시오: 45
기본주급: 250500원
초과수당: 15시간, 150300원
주당 총 임금: 400800원
주급이 10만원 초과로 5세율 적용, 세액:20040원
실수령액 380760원*/

#include <stdio.h>
#define PAY 8350
#define OVERPAYRATE 1.2
#define OVERHOUR 30
#define UNDERRATE 0.03
#define OVERRATE 0.05
#define THRESHOLD 100000

int main(void){

    int workHours, basicPay;
    double tax, realPay;
    double overPay, totalPay;

    printf("근무시간을 입력하시오: \n");
    scanf("%d",&workHours);
    if (workHours<=OVERHOUR){
        basicPay = workHours * PAY;

        printf("주당 총 임금: %d원\n",basicPay);
        if (basicPay>THRESHOLD){
            tax = OVERRATE*basicPay;
            printf("주급이 10만원 초과로 5%% 세율 적용, 세액:%0.lf원\n",tax);
        }
        else{
            tax = UNDERRATE*basicPay;
            printf("주급이 10만원 이하로 3%% 세율 적용, 세액:%0.lf원\n",tax);
        }
        realPay = basicPay - tax;
        printf("실 수령액: %0.lf원\n",realPay);
    }
    else{ //30시간 이상 근무했으므로 당연히 100000원 이상의 임금이 계산됨
    
        basicPay = OVERHOUR * PAY; // 30 * 8350
        overPay = (workHours-OVERHOUR) * PAY * OVERPAYRATE;
        totalPay = basicPay + overPay;
        tax = OVERRATE*(totalPay);
        realPay = totalPay - tax;
        printf("기본주급: %d\n",basicPay);
        printf("초과수당: %d시간, %0.lf원\n",workHours-OVERHOUR, overPay);
        printf("주당 총 임금: %0.lf원\n",totalPay);
        printf("주급이 10만원 초과로 5%%세율 적용, 세액:%0.lf원\n",tax);
        printf("실 수령액: %0.lf원\n",realPay);
        
        
    }

        
        

    
}