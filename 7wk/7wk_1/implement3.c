#include <stdio.h>
#include <math.h>
double make_dist(int a, int b, int c, int d);

int main(void)
{
	int a, b, c, d;
	double distance;
	char yes_or_no;
	while (1){

		printf("ù ��° ���� ��ǥ�� �Է��Ͻÿ�: ");
		scanf("%d %d", &a, &b);
		printf("�� ��° ���� ��ǥ�� �Է��Ͻÿ�: ");
		scanf("%d %d", &c, &d);

		distance = make_dist(a, b, c, d);
		printf("�� ��  ������ �Ÿ��� %f �Դϴ�.", distance);

		printf("�ٽ� �����Ͻðڽ��ϱ�?(y/n): ");
		scanf(" %c", &yes_or_no);

		if (yes_or_no == 'n')
			break;
		else
			continue;		
	}
}
double make_dist(int a, int b, int c, int d)
{
	double dist;
	dist = sqrt(pow((a*1.0-c),2.0) + pow((b*1.0-d),2.0));
	return dist;
}