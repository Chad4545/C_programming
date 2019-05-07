#include "my.h"

extern int entire_score;
static user_choice;
static user_max;
void game(int, int);

void arithGame() {
	// ���� ����ڿ��� 1~3 ������ ������ �ϰ� �Ѵ�.
	while (1) {
		printf("1) ���ϱ� �ҷ�?\n");
		printf("2) ���� �ҷ�?\n");
		printf("3) ���ϱ� �ҷ�?\n");
		printf("�޴��� �����ϼ���: ");
		scanf("%d", &user_choice);

		if (user_choice >= 1 && user_choice <= 3)
			break;
	}
	// ����ڿ��� ����� �ִ� ������ �Է� �޴´�.
	while (1) {
		printf("\n");
		printf("���ӿ� ����� �ִ� ���� ���� ��(1 �̻�)�� �Է��Ͻÿ�: ");
		scanf("%d", &user_max);
		if (user_max > 0)
			break;
	}

	switch (user_choice) {
	case 1:
		game(1, user_max);
		break;
	case 2:
		game(2, user_max);
		break;
	case 3:
		game(3, user_max);
		break;
	default:
		break;
	}
}

void game(int user_choice, int user_max) {
	int i = 0; // 5�� ���� ����
	int count = 0; // ����� �����߰�
	int start, end, timespent; // �ð� �ҿ� üũ
	int current_score = 0; // �̹� ���ӿ����� ����
	double average_time = 0; // ��սð�üũ

	//���ӽ���
	start = time(0);
	switch (user_choice) { 
	/*
	user_choice�� ���� ����, ����, ����
	5���� ������ ���� ��ȣ��� GAMECOUNT 5
	�� ���ึ�� ���ο� ���� ����
	����üũ�� ���� ���� answer�� ���� �� ����� �Է����� ��������� user_answer�� ��
	������ ��� ���� �߰��� ���� ������ ������ count ���� 
	*/
	case 1:
		for (i = 0; i < GAMECOUNT; i++) {
			srand(time(NULL)); // ��������
			int first = (rand() % user_max) + 1;
			int second = (rand() % user_max) + 1;
			int answer = 0;
			int user_answer = 0 ;
			answer = first + second;
			printf("%d + %d = ", first, second);
			scanf(" %d", &user_answer);
			if (user_answer != answer)
			{
				count++;
				printf("�����Դϴ�. ������ %d �Դϴ�. ���� 5�� �߰� �˴ϴ�.\n", answer);
			}
		}
		break;
	case 2:
		for (i = 0; i < GAMECOUNT; i++) {
			srand(time(NULL)); // ��������
			int first = (rand() % user_max) + 1;
			int second = (rand() % user_max) + 1;
			int answer = 0;
			int user_answer = 0;
			answer = first - second;
			printf("%d - %d = ", first, second);
			scanf(" %d", &user_answer);
			if (user_answer != answer)
			{
				count++;
				printf("�����Դϴ�. ������ %d �Դϴ�. ���� 5�� �߰� �˴ϴ�.\n", answer);
			}
		}
		break;
	case 3:
		for (i = 0; i < GAMECOUNT; i++) {
			srand(time(NULL)); // ��������
			int first = (rand() % user_max) + 1;
			int second = (rand() % user_max) + 1;
			int answer = 0;
			int user_answer = 0;
			answer = first * second;
			printf("%d * %d = ", first, second);
			scanf(" %d", &user_answer);
			if (user_answer != answer)
			{
				count++;
				printf("�����Դϴ�. ������ %d �Դϴ�. ���� 5�� �߰� �˴ϴ�.\n", answer);
			}
		}
		break;
	default:
		break;
	}
	end = time(0);
	timespent = end - start; // ���ӿ� �ɸ� �ð� 
	timespent = (timespent + (count * 5)) ; // ���� �߰� �� �� �ɸ� �ð� ���
	average_time = (double)timespent / 5.0;
	// �̹� ���� ���� 
	if (average_time < 1)
		current_score += 10;
	else if (average_time < 2)
		current_score += 9;
	else if (average_time < 3)
		current_score += 8;
	else if (average_time < 4)
		current_score += 7;
	else if (average_time < 5)
		current_score += 6;
	else if (average_time < 6)
		current_score += 5;
	else if (average_time < 7)
		current_score += 4;
	else if (average_time < 8)
		current_score += 3;
	else if (average_time < 9)
		current_score += 2;
	else if (average_time < 10)
		current_score += 1;
	else
		current_score += 0;

	printf("\n");
	printf("������ ��� %.2lf ���� �ð��� �ҿ�Ǿ�����, �̹� ������ ������ %d�Դϴ�.\n", average_time, current_score);

	// ���� ����
	entire_score += current_score;



}