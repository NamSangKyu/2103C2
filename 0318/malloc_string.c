#include <stdio.h>
#include <stdlib.h>

char * ReadString() {
	char name[30];
	printf("���ڿ��� �Է��ϼ��� : ");
	scanf("%s",name);
	return name;//ReadString�� ����Ǹ� name�� ���������̱� ������ �ٷ� ������
}
char * ReadStringMalloc() {
	char *name = (char *)malloc(30);
	printf("���ڿ��� �Է��ϼ��� : ");
	scanf("%s", name);
	return name;
}
int main(void) {
	char * name = ReadString();
	printf("%s\n", name);
	name = ReadStringMalloc();
	printf("%s\n", name);
	free(name);
	return 0;
}




