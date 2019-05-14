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

        if (user_choice == 1)
            arithGame();
        else if(user_choice == 2)
            findSecret();
        else if(user_choice == 3)
            printf("지금까지의 점수는 %d입니다.\n",entire_score);
        else if(user_choice == 4)
            printf("게임을 종료합니다.\n");
        else    
            break;
    }
    return 0;
}