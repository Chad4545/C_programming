#include "my.h"

extern int entire_score;
static user_choice;
static user_max;
void game(int, int);

void arithGame() {
	// 먼저 사용자에게 1~3 사이의 선택을 하게 한다.
	while (1) {
		printf("1) 더하기 할래?\n");
		printf("2) 빼기 할래?\n");
		printf("3) 곱하기 할래?\n");
		printf("메뉴를 선택하세요: ");
		scanf("%d", &user_choice);

		if (user_choice >= 1 && user_choice <= 3)
			break;
	}
	// 사용자에게 사용할 최대 정수를 입력 받는다.
	while (1) {
		printf("\n");
		printf("게임에 사용할 최대 양의 정수 값(1 이상)을 입력하시오: ");
		scanf("%d", &user_max);
		if (user_max > 0)
			break;
	}

	switch (user_choice) {
	case 1:
		game(1, user_max);
		break;
	case 2:
		game(2, user_max);
		break;
	case 3:
		game(3, user_max);
		break;
	default:
		break;
	}
}

void game(int user_choice, int user_max) {
	int i = 0; // 5번 돌기 위해
	int count = 0; // 오답시 벌점추가
	int start, end, timespent; // 시간 소요 체크
	int current_score = 0; // 이번 게임에서의 점수
	double average_time = 0; // 평균시간체크

	//게임시작
	start = time(0);
	switch (user_choice) { 
	/*
	user_choice에 따라 덧셈, 뺄셈, 곱셈
	5번의 시행을 위해 기호상수 GAMECOUNT 5
	매 시행마다 새로운 난수 생성
	오답체크를 위해 먼저 answer을 생성 후 사용자 입력으로 만들어지는 user_answer을 비교
	오답인 경우 벌점 추가를 위해 위에서 선언한 count 증가 
	*/
	case 1:
		for (i = 0; i < GAMECOUNT; i++) {
			srand(time(NULL)); // 난수생성
			int first = (rand() % user_max) + 1;
			int second = (rand() % user_max) + 1;
			int answer = 0;
			int user_answer = 0 ;
			answer = first + second;
			printf("%d + %d = ", first, second);
			scanf(" %d", &user_answer);
			if (user_answer != answer)
			{
				count++;
				printf("오답입니다. 정답은 %d 입니다. 벌점 5초 추가 됩니다.\n", answer);
			}
		}
		break;
	case 2:
		for (i = 0; i < GAMECOUNT; i++) {
			srand(time(NULL)); // 난수생성
			int first = (rand() % user_max) + 1;
			int second = (rand() % user_max) + 1;
			int answer = 0;
			int user_answer = 0;
			answer = first - second;
			printf("%d - %d = ", first, second);
			scanf(" %d", &user_answer);
			if (user_answer != answer)
			{
				count++;
				printf("오답입니다. 정답은 %d 입니다. 벌점 5초 추가 됩니다.\n", answer);
			}
		}
		break;
	case 3:
		for (i = 0; i < GAMECOUNT; i++) {
			srand(time(NULL)); // 난수생성
			int first = (rand() % user_max) + 1;
			int second = (rand() % user_max) + 1;
			int answer = 0;
			int user_answer = 0;
			answer = first * second;
			printf("%d * %d = ", first, second);
			scanf(" %d", &user_answer);
			if (user_answer != answer)
			{
				count++;
				printf("오답입니다. 정답은 %d 입니다. 벌점 5초 추가 됩니다.\n", answer);
			}
		}
		break;
	default:
		break;
	}
	end = time(0);
	timespent = end - start; // 게임에 걸린 시간 
	timespent = (timespent + (count * 5)) ; // 벌점 추가 후 총 걸린 시간 평균
	average_time = (double)timespent / 5.0;
	// 이번 게임 점수 
	if (average_time < 1)
		current_score += 10;
	else if (average_time < 2)
		current_score += 9;
	else if (average_time < 3)
		current_score += 8;
	else if (average_time < 4)
		current_score += 7;
	else if (average_time < 5)
		current_score += 6;
	else if (average_time < 6)
		current_score += 5;
	else if (average_time < 7)
		current_score += 4;
	else if (average_time < 8)
		current_score += 3;
	else if (average_time < 9)
		current_score += 2;
	else if (average_time < 10)
		current_score += 1;
	else
		current_score += 0;

	printf("\n");
	printf("문제당 평균 %.2lf 초의 시간이 소요되었으며, 이번 게임의 점수는 %d입니다.\n", average_time, current_score);

	// 누적 점수
	entire_score += current_score;



}