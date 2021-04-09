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
		cout << "�� ������ ���� : " << age << endl;
	}
};
class Dog : public Animal {
public:
	Dog(int age) : Animal(age) {

	}
	//�������̵��� �θ� ������ �ִ� �Լ��� ������
	void PrintAge() {
		Animal::PrintAge();
		cout << "�� ���� ���� : " << GetAge() << endl;
	}
};
int main(void) {
	Dog d(30);
	d.PrintAge();

	return 0;
}