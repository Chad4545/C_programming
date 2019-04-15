#include <stdio.h>
#include <math.h>
double make_dist(int a, int b, int c, int d);

int main(void)
{
	int a, b, c, d;
	double distance;
	char yes_or_no;
	while (1) {

		printf("첫 번째 점의 좌표를 입력하시오: ");
		scanf("%d %d", &a, &b);
		printf("두 번째 점의 좌표를 입력하시오: ");
		scanf("%d %d", &c, &d);

		distance = make_dist(a, b, c, d);
		printf("두 점  사이의 거리는 %f 입니다.", distance);
;

		while (1) {
			printf("다시 수행하시겠습니까?(y/n): ");
			scanf(" %c", &yes_or_no);
			if (yes_or_no != 'y' && yes_or_no != 'n') {
				printf("다시 입력하세요~\n");
				continue;
			}
			else
				break;
			}
		if (yes_or_no == 'y')
			continue;
		else
			break;
	}
}
double make_dist(int a, int b, int c, int d)
{
	double dist;
	dist = sqrt(pow((a*1.0-c),2.0) + pow((b*1.0-d),2.0));
	return dist;
}