#include <stdio.h>
#include "queue.h"

int main(void) {
	int no = 0, temp;
	Queue* queue = createQueue();
	do{
		printf("1. 스케줄 추가\n");
		printf("2. 스케줄 실행\n");
		printf("0. 프로그램 종료\n");
		printf("메뉴번호 입력 : ");
		scanf_s("%d", &no);
		switch (no) {
		case 1:
			printf("추가할 스케줄 번호 : ");
			scanf_s("%d", &temp);
			AddSchedule(queue,temp);
			break;
		case 2:
			temp = RunSchedule(queue);
			printf("%d 스케줄 실행\n", temp);
			break;
		}
	} while (no != 0);
	return 0;
}