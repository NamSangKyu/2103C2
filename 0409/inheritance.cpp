#include <iostream>
using namespace std;
//�θ�Ŭ���� , ���� Ŭ����, ���� Ŭ����
class Animal {
protected:
	int age;
public:
	Animal() {
		age = 20;
		cout << "Animal Constructor" << endl;
	}
	void PrintAge() {
		cout << "�� ������ ���̴� " << age << endl;
	}
};
//inheritance(���) : �θ�Ŭ������ �ڽ�Ŭ�������� ��� ����/�Լ��� ������
//�ڽ� Ŭ����, ���� Ŭ����, ���� Ŭ����
class Dog : public Animal {
public:
	Dog() {
		cout << "Dog Constructor" << endl;
	}
	void run() {
		cout << age << "��� ���� �޸��ϴ�." << endl;
	}
};

int main(void) {
	Dog d;
	d.PrintAge();
	return 0;
}