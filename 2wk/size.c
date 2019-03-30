#include <stdio.h>

int main(void){
    //인트형 비교
    short year = 0;
    int sale = 0;
    long total_sale = 0;

    year = 10;
    sale = 200000000;
    total_sale = year * sale;

    printf("total_sale = year * sale:  %d\n",total_sale);

    printf("short형의 크기  %d 바이트\n",sizeof(year));
    printf("int형의 크기  %d 바이트\n",sizeof(sale));
    printf("long형의 크기  %d 바이트\n",sizeof(total_sale));

    printf("%d", sizeof(13));
    return 0;

}