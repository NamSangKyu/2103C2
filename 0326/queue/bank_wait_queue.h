#pragma once
#ifndef __QUEUE_H__
#define __QUEUE_H__
#define QUEUE_SIZE 10
typedef struct queue {
	int schedule[QUEUE_SIZE];
	int front;
	int rear;
	int no;//��⿭ ��ȣǥ
}Queue;

//	           ��⿭ �߰�
int AddSchedule(Queue* queue);
//             ������� �� ȣ��
int RunSchedule(Queue* queue);
//ť ���� �� �ʱ�ȭ
Queue* createQueue();
#endif