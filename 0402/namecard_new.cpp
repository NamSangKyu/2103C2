#include <iostream>
using namespace std;

//NameCard ����ü - �̸�, ����ó, ����, ȸ����� �����ϴ� ����ü
struct NameCard {
	char name[30];
	char tel[20];
	char position[30];
	char company[50];
};
//NameCard ����ü �ϳ��� �����Ҵ��� �Ŀ�
//������ �Է¹޾� ����ü�� �����ϴ� �Լ�
NameCard& CreateNameCard() {
	NameCard* card = new NameCard;
	cout << "�̸� : "; cin >> card->name;
	cout << "����ó : "; cin >> card->tel;
	cout << "���� : "; cin >> card->position;
	cout << "ȸ��� : "; cin >> card->company;
	cout << "������ ��ġ : " << card << endl;
	return *card;
}
//NameCard ����ϴ� �Լ�, �Ű������� �����ڷ� ����
void PrintNameCard(const NameCard &card) {
//	cin >> card.name; �����ڵ� ����� ������ �� ����
	cout << "�̸� : " << card.name << endl;
	cout << "����ó : " << card.tel << endl;
	cout << "���� : " << card.position << endl;
	cout << "ȸ��� : " << card.company << endl;
}
int main(void) {	
	NameCard& card = CreateNameCard();
	cout << "������ ��ġ : " << &card << endl;
	PrintNameCard(card);
	return 0;
}



