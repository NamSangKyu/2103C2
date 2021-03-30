#include <stdio.h>
#include <stdlib.h>
#include "list.h"
void AddNode(List* list) {
	//저장할 데이터 (숫자) 입력
	int num;
	printf("추가할 데이터 입력 : ");
	scanf_s("%d", &num);
	//malloc 이용해서 Node 하나 생성
	Node* node = (Node*)malloc(sizeof(Node));
	//생성한 노드에 val에 입력한 데이터를 저장
	node->val = num;
	//next 포인터에는 NULL로 초기화
	node->next = NULL;
	
	//맨마지막 노드 탐색
	//	첫번째 노드 부터 다음노드 이동 마지막까지 이동
	//	next포인터가 NULL 노드가 마지막 노드
	Node* temp = list->header;
	//처음 데이터가 저장되는 경우, header가 NULL 일때
	if (temp == NULL) {
		list->header = node;
		list->count++;
		return;
	}
	while (temp->next != NULL) {
		temp = temp->next;
	}
	//마지막 노드 next 포인터에 생성 노드의 주소를 저장
	temp->next = node;
	list->count++;
}
void PrintAllNode(List* list) {
	//list에서 header 정보를 읽어옴
	Node* temp = list->header;
	if (temp == NULL) {
		printf("저장된 데이터가 없습니다.\n");
		return;
	}
	//반복문에서 다음 노드로 가기전에 데이터를 출력
	while (1) {
		printf("%d->", temp->val);
		if (temp->next == NULL) {
			printf("NULL\n");
			break;
		}
		temp = temp->next;//다음 노드로 이동
	}
}
void Init(List* list) {
	list->count = 0;
	list->header = NULL;
}
Node* SearchNode(List* list) {
	//검색할 데이터를 입력
	int n;
	printf("검색할 데이터 입력 : ");
	scanf_s("%d", &n);
	//리스트에 header 포인터를 복사 받음
	Node* temp = list->header;
	//처음부터 마지막까지 탐색을 하면서 비교
	while (temp != NULL) {
	//데이터를 찾았을때 ---> 해당 노드의 주소값
		if (temp->val == n)
			return temp;//데이터를 찾으면 이 시점에서 함수가 종료
		temp = temp->next;
	}
	//데이터를 못찾았을떄 ---> NULL
	return NULL;
}

void UpdateNode(List* list)
{
	//대상의 데이터로 검색
	Node* node = SearchNode(list);
	//Node가 NULL이 아닌지 체크
	if (node != NULL) {
	//	검색해서 찾은 Node에 수정할 값을 저장
	//	수정할 값을 입력
		printf("수정할 데이터를 입력하세요 : ");
		scanf_s("%d", &node->val);
		printf("데이터 수정 성공\n");
	}
	else {
		printf("데이터 수정할 데이터가 없습니다.\n");
	}
}

void DeleteNode(List* list)
{
	Node* temp, * back;
	//삭제할 데이터를 입력
	int n;
	printf("삭제할 데이터를 입력 하세요 : ");
	scanf_s("%d", &n);

	temp = list->header;
	back = NULL;
	//삭제할 데이터를 검색
	//	다음노드로 이동하기전에 
	//  이전 노드 저장하는 포인터에 현재 노드 포인터를 저장
	//  다음 노드로 이동
	while (temp != NULL) {
	//	삭제할 노드를 찾았을때
	//		현재 노드의 next 포인터를 이전 노드의 next 포인터에 저장
	//		현재 노드를 할당 해제
		if (temp->val == n) {
			//삭제할 데이터가 header(맨처음 노드)일 경우
			if (back == NULL)
				list->header = temp->next;
			else
				back->next = temp->next;
			free(temp);//동적할당 해제
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










