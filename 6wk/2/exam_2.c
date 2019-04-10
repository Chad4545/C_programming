// 중첩 for 문을 이용하여 *기호를 사각형 모양으로 출력하는 프로그램
#include <stdio.h>
int main (void){
    int row, column;
    for (row=0;row<5;row++){
        for(column=0;column<10;column++){
            printf("*");
        }
        printf("\n");
    }
}