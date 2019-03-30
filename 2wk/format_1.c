/*형식지정자*/

#include <stdio.h>

int main(void){

    int pages = 231;

    printf("%d\n",pages);
    printf("%2d\n",pages); //최소 2칸 우측정렬
    printf("%3d\n",pages); //최소 3칸 우측정렬
    printf("%4d\n",pages); //최소 4칸 우측정렬
    printf("%10d\n",pages); // 최소 10칸 우측정렬
    printf("%-10d\n",pages); // 최소 10칸 좌측정렬
    printf("%+10d\n",pages); // 최소 10칸 우측정렬 부호표시

    return 0;
}