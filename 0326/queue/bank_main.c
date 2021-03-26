#include <stdio.h>
#include "bank_wait_queue.h"

int main(void) {
	int no = 0, temp;
	Queue* queue = createQueue();
	do{
		printf("1. ����ȣ �߱�\n");
		printf("2. ������� ���� ȣ��\n");
		printf("0. ���α׷� ����\n");
		printf("�޴���ȣ �Է� : ");
		scanf_s("%d", &no);
		switch (no) {
		case 1:
			temp = AddSchedule(queue);
			if (temp == -1)
				printf("��⿭�� ����á���ϴ�. ��� ��޷��ּ���\n");
			else
				printf("���� ������ ������� ������ �� %d ���Դϴ�.\n", temp);
			break;
		case 2:
			temp = RunSchedule(queue);
			if (temp == 0)
				printf("������� ������ �����ϴ�\n");
			else
				printf("%d ���� N â���� ������\n", temp);
			break;
		}
	} while (no != 0);
	return 0;
}