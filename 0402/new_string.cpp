#include <iostream>
#include <cstdio>
#include <cstdlib>
using namespace std;

char* ReadStringMalloc() {
	char* name = (char*)malloc(30);
	printf("���ڿ��� �Է��ϼ��� : ");
	scanf_s("%s", name,30);
	return name;
}
char* ReadStringNew() {
	char* name = new char[30];
	cout << "���ڿ��� �Է��ϼ��� : ";
	cin >> name;
	return name;
}
int main(void) {
	char *name = ReadStringNew();
	cout << name << endl;
	delete[] name;
	return 0;
}

