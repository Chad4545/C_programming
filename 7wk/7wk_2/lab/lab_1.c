#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>
#include <conio.h>
#include <curses.h> // for Mac
#include <Cocoa.h>  // for Mac

//#include <conio.h> //getch를 위한 헤더파일
//#include <Windows.h>//gotoxy안에서 사용되는 내장함수
//방향키 확장키; 위 아래 좌 우 72 80 75 77
// 방향키 입력시 = 224 + 해당 방향키의 값  // 
// char는 1byte 로 127까지 표현가능 , 방향키의 경우 224가 디폴트로 전달되기 때문에 int형으로 주어야 함 

void gotoxy(int x, int y) {
	COORD Cur = { x,y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Cur);
}
int main() {
	int x = 40, y = 12, ch;
	while (1) {

		gotoxy(x, y);
		printf("*");
		ch = getch();
		
		if (ch == 224) {
			ch = getch();

		}
		gotoxy(x, y);
		printf(" ");

		switch (ch) {
		case 72:
			y--;
			break;
		case 80:
			y++;
			break;
		case 75:
			x--;
			break;
		case 77:
			x++;
			break;
		}
	}
}