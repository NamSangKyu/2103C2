#include <stdio.h>
#include <string.h>

int main(void) {
	char str1[30] = "Hello World";
	char* str2 = "Hello World";
	char str3[30];
	strcpy_s(str3,sizeof(str3),str1);
	puts(str3);//puts �ڵ����� �ٹٲ�
	puts(str2);
	printf("���ڿ� �Է�:");
	scanf_s("%s", str3, sizeof(str3));
	puts(str3);
	return 0;
}