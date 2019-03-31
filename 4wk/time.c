#include <stdio.h>
#include <math.h>

#define HOURTOSEC 3600
#define MINTOSEC 60

int main(void){
    float speed, dist;
    int hour, minute, sec;

    printf("Enter the speed <km/h>: ");
    scanf("%f",&speed);

    printf("Enter the driving distance <km>: ");
    scanf("%f",&dist);

    float total_time_sec = dist/speed * HOURTOSEC; // 초단위로 표현된 총 시간 13866.6666

    hour = total_time_sec/ HOURTOSEC; // 3
    total_time_sec -= hour*HOURTOSEC; // total_time updata

    minute = total_time_sec/MINTOSEC; // 51
    total_time_sec -= minute*MINTOSEC; // total_time updata

    sec = total_time_sec;

    printf("The total driving time is %d hours %d minutes %d seconds.",hour,minute,sec);
    return 0;




    


}