#include <stdio.h>
int main(void)
{
	int evil1, evil2;
	char ch;
	do {
		printf("Enter a pair of integers:\n");
		scanf("%d %d", &evil1, &evil2);
		printf("The lesser of %d and %d is %d.\n",
			evil1, evil2, (evil1 < evil2) ? evil1 : evil2);
		printf("Press 'y' to continue, or 'q' to quit.");
		while((ch = getchar()) == '\n');
	} while (ch == 'y');
	printf("Bye.\n");
	return 0;
}