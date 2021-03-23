#include <stdio.h>
#include <string.h>

int main(void) {
	char str1[30] = "Hello World";
	char* str2 = "Hello World";
	char str3[30];
	strcpy_s(str3,sizeof(str3),str1);
	puts(str3);//puts 자동으로 줄바꿈
	puts(str2);
	printf("문자열 입력:");
	scanf_s("%s", str3, sizeof(str3));
	puts(str3);
	return 0;
}