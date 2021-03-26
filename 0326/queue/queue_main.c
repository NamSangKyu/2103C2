#include <stdio.h>
#include "queue.h"

int main(void) {
	int no = 0, temp;
	Queue* queue = createQueue();
	do{
		printf("1. ������ �߰�\n");
		printf("2. ������ ����\n");
		printf("0. ���α׷� ����\n");
		printf("�޴���ȣ �Է� : ");
		scanf_s("%d", &no);
		switch (no) {
		case 1:
			printf("�߰��� ������ ��ȣ : ");
			scanf_s("%d", &temp);
			AddSchedule(queue,temp);
			break;
		case 2:
			temp = RunSchedule(queue);
			printf("%d ������ ����\n", temp);
			break;
		}
	} while (no != 0);
	return 0;
}