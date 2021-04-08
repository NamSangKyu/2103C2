/*
	���ϸ� : copy_constructor.cpp
	��  �� : ��������� ���� �� Ȱ��
*/
#include <iostream>
#include <cstring>
using namespace std;
class Person {
private:
	char* name;
	int age;
public:
	Person(const char* n, int a) : age(a){
		name = new char[strlen(n) + 1];
		strcpy_s(name, strlen(n) + 1, n);
		cout << "Person(char* n, int a)" << endl;
	}
	//��������� - ���� ����(Object ����� �����Ҵ��� �ʿ��Ҷ�)
	Person(const Person& obj) : age(obj.age){
		name = new char[strlen(obj.name) + 1];
		strcpy_s(name, strlen(obj.name) + 1, obj.name);
		cout << "Person(const Person& obj) " << endl;
	}
	~Person() { delete[] name; }
	void PrintInfo() {
		cout << name << " " << age << endl;
	}
};
int main(void) {
	Person p("ȫ�浿", 20);
	Person s = p;
	return 0;
}