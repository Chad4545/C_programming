#include <stdio.h>
//#include <stdint.h> 
// int8_t 사용시 ; 20명이하의 사람 수 , 10 미만의 테이블 간격을 위한 변수 선언
// 하지만 이번 과제에서는 unsigned char를 활용하여 127 이하의 양의 정수를 표현 

int main(void){

    //입력값의 범위가 주어진 조건에 맞는다고 가정하여, 서로 다른 자료형의 변수 생성
    // char - 1Bytes: -128~127 , short - 2Bytes : -32,768~32,767
    // int - 4Bytes : -2,147,483,648 ~ 2,147,438,647

    short room_row, room_column, table_row, table_column;
    short num_row_table, num_column_table;
    unsigned char table_gap, people; 
    int result;

    //가로 == row == width,  세로 == column == height
    printf("What are the width and height of the room (in meters)?\n");
    scanf("%hd %hd",&room_row, &room_column); // 50 30
    printf("What are the width and height of each table (in meters)?\n");
    scanf("%hd %hd",&table_row, &table_column); // 8 4
    printf("How much space is required between tables (in meters)?\n");
    scanf("%hhu",&table_gap);// 3
    printf("How many people does each table seat?\n");
    scanf("%hhu",&people);// 10 

    //가로 테이블 갯수
    num_row_table = (room_row-(table_gap))/(table_row+table_gap);  
    printf("num_row_table: %hd\n",num_row_table);
    //세로 테이블 갯수
    num_column_table = (room_column-(table_gap))/(table_column+table_gap);
    printf("num_column_table: %hd\n",num_column_table);

    // 총 테이블 * 테이블 당 인원
    result = num_column_table * num_row_table * people;
    printf("This arrangement seats %d people.\n",result);


}