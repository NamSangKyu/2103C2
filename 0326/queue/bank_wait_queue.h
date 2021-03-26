#pragma once
#ifndef __QUEUE_H__
#define __QUEUE_H__
#define QUEUE_SIZE 10
typedef struct queue {
	int schedule[QUEUE_SIZE];
	int front;
	int rear;
	int no;//대기열 번호표
}Queue;

//	           대기열 추가
int AddSchedule(Queue* queue);
//             대기중인 고객 호출
int RunSchedule(Queue* queue);
//큐 생성 및 초기화
Queue* createQueue();
#endif