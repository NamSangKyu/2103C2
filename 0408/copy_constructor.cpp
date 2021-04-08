/*
	파일명 : copy_constructor.cpp
	개  요 : 복사생성자 문법 및 활용
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
	//복사생성자 - 깊은 복사(Object 복사시 동적할당이 필요할때)
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
	Person p("홍길동", 20);
	Person s = p;
	return 0;
}