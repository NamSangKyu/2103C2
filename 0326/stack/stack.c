#include <stdio.h>
#include <stdlib.h>
#include "stack.h"

void Init(int size) {
	//stack 초기화
	stack.s = (int*)malloc(sizeof(int) * size);
	stack.size = size;
	stack.top = 0;
	printf("Stack 초기화 완료\n");
}
//value가 stack에 추가할 데이터
void Push(int value) {
	//데이터를 등록
	if (stack.size == stack.top)//더이상 저장할 공간이 없다.
	{
		printf("더이상 저장할 공간이 없습니다.\n");
		return;
	}
	stack.s[stack.top++] = value;//저장 후에 top 증가
	printf("데이터 Push 성공\n");
}
//stack에서 뽑는 데이터를 리턴
int Pop() {
	//데이터를 뽑음
	if (stack.top == 0) {//이때는 데이터가 없다.
		printf("뽑을 데이터가 없습니다.\n");
		return -99999;
	}
	return stack.s[--stack.top];
}