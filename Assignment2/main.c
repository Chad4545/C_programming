//������ ���α׷�(PA2)
/*
main �׸� 1�� �ִ� �޴��� ȭ�鿡 ����ϰ�, ����� �Է��� ���� �� �ش��ϴ� ������ ������
�Լ��� ȣ��

����ڴ� ���ڸ� �Է��Ѵٰ� �����ϰ�, ����ó�� ����
����ڰ� ���ݱ��� ������ ������ ��������
���α׷��� ����ڰ� 4�� ������ ������ �ݺ������� ���� 

*/

#include "my.h"
int entire_score ; // ��������
int main(void) {
	int user_choice = 0;

	// ���� ����ڿ��� 1~4 ������ ������ �ϰ� �Ѵ�.
	while (1) {
		printf("1) ����� ����\n");
		printf("2) ����� �����\n");
		printf("3) ���� ����\n");
		printf("4) ������\n");
		printf("�޴��� �����ϼ���: ");
		scanf("%d", &user_choice);
		printf("\n");
		// ����, ������ ���ڿ� �´� �Լ��� ȣ���ϰų�, ���α׷��� �����Ѵ�.
		if (user_choice == 1)
			arithGame();
		else if (user_choice == 2)
			findSecret();
		else if (user_choice == 3)
			printf("���ݱ����� ������ %d �Դϴ�.\n", entire_score);
		else if (user_choice == 4)
		{
			printf("������ �����մϴ�.\n");
			break;
		}
		else
			continue;
	}
	return 0;
}


