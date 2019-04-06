#include <stdio.h>
//#include <stdint.h> 
// int8_t 사용시 ; 20명이하의 사람 수 , 10 미만의 테이블 간격을 위한 변수 선언
// 하지만 이번 과제에서는 unsigned char를 활용하여 127 이하의 양의 정수를 표현 


int main(void){

    short room_row, room_column, table_radius;
    short num_row_table, num_column_table;
    unsigned char table_gap, people;
    int result;

    //가로 == row == width,  세로 == column == height
    printf("What are the width and height of the room (in meters)?\n");
    scanf("%hd %hd",&room_row, &room_column); 
    printf("What is the radius of each table (in meters)?\n");
    scanf("%hd",&table_radius); 
    printf("How much space is required between tables (in meters)?\n");
    scanf("%hhu",&table_gap);
    printf("How many people does each table seat?\n");
    scanf("%hhu",&people);

    //가로 테이블 갯수
    num_row_table = (room_row-(table_gap))/(table_radius*2+table_gap);  
    printf("num_row_table: %hd\n",num_row_table);
    //세로 테이블 갯수
    num_column_table = (room_column-(table_gap))/(table_radius*2+table_gap);
    printf("num_column_table: %hd\n",num_column_table);

    // 총 테이블 * 테이블 당 인원
    result = num_column_table * num_row_table * people;
    printf("This arrangement seats %d people.\n",result);


}