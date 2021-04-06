#include <iostream>
#include <cstring>
using namespace std;
//Person�� ������ �����ʹ� �̸���, ���̸� ������ ����
//Person�� ������ �ִ� ���, �ʱ�ȭ, Person ������ ����ϴ� �Լ�
//��������� �ܺο��� �����Ҽ� ����, ����Լ��� �ܺο��� �����Ҽ� ����
//������� �ʱ�ȭ�� �ʱ�ȭ �Լ����� �̸��� ���̸� �޾Ƽ� �ʱ�ȭ
class Person {
private:
	char* name;
	int age;
public:
	//�����ڴ� Ŭ������ ������ �ɶ� ���ϸ��� ȣ��Ǵ� �Լ�
	//�����ڴ� ����Ÿ�� X, �Լ����� Ŭ������� ����
	//�⺻������(Default Constructor)
	Person() {
		cout << "Person() " << endl;
	}
	//�Ҹ���(Deconstructor)
	~Person() {
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
		strcpy_s(name, strlen(n)+1, n);
	}
	void PersonInfo() {
		cout << "�̸� : " << name << endl;
		cout << "���� : " << age << endl;
	}

};
int main(void) {
	Person p;
	p.Init("ȫ�浿", 20);
	p.PersonInfo();

	Person s("��ö��", 33);
	s.PersonInfo();
	
	return 0;
}