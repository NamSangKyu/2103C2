#include <iostream>
#include <cstring>
using namespace std;
//Person이 가지는 데이터는 이름과, 나이를 가지고 있음
//Person이 가지고 있는 기능, 초기화, Person 정보를 출력하는 함수
//멤버변수는 외부에서 접근할수 없음, 멤버함수는 외부에서 접근할수 있음
//멤버변수 초기화는 초기화 함수에서 이름과 나이를 받아서 초기화
class Person {
private:
	char* name;
	int age;
public:
	//생성자는 클래스가 생성이 될때 제일먼저 호출되는 함수
	//생성자는 리턴타입 X, 함수명은 클래스명과 동일
	//기본생성자(Default Constructor)
	Person() {
		name = NULL;
		cout << "Person() " << endl;
	}
	//소멸자(Deconstructor)
	~Person() {
		if(name != NULL)
			delete[] name;
		cout << "Person Deconstructor" << endl;
	}
	Person(const char* n, int a) {
		age = a;
		name = new char[strlen(n) + 1];
		strcpy_s(name, strlen(n) + 1, n);
	}
	void Init(const char* n, int a) {
		age = a;
		name = new char[strlen(n) + 1];
		strcpy_s(name, strlen(n) + 1, n);
	}
	void PersonInfo() {
		cout << "이름 : " << name << endl;
		cout << "나이 : " << age << endl;
	}

};
int main(void) {
	//클래스 배열 생성시 무조건 기본 생성자 필요
	/*Person arr[10];*/
	//포인터 배열 - 기본생성자가 필요가 없음
	Person * parr[10];
	int idx = 0;
	parr[idx++] = new Person("홍길동",30);
	parr[idx++] = new Person("김철수",20);

	for (int i = 0; i < idx; i++) {
		parr[i]->PersonInfo();
		delete parr[i];
	}

	return 0;
}