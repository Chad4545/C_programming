// 짝수 합만 뱉는 프로그램 

#include <stdio.h>
int main (void){
    int sum =0, i = 0;
    for (i=0;i<100;i++){
        if(i%2 == 1)
            continue;
        sum = sum + i;

    }
    printf("sum = %d\n",sum);
}