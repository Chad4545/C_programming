#include <stdio.h>
#include <math.h>

int main(void) {
	// 정수가 들어갈 a,b,c
	int a, b, c;
	// 판별식 D
	int D;
	

	printf("ax2 + bx +c = 0 의 해를 구하시오\n");
	printf("a, b, c를 입력하시오: ");
	scanf("%d %d %d", &a, &b, &c);

	D = pow(b, 2) - (4 * a*c); //판별식

	// 먼저 a == 0 이여서 이차식이 아닌 경우
	if (a == 0) {
		float x_1;
		x_1 = -c / b;
		printf("정답: %.2f\n", x_1);
	}
	//a != 인 경우
	else { // D==0 이면 중근을 같는다
		if (D == 0) {
			float x_1;
			x_1 = -b / (2 * a);
			printf("정답은 %.2f 한개 입니다.\n", x_1);
		}
		else if (D > 0) { //D 가 양수인 경우 두개의 실근
			float x_1, x_2;
			x_1 = (-b - sqrt(D)) / (2 * a);
			x_2 = (-b + sqrt(D)) / (2 * a);
			printf("정답은 %.2f, %.2f 두개 입니다..\n", x_1, x_2);
		}
		else { // D 가 음수인 경우 근이 없음
			printf("해가 존재하지 않습니다.\n");
		}


	}

}