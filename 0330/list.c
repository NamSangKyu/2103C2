#include <stdio.h>
#include <stdlib.h>
#include "list.h"
void AddNode(List* list) {
	//������ ������ (����) �Է�
	int num;
	printf("�߰��� ������ �Է� : ");
	scanf_s("%d", &num);
	//malloc �̿��ؼ� Node �ϳ� ����
	Node* node = (Node*)malloc(sizeof(Node));
	//������ ��忡 val�� �Է��� �����͸� ����
	node->val = num;
	//next �����Ϳ��� NULL�� �ʱ�ȭ
	node->next = NULL;
	
	//�Ǹ����� ��� Ž��
	//	ù��° ��� ���� ������� �̵� ���������� �̵�
	//	next�����Ͱ� NULL ��尡 ������ ���
	Node* temp = list->header;
	//ó�� �����Ͱ� ����Ǵ� ���, header�� NULL �϶�
	if (temp == NULL) {
		list->header = node;
		list->count++;
		return;
	}
	while (temp->next != NULL) {
		temp = temp->next;
	}
	//������ ��� next �����Ϳ� ���� ����� �ּҸ� ����
	temp->next = node;
	list->count++;
}
void PrintAllNode(List* list) {
	//list���� header ������ �о��
	Node* temp = list->header;
	if (temp == NULL) {
		printf("����� �����Ͱ� �����ϴ�.\n");
		return;
	}
	//�ݺ������� ���� ���� �������� �����͸� ���
	while (1) {
		printf("%d->", temp->val);
		if (temp->next == NULL) {
			printf("NULL\n");
			break;
		}
		temp = temp->next;//���� ���� �̵�
	}
}
void Init(List* list) {
	list->count = 0;
	list->header = NULL;
}
Node* SearchNode(List* list) {
	//�˻��� �����͸� �Է�
	int n;
	printf("�˻��� ������ �Է� : ");
	scanf_s("%d", &n);
	//����Ʈ�� header �����͸� ���� ����
	Node* temp = list->header;
	//ó������ ���������� Ž���� �ϸ鼭 ��
	while (temp != NULL) {
	//�����͸� ã������ ---> �ش� ����� �ּҰ�
		if (temp->val == n)
			return temp;//�����͸� ã���� �� �������� �Լ��� ����
		temp = temp->next;
	}
	//�����͸� ��ã������ ---> NULL
	return NULL;
}

void UpdateNode(List* list)
{
	//����� �����ͷ� �˻�
	Node* node = SearchNode(list);
	//Node�� NULL�� �ƴ��� üũ
	if (node != NULL) {
	//	�˻��ؼ� ã�� Node�� ������ ���� ����
	//	������ ���� �Է�
		printf("������ �����͸� �Է��ϼ��� : ");
		scanf_s("%d", &node->val);
		printf("������ ���� ����\n");
	}
	else {
		printf("������ ������ �����Ͱ� �����ϴ�.\n");
	}
}

void DeleteNode(List* list)
{
	Node* temp, * back;
	//������ �����͸� �Է�
	int n;
	printf("������ �����͸� �Է� �ϼ��� : ");
	scanf_s("%d", &n);

	temp = list->header;
	back = NULL;
	//������ �����͸� �˻�
	//	�������� �̵��ϱ����� 
	//  ���� ��� �����ϴ� �����Ϳ� ���� ��� �����͸� ����
	//  ���� ���� �̵�
	while (temp != NULL) {
	//	������ ��带 ã������
	//		���� ����� next �����͸� ���� ����� next �����Ϳ� ����
	//		���� ��带 �Ҵ� ����
		if (temp->val == n) {
			//������ �����Ͱ� header(��ó�� ���)�� ���
			if (back == NULL)
				list->header = temp->next;
			else
				back->next = temp->next;
			free(temp);//�����Ҵ� ����
			list->count--;
			return;
		}
		back = temp;
		temp = temp->next;
	}
}

int CountNode(List* list)
{
	return list->count;
}










