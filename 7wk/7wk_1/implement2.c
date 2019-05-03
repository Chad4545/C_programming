#include <stdio.h>

double f_to_c(double f); // 함수원형선언

int main(void) {
	double f, c;
	printf("ȭ�� �µ��� �Է��ϼ���: ");
	scanf("%lf", &f);

	c = f_to_c(f);
	printf("���� �µ�: %.2f\n", c);
	return 0;
}
// 이름이 같더라도, 별개의 f,c
double f_to_c(double f)
{	
	double c;
	c = 5.0 / 9.0*(f - 32);
	return c;
	
	// or
	// return 5.0 / 9.0*(f - 32);
}