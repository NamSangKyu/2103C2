/*
	���ϸ� : message_passing.cpp
	��  �� : ���δٸ� ��ü�鰣�� ������ ����
*/
#include <iostream>
using namespace std;
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

class Person {
private:
	int money;
public:
	Person() {
		money = 10000;
	}
	void takeBus(Bus& bus) {
		bus.creditMoney(1300);
		money -= 1300;
		cout << "Person Bus�� ž���߽��ϴ�" << endl;
	}
	void takeSubway(Subway& sub) {
		sub.creditMoney(1450);
		money -= 1450;
		cout << "Person Subway�� ž���߽��ϴ�" << endl;
	}
	void PrintPersonInfo() {
		cout << "���� Person ���� �ݾ� : " << money << endl;
	}
};
int main(void) {
	Person p1, p2, p3;
	Subway sub;
	Bus bus;

	p1.takeBus(bus);
	p1.takeBus(bus);
	p1.takeBus(bus);
	p1.takeSubway(sub);
	p2.takeBus(bus);
	p2.takeSubway(sub);
	p3.takeBus(bus);
	p3.takeSubway(sub);
	p3.takeSubway(sub);
	p3.takeSubway(sub);
	p3.takeSubway(sub);
	sub.printInfo(); bus.printInfo();
	p1.PrintPersonInfo();
	p2.PrintPersonInfo();
	p3.PrintPersonInfo();
	return 0;
}