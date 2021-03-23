#include <stdio.h>

struct person {
	char name[28];
	int age;
};

int main(void) {
	//구조체 초기화는 구조체 안에 선언 변수 순서대로 값을 나열
	struct person p = {"홍길동",20};
	printf("p name address : %p\n", p.name);
	printf("p age address : %p\n", &p.age);
	printf("name : %s, age : %d\n", p.name, p.age);
	char name[28] = "김철수";
	int age = 10;
	struct person s;
	//구조체에 데이터를 저장, 문자열이나 포인터일 경우에는 동적 할당한 후에 복사, 문자열 복사
	strcpy_s(p.name, sizeof(p.name), name);
	p.age = age;

	return 0;
}