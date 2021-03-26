#pragma once
#ifndef __QUEUE_H__
#define __QUEUE_H__
#define QUEUE_SIZE 10
typedef struct queue {
	int schedule[QUEUE_SIZE];
	int front;
	int rear;
}Queue;

//	           데이터 등록할 큐, 등록할 값
void AddSchedule(Queue* queue, int val);
//             데이터를 뽑을 큐
int RunSchedule(Queue* queue);
//큐 생성 및 초기화
Queue* createQueue();
#endif