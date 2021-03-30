#include <stdio.h>
#include "list.h"

int main(void) {
	List list;
	
	Init(&list);

	AddNode(&list); AddNode(&list); AddNode(&list);
	AddNode(&list); AddNode(&list); AddNode(&list);
	printf("현재 노드 개수 : %d\n", CountNode(&list));
	PrintAllNode(&list);
	/*Node* temp = SearchNode(&list);
	if (temp == NULL)
		printf("찾는 데이터가 없습니다.\n");
	else
		printf("검색 성공 : %d\n", temp->val);*/
	/*UpdateNode(&list);*/
	DeleteNode(&list);
	PrintAllNode(&list);
	printf("현재 노드 개수 : %d\n", CountNode(&list));
	return 0;
}