#include <stdio.h>
int main(void){
    int i, j;
    char ch;
    for(i=0;i<=5;i++)//줄바꾸기
    {
        for(ch=('F');ch>=('F'-i);ch--)//알파벳
        {
            printf("%c",ch);
        }
        printf("\n");
    }
    return 0;
}