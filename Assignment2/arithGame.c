/*arithGame.c*/

#include "my.h"
extern int entire_score;
static int user_choice;
static int user_max;
double game(int,int);
static void score(double);


void arithGame()
{   
    // 유저에게 user_choice의 값을 할당받는다.
    while(1)
    {
        printf("1) 더하기 할래?\n");
        printf("2) 빼기 할래?\n");
        printf("3) 곱하기 할래?\n");
        printf("메뉴를 선택하세요: ");
        scanf("%d", &user_choice);
        printf("\n");

        if (user_choice >=1 && user_choice <=3)
            break;
    }

    // 유저에게 user_max의 값을 할당받는다.
    while(1)
    {
        printf("\n");
        printf("게임에 사용할 최대 양의 정수 값(1 이상)을 입력하시오: ");
        scanf("%d", &user_max);
        if (user_max>0)
            break;
    }

    // get into real game
    switch(user_choice)
    {
        case 1:
            score(game(1, user_max));
            break;

        case 2:
            score(game(2, user_max));
            break;

        case 3:
            score(game(3, user_max));
            break;

        default:
            break;
    }

    // print score 
}

double game(int user_choice, int user_max)
{
    int i = 0; // for 5 iterate 
    int count = 0; // for penalty scort
    int start, end, timespent; // for time spent
    double average_time = 0; // average time

    // start game
    start = time(0);
    switch(user_choice)
    {
     case 1:
        for(i=0;i<GAMECOUNT;i++)
        {
            srand(time(0));
            int first = (rand()%user_max) + 1;
            int second = (rand()%user_max) + 1;
            int answer = 0;
            int user_answer = 0;
            answer = first + second;

            printf("%d + %d = ",first,second);
            scanf(" %d",&user_answer);

            if (user_answer != answer)
            {
                count++;
                printf("오답입니다. 정답은 %d 입니다. 벌점 5점 추가 됩니다.\n",answer);
                printf("\n");
            }
        }
        break;

    case 2:
        for(i=0;i<GAMECOUNT;i++)
        {
            srand(time(0));
            int first = (rand()%user_max) + 1;
            int second = (rand()%user_max) + 1;
            int answer = 0;
            int user_answer = 0;
            answer = first - second;

            printf("%d - %d = ",first,second);
            scanf(" %d",&user_answer);

            if (user_answer != answer)
            {
                count++;
                printf("오답입니다. 정답은 %d 입니다. 벌점 5점 추가 됩니다.\n",answer);
            }        
        } 
        break;      

    case 3:
        for(i=0;i<GAMECOUNT;i++)
        {
            srand(time(0));
                int first = (rand()%user_max) + 1;
                int second = (rand()%user_max) + 1;
                int answer = 0;
                int user_answer = 0;
                answer = first * second;

                printf("%d * %d = ",first,second);
                scanf(" %d",&user_answer);

                if (user_answer != answer)
                {
                    count++;
                    printf("오답입니다. 정답은 %d 입니다. 벌점 5점 추가 됩니다.\n",answer);
                }
        }
        break;

    default:    
        break;
    }
    
    end = time(0);
    timespent = end - start;
    timespent = (count*5) + timespent;
    average_time = (double)timespent / 5.0;

    return average_time;
}


static void score(double average_time)
{   
    int current_score = 0; // score for this round
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
    //누적점수 
    entire_score += current_score;
	printf("\n");
	printf("문제당 평균 %.2lf 초의 시간이 소요되었으며, 이번 게임의 점수는 %d입니다.\n", average_time, current_score);
}