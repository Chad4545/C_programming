/*형식지정자 f 와 e를 활용한 실수표현*/
#include <stdio.h>
int main(void)
{
    float rent=3852.99;
    
    printf("%f\n",rent);
    printf("%4.2f\n",rent);
    printf("%+4.2f\n",rent);
    printf("%3.1f\n",rent);
    printf("%8.1f\n",rent);
    printf("%019.2f\n",rent);
    

    printf("%e\n",rent);
    printf("%10.3e\n",rent);
    printf("%10.4e\n",rent);
    printf("%10.5e\n",rent);
    return 0;
}