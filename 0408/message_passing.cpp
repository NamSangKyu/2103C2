/*
	파일명 : message_passing.cpp
	개  요 : 서로다른 객체들간의 데이터 전달
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
		cout << "Person Bus에 탑승했습니다" << endl;
	}
	void takeSubway(Subway& sub) {
		sub.creditMoney(1450);
		money -= 1300;
		cout << "Person Subway에 탑승했습니다" << endl;
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
		cout << "현재 요금 합계 : " << money << endl;
		cout << "버스 탑승 누적 인원수 : " << count << endl;
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
		cout << "현재 요금 합계 : " << money << endl;
		cout << "지하철 탑승 누적 인원수 : " << count << endl;
	}
};