// Program for Educational Game

#include "my.h"

int entire_score;
int main(void){
    int user_choice = 0;
    while(1)
    {
        printf("1) 산수가 좋아\n");
        printf("2) 비밀을 맞춰봐\n");
        printf("3) 점수보기\n");
        printf("4) 끝내기\n");
        printf("메뉴를 선택하세요: \n");
        scanf("%d",&user_choice);
        printf("\n");

        switch(user_choice)
        {
            case 1:
                arithGame();
                break;
            case 2:
                findSecret();
                break;
            case 3:
                printf("지금까지의 점수는 %d입니다.\n",entire_score);
                break;
            case 4:
                printf("게임을 종료합니다.\n");
                break;
            default:
                break;
        }
    }
    return 0;
}