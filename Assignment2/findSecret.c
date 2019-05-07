#include "my.h"

extern int entire_score;  //누적점수
static user_max;          // 게임에 사용될 최대 정수
int find_game(int);       // 실제 게임 함수
int how_long(int);        // 사용된 최대 정수 자릿수

void findSecret() {
	int start, end, timespent; // 시간 소요 체크
	int used_num = 0;          // 몇자리 수 사용 체크
	int current_score = 0;     // 현재게임 점수
	int tries = 0;             // 시도 횟수
	// 사용자에게 사용할 최대 정수를 입력 받는다.
	while (1) {
		printf("게임에 사용할 최대 양의 정수 값(1 이상)을 입력하시오: ");
		scanf("%d", &user_max);
		printf("\n");
		if (user_max > 0)
			break;
	}
	//실제 게임 실행
	start = time(0); // 게임시작
	tries = find_game(user_max);
	end = time(0); // 게임 끝
	timespent = end - start; // 게임에 걸린 시간 
	used_num = how_long(user_max);
	timespent = timespent / (2.0*used_num);
	printf("걸린시간 %d\n", timespent);
	
	// 이번 게임 점수 
	if (timespent < 1)
		current_score += 10;
	else if (timespent < 2)
		current_score += 9;
	else if (timespent < 3)
		current_score += 8;
	else if (timespent < 4)
		current_score += 7;
	else if (timespent < 5)
		current_score += 6;
	else if (timespent < 6)
		current_score += 5;
	else if (timespent < 7)
		current_score += 4;
	else if (timespent < 8)
		current_score += 3;
	else if (timespent < 9)
		current_score += 2;
	else if (timespent < 10)
		current_score += 1;
	else
		current_score += 0;
	printf("축하합니다. 총 %.lf 초 동안 %d 번의 시도로 성공하였습니다.\n", timespent*(2.0*used_num), tries);
	printf("이번 게임의 점수는 %d입니다.\n", current_score);
	// 누적 점수
	entire_score += current_score;
}

int find_game(int user_max) {
	int count = 0; // 총 시도 횟수;
	int answer = 0; // 실제 답;
	int user_guess = 0; // 사용자 답
	srand(time(NULL)); // 난수생성
	answer = (rand() % user_max) + 1;
	while (1) {
		count++;
		printf("비밀 값을 추측해 보세요: ");
		scanf("%d", &user_guess);
		if (user_guess < answer)
			printf("입력 값이 너무 작습니다.\n");
		else if (user_guess > answer)
			printf("입력 값이 너무 큽니다.\n");
		else
			break;
	}
	printf("정답입니다. \n");
	return count;
}

int how_long(int n) {
	int i = 0;
	while (n > 0) {
		i++;
		n /= 10;
	}
	return i;
}