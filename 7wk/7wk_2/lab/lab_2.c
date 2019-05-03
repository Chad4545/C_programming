#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int set_random();
int decision(int, int);
void print_result(int);
int get_input();

int main(void)
{
    int computer, user, result;
    char sel;
    while(1)
    {
        computer = set_random(); // 0~2사이의 랜덤 값 반환
        user = get_input(); // 사용자 입력 정수 값 반환
        printf("\ncomputer: %d, user: %d \n", computer, user);

        result = decision(computer, user); // 무승부 0 사용자승리 1 컴퓨터승리 2 반환
        printf("%d\n",result);

        print_result(result);              // result를 받아서 적절한 문자열 출력 
        printf("\n\n게임 계속 진행하려면 아무키나 누르시오. 단,q를 누르면 끝납니다.");
		while ((sel = getchar()) == '\n');
		if (sel == 'q')
			break;
    }
}

int set_random(void){
    srand((unsigned)time(NULL));
    int i;
    i = rand()%10%3;
    return i;
}

int get_input(void)
{
    int key;
    printf("가위:0 , 바위:1, 보:2 중 하나를 입력하세요");
    scanf("%d",&key);
    return key;
}
//무승부 0 사용자 승리 1 컴퓨터 승리 2 반환 
int decision(int a, int b)
{
    int result;
    if (a == b)
        result = 0;
    else if (a-b == -1)
        result = 1;
    else if(a==2 && b == 1)
        result = 1;
    else
        result = 2;
    return result;
}

// 승패에 따라서 해당 문자열 출력
void print_result(int winloss){
    
    switch(winloss){
        case 0:
        printf("무승부 입니다.\n");
        break;
        case 1:
        printf("사용자 승리 입니다.\n");
        break;
        case 2:
        printf("컴퓨터 승리 입니다.\n");
        break;
    }

}