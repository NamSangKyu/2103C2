#include <stdio.h>
#include "list.h"

int main(void) {
	List list;
	
	Init(&list);

	AddNode(&list); AddNode(&list); AddNode(&list);
	AddNode(&list); AddNode(&list); AddNode(&list);
	printf("���� ��� ���� : %d\n", CountNode(&list));
	PrintAllNode(&list);
	/*Node* temp = SearchNode(&list);
	if (temp == NULL)
		printf("ã�� �����Ͱ� �����ϴ�.\n");
	else
		printf("�˻� ���� : %d\n", temp->val);*/
	/*UpdateNode(&list);*/
	DeleteNode(&list);
	PrintAllNode(&list);
	printf("���� ��� ���� : %d\n", CountNode(&list));
	return 0;
}