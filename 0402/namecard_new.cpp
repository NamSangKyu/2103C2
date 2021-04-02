#include <iostream>
using namespace std;

//NameCard 구조체 - 이름, 연락처, 직급, 회사명을 저장하는 구조체
struct NameCard {
	char name[30];
	char tel[20];
	char position[30];
	char company[50];
};
//NameCard 구조체 하나를 동적할당한 후에
//내용을 입력받아 구조체를 리턴하는 함수
NameCard& CreateNameCard() {
	NameCard* card = new NameCard;
	cout << "이름 : "; cin >> card->name;
	cout << "연락처 : "; cin >> card->tel;
	cout << "직급 : "; cin >> card->position;
	cout << "회사명 : "; cin >> card->company;
	cout << "생성된 위치 : " << card << endl;
	return *card;
}
//NameCard 출력하는 함수, 매개변수는 참조자로 설정
void PrintNameCard(const NameCard &card) {
//	cin >> card.name; 참조자도 상수로 선언할 수 있음
	cout << "이름 : " << card.name << endl;
	cout << "연락처 : " << card.tel << endl;
	cout << "직급 : " << card.position << endl;
	cout << "회사명 : " << card.company << endl;
}
int main(void) {	
	NameCard& card = CreateNameCard();
	cout << "생성된 위치 : " << &card << endl;
	PrintNameCard(card);
	return 0;
}



