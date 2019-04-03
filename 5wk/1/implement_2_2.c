/*if else if version*/

#include <stdio.h>

int main(void) {
	int x, y;
	printf("정수 두개를 입력하세요: ");
	scanf("%d %d",&x, &y);

	if(x == 0 && y ==0)
		printf("두수 모두 0입니다.");
	else if(x == 0 && y!=0)
		printf("x는 0이고, y는 0이 아닙니다.");
	else if(x!=0 && y == 0)
		printf("x는 0이 아니고, y는 0 입니다.");
	else
		printf("두수 모두 0이 아닙니다.");
}