#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct person {
	char* name;
	int age;
};
//person �ϳ��� �����ؼ� ����
struct person* createPerson() {
	//person �ϳ� �����Ҵ�
	struct person* ptr = (struct person*)malloc(sizeof(struct person));
	char name[30];
	int age;
	printf("�̸� �Է� : "); scanf_s("%s", name, sizeof(name));
	printf("���� �Է� : "); scanf_s("%d", &age);
	(*ptr).age = age;//���� �Ҵ��� person�� age�� ����
	ptr->age = age;
	ptr->name = (char*)malloc(strlen(name) + 1);//+1�� ������ �ι��� ������ ����
	strcpy_s(ptr->name, strlen(ptr->name), name);
	return ptr;
}
int main(void) {
	struct person* p = createPerson();
	printf("%s, %d\n", p->name, p->age);
	return 0;
}