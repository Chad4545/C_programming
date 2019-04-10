// 입력받은 수까지의 합 구하기
// 전체합 , 짝수합, 홀수합
#include <stdio.h>

int main(void) {
	int num;
	int i;
	int sum;
	int sum_odd = 0;
	int sum_even = 0;

	printf("숫자를 입력하세요. ");
	scanf("%d", &num);
	for (sum = 0, i = 1; i <= num; i++) {
		sum = sum + i;
	}
	printf("1부터 %d까지의 합: %d\n", num, sum);


	i = 1;
	while (i <= num) {
		if (num % i == 0) {
			sum_even = sum_even + i;
		}
		else {
			sum_odd = sum_odd + i;
		}
		i++;
	}
	printf("1부터 %d까지 짝수 합: %d\n", num, sum_even);
	printf("1부터 %d까지 홀수 합: %d\n", num, sum_odd);
	
}

