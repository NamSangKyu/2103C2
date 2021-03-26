#pragma once
#ifndef __STACK_H__
#define __STACK_H__
typedef struct stack {
	int top;
	int size;
	int* s;
}Stack;

Stack stack;
//스택 초기화 하는 부분
void Init(int size);
//스택에 데이터를 추가하는 부분
void Push(int value);
//스택에 있는 데이터를 뽑는 부분
int Pop();
#endif