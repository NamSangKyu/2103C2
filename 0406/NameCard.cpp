#include <iostream>
#include <cstring>
using namespace std;
/*
	멤버변수 : 이름, 연락처, 회사명, 직급 - int
	멤버함수 : 생성자(멤버변수 초기화), NameCard정보 출력하는 함수

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
	//name값을 외부에서 확인 할 수 있는 함수 
	//	- 외부에서 name값을 받을수 있게함
	const char* getName() {
		return name;
	}
	//name값을 외부에서 받아와서 멤버변수 name에 저장하는 함수
	void setName(const char* n) {
		name = new char[strlen(n) + 1];
		strcpy_s(name, strlen(n) + 1, n);
	}
	//company, tel, position의 set/get 함수를 작성
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
	//소멸자 추가
	~NameCard() {
		delete[] name;
		delete[] company;
		delete[] tel;
	}
	void PrintNameCard() {
		cout << name << " " << company << " " << tel;
		switch (position) {
		case 1:
			cout << "사원" << endl;
			break;
		case 2:
			cout << "주임" << endl;
			break;
		case 3:
			cout << "대리" << endl;
			break;
		case 4:
			cout << "과장" << endl;
			break;
		case 5:
			cout << "차장" << endl;
			break;
		}
	}
};

int main(void) {
	NameCard n("홍길동", "A소프트", "010-0000-0000", 3);
	n.PrintNameCard();
	
	return 0;
}