#include <stdio.h>
#include <stdlib.h>
#include "stack.h"

void Init(int size) {
	//stack �ʱ�ȭ
	stack.s = (int*)malloc(sizeof(int) * size);
	stack.size = size;
	stack.top = 0;
	printf("Stack �ʱ�ȭ �Ϸ�\n");
}
//value�� stack�� �߰��� ������
void Push(int value) {
	//�����͸� ���
	if (stack.size == stack.top)//���̻� ������ ������ ����.
	{
		printf("���̻� ������ ������ �����ϴ�.\n");
		return;
	}
	stack.s[stack.top++] = value;//���� �Ŀ� top ����
	printf("������ Push ����\n");
}
//stack���� �̴� �����͸� ����
int Pop() {
	//�����͸� ����
	if (stack.top == 0) {//�̶��� �����Ͱ� ����.
		printf("���� �����Ͱ� �����ϴ�.\n");
		return -99999;
	}
	return stack.s[--stack.top];
}