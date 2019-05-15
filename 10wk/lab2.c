#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>

int main(void)
{   
    // 최대 40개의 문자열 받음 
	char str[40];
	int i = 0;
    char yes_or_not;
    while(1)
    {   
        int arr[26] = {0};
        printf("40자 내외 문장입력\n");
        fgets(str,41,stdin);

        for (i = 0; i < strlen(str); i++) 
        {
            int check = str[i] - 'a';
            if(check >= 0 && check <= 25)
                arr[check]++;
            else
                continue;
        }

        for (i = 0; i < 26; i++) {
            printf("%c : %d  ", 'A' + i, arr[i]);
        }
        printf("\n");
        printf("계속하시겠습니까?(Y/N)\n");
        scanf("%c",&yes_or_not);
        while(getchar()!='\n');

        if(yes_or_not=='Y' || yes_or_not=='y')
            continue;
        else
            break;
        
    }
}
