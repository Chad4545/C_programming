//교육용 프로그램(PA2)
/*
main 그림 1에 있는 메뉴를 화면에 출력하고, 사용자 입력을 받은 후 해당하는 게임을 수행할
함수를 호출

사용자는 숫자만 입력한다고 가정하고, 예외처리 포함
사용자가 지금까지 누적한 점수는 전역변수
프로그램은 사용자가 4를 누르기 전까지 반복적으로 수행 

*/

#include "my.h"
int entire_score ; // 누적점수
int main(void) {
	int user_choice = 0;

	// 먼저 사용자에게 1~4 사이의 선택을 하게 한다.
	while (1) {
		printf("1) 산수가 좋아\n");
		printf("2) 비밀을 맞춰봐\n");
		printf("3) 점수 보기\n");
		printf("4) 끝내기\n");
		printf("메뉴를 선택하세요: ");
		scanf("%d", &user_choice);
		printf("\n");
		// 다음, 선택한 숫자에 맞는 함수를 호출하거나, 프로그램을 실행한다.
		if (user_choice == 1)
			arithGame();
		else if (user_choice == 2)
			findSecret();
		else if (user_choice == 3)
			printf("지금까지의 점수는 %d 입니다.\n", entire_score);
		else if (user_choice == 4)
		{
			printf("게임을 종료합니다.\n");
			break;
		}
		else
			continue;
	}
	return 0;
}


