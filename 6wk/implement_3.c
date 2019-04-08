// 숫자 + 1 의 sum 구하기 
#include <stdio.h>

int main(void) {

	int num;
	int square;
	int sum;
	int i;
	printf("정수를 입력하시오 :");
	scanf("%d", &num);


	i = 1;
	sum = 0;
	while (i <= num) {
		square = i * i + 1;
		sum = sum + square;

		
		if (i == num) {
			printf( " %d = %d ", square, sum);
		}
		else{
			printf(" %d + ", square);
		}
		i++;
	}

}