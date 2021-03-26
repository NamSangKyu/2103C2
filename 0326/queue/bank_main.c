#include <stdio.h>
#include "bank_wait_queue.h"

int main(void) {
	int no = 0, temp;
	Queue* queue = createQueue();
	do{
		printf("1. 대기번호 발급\n");
		printf("2. 대기중인 고객님 호출\n");
		printf("0. 프로그램 종료\n");
		printf("메뉴번호 입력 : ");
		scanf_s("%d", &no);
		switch (no) {
		case 1:
			temp = AddSchedule(queue);
			if (temp == -1)
				printf("대기열이 가득찼습니다. 잠시 기달려주세요\n");
			else
				printf("고객님 앞으로 대기중인 고객님이 총 %d 명입니다.\n", temp);
			break;
		case 2:
			temp = RunSchedule(queue);
			if (temp == 0)
				printf("대기중인 고객님이 없습니다\n");
			else
				printf("%d 고객님 N 창구로 가세요\n", temp);
			break;
		}
	} while (no != 0);
	return 0;
}