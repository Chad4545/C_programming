#include "my.h"

extern int entire_score;  //��������
static user_max;          // ���ӿ� ���� �ִ� ����
int find_game(int);       // ���� ���� �Լ�
int how_long(int);        // ���� �ִ� ���� �ڸ���

void findSecret() {
	int start, end, timespent; // �ð� �ҿ� üũ
	int used_num = 0;          // ���ڸ� �� ��� üũ
	int current_score = 0;     // ������� ����
	int tries = 0;             // �õ� Ƚ��
	// ����ڿ��� ����� �ִ� ������ �Է� �޴´�.
	while (1) {
		printf("���ӿ� ����� �ִ� ���� ���� ��(1 �̻�)�� �Է��Ͻÿ�: ");
		scanf("%d", &user_max);
		printf("\n");
		if (user_max > 0)
			break;
	}
	//���� ���� ����
	start = time(0); // ���ӽ���
	tries = find_game(user_max);
	end = time(0); // ���� ��
	timespent = end - start; // ���ӿ� �ɸ� �ð� 
	used_num = how_long(user_max);
	timespent = timespent / (2.0*used_num);
	printf("�ɸ��ð� %d\n", timespent);
	
	// �̹� ���� ���� 
	if (timespent < 1)
		current_score += 10;
	else if (timespent < 2)
		current_score += 9;
	else if (timespent < 3)
		current_score += 8;
	else if (timespent < 4)
		current_score += 7;
	else if (timespent < 5)
		current_score += 6;
	else if (timespent < 6)
		current_score += 5;
	else if (timespent < 7)
		current_score += 4;
	else if (timespent < 8)
		current_score += 3;
	else if (timespent < 9)
		current_score += 2;
	else if (timespent < 10)
		current_score += 1;
	else
		current_score += 0;
	printf("�����մϴ�. �� %.lf �� ���� %d ���� �õ��� �����Ͽ����ϴ�.\n", timespent*(2.0*used_num), tries);
	printf("�̹� ������ ������ %d�Դϴ�.\n", current_score);
	// ���� ����
	entire_score += current_score;
}

int find_game(int user_max) {
	int count = 0; // �� �õ� Ƚ��;
	int answer = 0; // ���� ��;
	int user_guess = 0; // ����� ��
	srand(time(NULL)); // ��������
	answer = (rand() % user_max) + 1;
	while (1) {
		count++;
		printf("��� ���� ������ ������: ");
		scanf("%d", &user_guess);
		if (user_guess < answer)
			printf("�Է� ���� �ʹ� �۽��ϴ�.\n");
		else if (user_guess > answer)
			printf("�Է� ���� �ʹ� Ů�ϴ�.\n");
		else
			break;
	}
	printf("�����Դϴ�. \n");
	return count;
}

int how_long(int n) {
	int i = 0;
	while (n > 0) {
		i++;
		n /= 10;
	}
	return i;
}