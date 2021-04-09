#include <iostream>
using namespace std;
class Animal {
private:
	int age;
public:
	Animal(int age) {
		this->age = age;
	}
	int GetAge() { return age; }
	void PrintAge() {
		cout << "이 동물의 나이 : " << age << endl;
	}
};
class Dog : public Animal {
public:
	Dog(int age) : Animal(age) {

	}
	//오버라이딩은 부모가 가지고 있는 함수를 재정의
	void PrintAge() {
		Animal::PrintAge();
		cout << "이 개의 나이 : " << GetAge() << endl;
	}
};
int main(void) {
	Dog d(30);
	d.PrintAge();

	return 0;
}