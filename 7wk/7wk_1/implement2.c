#include <stdio.h>

double f_to_c(double f); // 함수 원형 선언

int main(void) {
	double f, c;
	printf("화씨 온도를 입력하세요: ");
	scanf("%lf", &f);

	c = f_to_c(f);
	printf("섭씨 온도: %.2f\n", c);
	return 0;
}
// 이름이 같더라도, 별개의 f,c  다
double f_to_c(double f)
{	
	double c;
	c = 5.0 / 9.0*(f - 32);
	return c;
	
	// or
	// return 5.0 / 9.0*(f - 32);
}