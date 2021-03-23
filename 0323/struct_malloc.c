#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct person {
	char* name;
	int age;
};
//person 하나를 생성해서 리턴
struct person* createPerson() {
	//person 하나 동적할당
	struct person* ptr = (struct person*)malloc(sizeof(struct person));
	char name[30];
	int age;
	printf("이름 입력 : "); scanf_s("%s", name, sizeof(name));
	printf("숫자 입력 : "); scanf_s("%d", &age);
	(*ptr).age = age;//동적 할당한 person의 age에 저장
	ptr->age = age;
	ptr->name = (char*)malloc(strlen(name) + 1);//+1은 마지막 널문자 저장할 공간
	strcpy_s(ptr->name, strlen(ptr->name), name);
	return ptr;
}
int main(void) {
	struct person* p = createPerson();
	printf("%s, %d\n", p->name, p->age);
	return 0;
}