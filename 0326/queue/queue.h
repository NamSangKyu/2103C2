#pragma once
#ifndef __QUEUE_H__
#define __QUEUE_H__
#define QUEUE_SIZE 10
typedef struct queue {
	int schedule[QUEUE_SIZE];
	int front;
	int rear;
}Queue;

//	           ������ ����� ť, ����� ��
void AddSchedule(Queue* queue, int val);
//             �����͸� ���� ť
int RunSchedule(Queue* queue);
//ť ���� �� �ʱ�ȭ
Queue* createQueue();
#endif