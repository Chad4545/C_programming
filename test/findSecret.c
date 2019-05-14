#include "my.h"

extern int entire_score;
static int user_max;
int find_number(int);
int how_long(int);
void score(int,int,int);

void findSecret()
{
    int start,end,timespent;
    int howlong = 0;
    int current_score = 0;
    int tries = 0;

    // take max_number from user
    while(1)
    {
        printf("게임에 사용할 최대 양의 정수 값(1 이상)을 입력하시오: ");
        scanf("%d",&user_max);
        printf("\n");
        if(user_max>0)
            break;
    }

    //get into real game
    start = time(0);
    tries = find_number(user_max);
    end = time(0);
    timespent = end - start;
    howlong = how_long(user_max);
    score(tries,howlong,timespent);
    
    
}

int find_number(int user_max)
{
    int count = 0;
    int answer = 0;
    int user_guess = 0;
    srand(time(0));
    answer = (rand()%user_max) + 1;

    while(1)
    {
        count ++;
        printf("비밀 값을 추측해 보세요: ");
        scanf("%d",&user_guess);

        if(user_guess<answer)
            printf("입력 값이 너무 작습니다.\n");
        else if(user_guess>answer)
            printf("입력 값이 너무 큽니다.\n");
        else
            break;
    }
    printf("정답입니다. \n");
    return count;
}

int how_long(int n)
{
    int i = 0;
    while(n>0)
    {
        i++;
        n/=10;
    }
    return i;
}

void score(int tries, int howlong, int timespent)
{   
    int current_score = 0;
    double after_howlong = 0;
    printf("걸린시간 %d\n", timespent);

    after_howlong = timespent/(2.0*howlong);
	
	// 이번 게임 점수 
	if (after_howlong < 1)
		current_score += 10;
	else if (after_howlong < 2)
		current_score += 9;
	else if (after_howlong < 3)
		current_score += 8;
	else if (after_howlong < 4)
		current_score += 7;
	else if (after_howlong < 5)
		current_score += 6;
	else if (after_howlong < 6)
		current_score += 5;
	else if (after_howlong < 7)
		current_score += 4;
	else if (after_howlong < 8)
		current_score += 3;
	else if (after_howlong < 9)
		current_score += 2;
	else if (after_howlong < 10)
		current_score += 1;
	else
		current_score += 0;
    
	printf("축하합니다. 총 %d 초 동안 %d 번의 시도로 성공하였습니다.\n", timespent, tries);
	printf("이번 게임의 점수는 %d입니다.\n", current_score);
	// 누적 점수
	entire_score += current_score;
}