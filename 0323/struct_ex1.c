#include <stdio.h>
//����ü(struct)
//����ü ����
/*
struct ����ü��{
	�ʿ��� ���� ����;
	....
};
*/
struct person {
	char name[30];
	int age;
};
int main(void) {
	struct person p;
	printf("���� �Է� : ");
	scanf("%d", &p.age);
	printf("�̸� �Է� : ");
	scanf("%s", p.name);

	printf("�̸� :%s, ���� : %d\n", p.name, p.age);

	printf("sizeof(struct person) : %d\n", sizeof(struct person));
	return 0;
}