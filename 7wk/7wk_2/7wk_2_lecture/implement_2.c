#include <stdio.h>
#include <stdlib.h> // rand 를 위한 라이브러리
#include <time.h>

void get_random(int n) {
	int i;
	for (i = 0; i < n; i++)
		printf(" %6d\n", rand());
}

int main(void) {
	srand((unsigned)time(NULL)); // random seed 를 현재 시간으로 주어 매 실행시 다른 결과값이 
	get_random(10);
	return 0;
}