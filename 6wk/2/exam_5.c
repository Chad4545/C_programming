// 소문자를 입력받아 대문자로 뱉는 프로그램
#include <stdio.h>

int main (void) {

    char letter = 0;
    while(1){
    printf("소문자를 입력하세요: ");
    //scanf(" %c",&letter);
    while((letter=getchar())!='\n');
    
    if (letter =='Q')
        break;
    if (letter<'a' || letter>'z')
        continue;

    letter = 'A' + (letter-'a');
    printf("변환된 대문자는 %c 입니다.\n",letter);
    }
}