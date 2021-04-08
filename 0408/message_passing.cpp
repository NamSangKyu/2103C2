/*
	���ϸ� : message_passing.cpp
	��  �� : ���δٸ� ��ü�鰣�� ������ ����
*/
#include <iostream>
using namespace std;
class Person {
private:
	int money;
public:
	Person() {
		money = 10000;
	}
	void takeBus(Bus &bus) {
		bus.creditMoney(1300);
		money -= 1300;
		cout << "Person Bus�� ž���߽��ϴ�" << endl;
	}
	void takeSubway(Subway& sub) {
		sub.creditMoney(1450);
		money -= 1300;
		cout << "Person Subway�� ž���߽��ϴ�" << endl;
	}
};
class Bus {
private:
	int money;
	int count;
public:
	Bus() {
		money = 0;
		count = 0;
	}
	void creditMoney(int m) {
		money += m;
		count++;
	}
	void printInfo() {
		cout << "���� ��� �հ� : " << money << endl;
		cout << "���� ž�� ���� �ο��� : " << count << endl;
	}
};
class Subway{
private:
	int money;
	int count;
public:
	Subway() {
		money = 0;
		count = 0;
	}
	void creditMoney(int m) {
		money += m;
		count++;
	}
	void printInfo() {
		cout << "���� ��� �հ� : " << money << endl;
		cout << "����ö ž�� ���� �ο��� : " << count << endl;
	}
};