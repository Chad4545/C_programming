//3명의 학생의 4과목에 대한 성적 처리 
#include <stdio.h>

int main(void) {

    int student, class;
    float score, total, average;

    for (student=0;student<3;student++){
        total = 0;
        for(class=0;class<4;class++){
            printf("%d번째 학생의 %d번째 과목 성적:",student+1, class+1);
            scanf("%f",&score);
            total = total + score;
        }
        average = total/ 4.0;
        printf("%d번째 학생의 성적평균: %f\n",student+1, average);
    }
    return 0;
}
