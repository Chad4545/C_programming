#include <stdio.h>

int main(void) {

	int num = 1;
	unsigned num_1 = 1;
	long nnum = 2;
	unsigned long nnum_2 =2;


	printf("num is %d. num + 1 is %d.\n", num, num +1);
	printf("num is %u. num + 1 is %u.\n", num_1, num_1 +1);
	printf("num is %ld. num + 1 is %ld.\n", nnum, nnum +1);
	printf("num is %lu. num + 1 is %lu.\n", nnum_2, nnum_2 +1);

	return 0;
}