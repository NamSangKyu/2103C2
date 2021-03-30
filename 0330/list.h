#pragma once
#ifndef __LIST_H__
#define __LIST_H__
typedef struct node {
	int val;
	struct node* next;
}Node;
typedef struct list {
	Node* header;
	int count;
}List;
//������(���) �߰�
void AddNode(List* list);
//����Ʈ �ʱ�ȭ
void Init(List* list);
//������ �˻�
Node* SearchNode(List* list);
//������ ����
void UpdateNode(List* list);
//������ ����
void DeleteNode(List* list);
//������ ���� ����
int CountNode(List* list);
//��ü ��� ���
void PrintAllNode(List* list);
#endif // __LIST_H__
