#include <stdio.h>
#include <stdlib.h>
#include "queue.h"
void AddSchedule(Queue* queue, int val) {
	if ((queue->rear + 1) % QUEUE_SIZE == queue->front) {
		printf("ť�� ������ �ֽ��ϴ�.\n");
		return;
	}
	queue->schedule[queue->rear] = val;
	queue->rear = (queue->rear + 1) % QUEUE_SIZE;
}
int RunSchedule(Queue* queue) {
	int temp;
	if (queue->front == queue->rear) {
		printf("ť�� ��� �ֽ��ϴ�.\n");
		return -99999;
	}
	temp = queue->schedule[queue->front];
	queue->front = (queue->front + 1) % QUEUE_SIZE;
	return temp;
}
Queue* createQueue() {
	Queue* queue = (Queue*)malloc(sizeof(Queue));
	queue->front = queue->rear = 0;
	return queue;
}


