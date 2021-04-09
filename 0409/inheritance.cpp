#include <iostream>
using namespace std;
//부모클래스 , 슈퍼 클래스, 상위 클래스
class Animal {
protected:
	int age;
public:
	Animal() {
		age = 20;
		cout << "Animal Constructor" << endl;
	}
	void PrintAge() {
		cout << "이 동물의 나이는 " << age << endl;
	}
};
//inheritance(상속) : 부모클래스가 자식클래스에게 멤버 변수/함수를 물려줌
//자식 클래스, 서브 클래스, 하위 클래스
class Dog : public Animal {
public:
	Dog() {
		cout << "Dog Constructor" << endl;
	}
	void run() {
		cout << age << "살된 개가 달립니다." << endl;
	}
};

int main(void) {
	Dog d;
	d.PrintAge();
	return 0;
}