#include "common.h"

int main(void) {
	int a, b;

	a = get_integer();
	b = get_integer();
	printf("C(%d, %d) = %d \n", a, b, combination(a, b));
	return 0;
}