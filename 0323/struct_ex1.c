#include <stdio.h>
//구조체(struct)
//구조체 문법
/*
struct 구조체명{
	필요한 변수 선언;
	....
};
*/
struct person {
	char name[30];
	int age;
};
int main(void) {
	struct person p;
	printf("나이 입력 : ");
	scanf("%d", &p.age);
	printf("이름 입력 : ");
	scanf("%s", p.name);

	printf("이름 :%s, 나이 : %d\n", p.name, p.age);

	printf("sizeof(struct person) : %d\n", sizeof(struct person));
	return 0;
}