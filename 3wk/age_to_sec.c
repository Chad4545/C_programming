#include <stdio.h>


int main(void){

    int age;
    float age_second;


    printf("Enter your age: ");
    scanf("%d\n",&age);

    age_second = age * 3.156e7;

    printf("%d years old is %f in seconds\n", age, age_second);
    printf("Or %e in seconds\n",age_second);

    return 0;

}