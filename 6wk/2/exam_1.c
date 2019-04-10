// 반복을 이용한 프로그램 
#include <stdio.h>
int main (void){

    char answer = 'm';
    char guess = 0; // 초기값은 매우 중요하다
    int tries = 0; // 초기값은 매우 중요하다

    do{
        printf("정답을 추측하여 보세요:\n");
        scanf(" %c",&guess);  // scanf로 문자를 받을떄 앞에 공백을 하나 입력해주는 이유...공부하기 
        tries = tries + 1;

        if(guess > answer)
            printf("제시한 문자의 아스키 코드 값이 높습니다. \n");
        if(guess < answer)
            printf("제시한 문자의 아스키 코드 값이 낮습니다. \n");
    }while(guess != answer);

    printf("축하합니다. 시도 횟수: %d\n",tries); // 왜 tries  값이 3만따리가 나올까... 고민해보기 
    return 0;
}

