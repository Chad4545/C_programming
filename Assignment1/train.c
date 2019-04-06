#include <stdio.h>
#define MINUTE 60

int main(void) {

    int distance,first_speed,second_speed,hour,min,sec;
    float time_to_crush,first_dist, second_dist;

    printf("두 기차 사이의 거리(km)를 입력하시오:\n");
    scanf("%d",&distance); // int
    printf("첫 번째 기차의 속도 (km/h)를 입력하시오:\n");
    scanf("%d", &first_speed); // int
    printf("두 번째 기차의 속도 (km/h)를 입력하시오:\n");
    scanf("%d", &second_speed); // int

    time_to_crush = distance/(float)((first_speed + second_speed));
    // 시간(시간위) ;float 0.857143
    first_dist = first_speed * time_to_crush; // float 10.285714
    second_dist = distance - first_dist; // float 13.714286
    
    time_to_crush = time_to_crush*(MINUTE*MINUTE); //float 3085.714355
    sec = (int)time_to_crush % MINUTE + (time_to_crush - (int)time_to_crush);
    min = ((int)time_to_crush / MINUTE) % MINUTE;
    hour = (int)time_to_crush / (MINUTE * MINUTE);

    printf("충돌까지 총 %.3f 분 (%d 시간 %d 분 %d 초)가 소요됩니다.\n",time_to_crush/(MINUTE),hour,min,sec);
    printf("첫 번째 기차의 운행 거리는 총 %.2f (km) 입니다.\n",first_dist);
    printf("두 번째 기차의 운행 거리는 총 %.2f (km) 입니다.\n",second_dist);



}