/*문자 하나를 입력 받은 후, 자음인지 모음인지 판단하는 프로그램
알파벳(소문자)가 아닌 경우에는 "알파벳 소문자가 아닙니다." 라고 출력
a e i o u는 모음, 그 외의 알파벳은 모두 자음 */

#include <stdio.h>
int main(void) {
	char test;
	printf("문자를 입력하세요: ");
	scanf("%c",&test);

	if (test < 'a' && test > 'z'){
		printf("알파벳 소문자가 아닙니다.");
	}
	else{
		if(test=='a' ||test=='e' ||test=='i' ||test=='o' ||test=='u')
			printf("%c는 모음입니다.",test);
		else
			printf("%c는 자음입니다. ",test);
	}
		
	}


