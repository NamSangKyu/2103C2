#include <stdio.h>
#include <stdlib.h>

char * ReadString() {
	char name[30];
	printf("문자열을 입력하세요 : ");
	scanf("%s",name);
	return name;//ReadString이 종료되면 name은 지역변수이기 떄문에 바로 없어짐
}
char * ReadStringMalloc() {
	char *name = (char *)malloc(30);
	printf("문자열을 입력하세요 : ");
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




