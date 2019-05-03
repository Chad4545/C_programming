#include <stdio.h>
int main(void){
    int score;
    printf("성적을 입력하시오: ");
    scanf("%d",&score);

    switch(score/10){
        case 10:
        case 9:
        printf("수\n");
        break;
        default:
        printf("가\n");
        break;
    }
}
