// 숫자 거꾸로 출력하기
#include <stdio.h>
int main(void){

	
	int number;
	int rest;
	int i;
	printf("숫자를 입력하시오 : ");
	scanf("%d", &number);

	i = 1;
	while (number != 0) {
		rest = number % 10;
		printf("%d", rest);
		number = number / 10;


	}
}