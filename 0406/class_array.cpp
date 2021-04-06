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
		name = NULL;
		cout << "Person() " << endl;
	}
	//�Ҹ���(Deconstructor)
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
		cout << "�̸� : " << name << endl;
		cout << "���� : " << age << endl;
	}

};
int main(void) {
	//Ŭ���� �迭 ������ ������ �⺻ ������ �ʿ�
	/*Person arr[10];*/
	//������ �迭 - �⺻�����ڰ� �ʿ䰡 ����
	Person * parr[10];
	int idx = 0;
	parr[idx++] = new Person("ȫ�浿",30);
	parr[idx++] = new Person("��ö��",20);

	for (int i = 0; i < idx; i++) {
		parr[i]->PersonInfo();
		delete parr[i];
	}

	return 0;
}