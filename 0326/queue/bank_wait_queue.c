#include <stdio.h>
#include <stdlib.h>
#include "bank_wait_queue.h"
int AddSchedule(Queue* queue) {
	if ((queue->rear + 1) % QUEUE_SIZE == queue->front) 
		return -1;
	queue->schedule[queue->rear] = ++queue->no;
	queue->rear = (queue->rear + 1) % QUEUE_SIZE;
	return queue->no - queue->schedule[queue->front];
}
int RunSchedule(Queue* queue) {
	int temp;
	if (queue->front == queue->rear) 
		return 0;
	temp = queue->schedule[queue->front];
	queue->front = (queue->front + 1) % QUEUE_SIZE;
	return temp;
}
Queue* createQueue() {
	Queue* queue = (Queue*)malloc(sizeof(Queue));
	queue->front = queue->rear = 0;
	queue->no = 0;
	return queue;
}


