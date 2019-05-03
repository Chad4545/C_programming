#include <stdio.h>
#include <conio.h> //getch를 위해서
#include <Windows.h>//gotoxy 안의 내장함수를 위해서
//방향키 확장키; 72 80 75 77
// 방향키 = 224 + 해당 키 값  // 방향키 누르면 자동으로 224가 맨 처음으로 들어감
// 224는 char로 표현 안됨 ; 그래서 char가 아닌 int로 선언 

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
		if (ch == 224)
			ch = getch();
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