#include <stdio.h>
// 완전수 구하기 (완전수 = 자신을 제외한 약수의 합이 자기 자신과 같은 수)

int main(void) {

	int number, count, sum;

	printf("정수를 입력하시오 :  ");
	scanf("%d", &number);

	sum = 0;
	count = 1;
	while (count < number) {
		if (number%count == 0) {
			sum = sum + count;
		}
		count = count + 1;
	}

	if (number == sum)
		printf("%d는 완전수 입니다.", number);
	else
		printf("%d는 완전수가 아닙니다..", number);
	
}

