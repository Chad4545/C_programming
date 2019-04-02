/*중첩 if*/

#include <stdio.h>
int main(void){

	int x,y;
	printf("두개의 정수를 입력하시오: ");
	scanf("%d %d", &x, &y);

	if (x == 0){
		if (y == 0){
			printf("두수 모두 0 입니다.");
			}
		else{
			printf("x는 0이고, y는 0이 아닙니다.");
			}
		}
	else{
		if(y==0){
		printf("x는 0이 아니고, y는 0 입니다.");
		}
		else{
		printf("x,y 모두 0이 아닙니다.");
		}
		}
}