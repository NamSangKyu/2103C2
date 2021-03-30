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
//데이터(노드) 추가
void AddNode(List* list);
//리스트 초기화
void Init(List* list);
//데이터 검색
Node* SearchNode(List* list);
//데이터 수정
void UpdateNode(List* list);
//데이터 삭제
void DeleteNode(List* list);
//데이터 개수 리턴
int CountNode(List* list);
//전체 노드 출력
void PrintAllNode(List* list);
#endif // __LIST_H__
