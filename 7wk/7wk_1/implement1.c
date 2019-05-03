#include <stdio.h>
void f_to_c()
{
	double f, c;

	printf("화씨 온도를 입력하세요: ");
	scanf("%lf", &f);
	c = 5.0 / 9.0*(f - 32);
	printf("섭씨 온도: %.2f\n", c);
}

int main(void) {

	f_to_c();
	return 0;
}

