#include <stdio.h>

struct person {
	char name[28];
	int age;
};

int main(void) {
	//����ü �ʱ�ȭ�� ����ü �ȿ� ���� ���� ������� ���� ����
	struct person p = {"ȫ�浿",20};
	printf("p name address : %p\n", p.name);
	printf("p age address : %p\n", &p.age);
	printf("name : %s, age : %d\n", p.name, p.age);
	char name[28] = "��ö��";
	int age = 10;
	struct person s;
	//����ü�� �����͸� ����, ���ڿ��̳� �������� ��쿡�� ���� �Ҵ��� �Ŀ� ����, ���ڿ� ����
	strcpy_s(p.name, sizeof(p.name), name);
	p.age = age;

	return 0;
}