#pragma once
#ifndef __STACK_H__
#define __STACK_H__
typedef struct stack {
	int top;
	int size;
	int* s;
}Stack;

Stack stack;
//���� �ʱ�ȭ �ϴ� �κ�
void Init(int size);
//���ÿ� �����͸� �߰��ϴ� �κ�
void Push(int value);
//���ÿ� �ִ� �����͸� �̴� �κ�
int Pop();
#endif