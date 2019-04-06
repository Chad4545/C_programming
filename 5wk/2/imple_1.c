/*IF and SWITCH를 사용하여 소문자에 대한 자모 분류*/

#include <stdio.h>

int main(void){

    char test;

    printf("문자를 입력하세요: ");
    scanf("%c",&test);
    
    if (!(test>='a' && test<='z'))
        printf("소문자가 아닙니다.");
    else{
        switch (test)
        {
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
                printf("%c는 모음입니다.",test);
                break;
            default:
                printf("%c는 자음입니다.",test);
                break;
        }
    }
}

