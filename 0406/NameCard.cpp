#include <iostream>
#include <cstring>
using namespace std;
/*
	������� : �̸�, ����ó, ȸ���, ���� - int
	����Լ� : ������(������� �ʱ�ȭ), NameCard���� ����ϴ� �Լ�

*/
class NameCard {
private:
	char* name;
	char* company;
	char* tel;
	int position;

public:
	NameCard(const char* n, const char* c, const char* t, int p)
		: position(p) {
		name = new char[strlen(n) + 1];
		strcpy_s(name, strlen(n) + 1, n);
		company = new char[strlen(c) + 1];
		strcpy_s(company, strlen(c) + 1, c);
		tel = new char[strlen(t) + 1];
		strcpy_s(tel, strlen(t) + 1, t);
	}
	//name���� �ܺο��� Ȯ�� �� �� �ִ� �Լ� 
	//	- �ܺο��� name���� ������ �ְ���
	const char* getName() {
		return name;
	}
	//name���� �ܺο��� �޾ƿͼ� ������� name�� �����ϴ� �Լ�
	void setName(const char* n) {
		name = new char[strlen(n) + 1];
		strcpy_s(name, strlen(n) + 1, n);
	}
	//company, tel, position�� set/get �Լ��� �ۼ�
	const char* getCompany() {
		return company;
	}
	void setCompany(const char* c) {
		company = new char[strlen(c) + 1];
		strcpy_s(company, strlen(c) + 1, c);
	}
	const char* getTel() {
		return tel;
	}
	void setTel(const char* t) {
		tel = new char[strlen(t) + 1];
		strcpy_s(tel, strlen(t) + 1, t);
	}
	int getPosition() {
		return position;
	}
	void setPosition(int p) {
		position = p;
	}
	//�Ҹ��� �߰�
	~NameCard() {
		delete[] name;
		delete[] company;
		delete[] tel;
	}
	void PrintNameCard() {
		cout << name << " " << company << " " << tel;
		switch (position) {
		case 1:
			cout << "���" << endl;
			break;
		case 2:
			cout << "����" << endl;
			break;
		case 3:
			cout << "�븮" << endl;
			break;
		case 4:
			cout << "����" << endl;
			break;
		case 5:
			cout << "����" << endl;
			break;
		}
	}
};

int main(void) {
	NameCard n("ȫ�浿", "A����Ʈ", "010-0000-0000", 3);
	n.PrintNameCard();
	
	return 0;
}