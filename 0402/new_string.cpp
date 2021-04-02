#include <iostream>
#include <cstdio>
#include <cstdlib>
using namespace std;

char* ReadStringMalloc() {
	char* name = (char*)malloc(30);
	printf("문자열을 입력하세요 : ");
	scanf_s("%s", name,30);
	return name;
}
char* ReadStringNew() {
	char* name = new char[30];
	cout << "문자열을 입력하세요 : ";
	cin >> name;
	return name;
}
int main(void) {
	char *name = ReadStringNew();
	cout << name << endl;
	delete[] name;
	return 0;
}

