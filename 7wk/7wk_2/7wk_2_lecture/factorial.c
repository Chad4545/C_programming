#include "common.h"

int factorial(int n) {
	int i;
	long result = 1;

	for (i = 1; i <= n; i++)
		result *= i;
	return result;
}