/*
	���ϸ� : object_copy.cpp

*/
#include <iostream>
#include <cstring>
#include <cstdlib>
using namespace std;
struct Person {
	char name[30];
	int age;
};
struct Person_ptr {
	char* name;
	int age;
};
int main(void) {
	/*Person p = { "ȫ�浿",20 };
	Person s = p;
	strcpy_s(s.name, sizeof(s.name), "��ö��");
	cout << s.name << " " << s.age << endl;
	cout << p.name << " " << p.age << endl;*/
	Person_ptr p;
	p.name = (char*)malloc(strlen("ȫ�浿") + 1);
	strcpy_s(p.name, strlen("ȫ�浿") + 1, "ȫ�浿");
	p.age = 20;
	Person_ptr s = p;
	strcpy_s(s.name, strlen("��ö��") + 1, "��ö��");
	cout << p.name << " " << p.age << endl;
	cout << s.name << " " << s.age << endl;
	return 0;
}


