
#include <stdio.h>

int main(void) {
	char ch;
	int num_1, num_2;
	do {
		printf("*****************\n");
		printf("A - Add\n");
		printf("S - Subtract\n");
		printf("M - Multiply\n");
		printf("D - Divide\n");
		printf("Q - Quit\n");
		printf("*****************\n");
		printf("연산을 선택하시요 : \n");

		while((ch=getchar()) == '\n');
		//ch = getchar();
		printf("%c\n",ch);
		if (ch == 'Q')
			break;

		if (ch != 'A' && ch != 'S' && ch != 'M' && ch != 'D'){
			printf("잘못 입력하였습니다.\n");
			continue;
		}
		printf("%c", ch);
		printf("두 수를 입력하시오: ");
		scanf("%d %d", &num_1, &num_2);
		switch(ch){
			case 'A':
				printf("%d + %d = %d\n", num_1, num_2, num_1 + num_2);
				break;
			case 'S':
				printf("%d - %d = %d\n", num_1, num_2, num_1 - num_2);
				break;
			case 'M':
				printf("%d * %d = %d\n", num_1, num_2, num_1 * num_2);
				break;
			case 'D':
				printf("%.2f / %.2f = %.2f\n", (float)num_1, (float)num_2, num_1 / (float)num_2);
				break;
		}
	} while (1);
}