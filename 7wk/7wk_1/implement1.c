#include <stdio.h>
void f_to_c()
{
	double f, c;

	printf("ȭ�� �µ��� �Է��ϼ���: ");
	scanf("%lf", &f);
	c = 5.0 / 9.0*(f - 32);
	printf("���� �µ�: %.2f\n", c);
}

int main(void) {

	f_to_c();
	return 0;
}

