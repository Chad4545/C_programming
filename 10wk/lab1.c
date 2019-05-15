#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>


// 기억력 테스트 프로그램 
int main(void)
{
	int i = 0;
	char word[6];
	char user_str[6];
	char yes_or_no;
	while (1) {

		srand(time(NULL));
		for (i = 0; i < 5; i++)
		{
			word[i] = 'a' + rand() % 26;
		}
		
		word[i] = '\0';


		printf("%s\n", word);
		//2초 지연
		usleep(2000000);
		system("clear");

		printf("기억나는 문자열을 입력하시오 \n");

		fgets(user_str, 6, stdin);
		if (!strcmp(user_str, word))
			printf("정답입니다.\n");
		else
			printf("안타깝네요\n");

        while(getchar() != '\n'); 



		printf("계속하시겠습니까?(Y/N) \n");
		scanf("%c", &yes_or_no);
        while(getchar() != '\n'); 


		if (yes_or_no == 'N')
			break;
	}
	return 0;
}
