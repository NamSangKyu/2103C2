#include <iostream>
using namespace std;
//정수 하나를 매개변수로 받아서 변수에있는 값을 증가를 시킨후에
//해당 매개변수(참조자)를 리턴(참조자) 하는 함수
int& add(int &a) {
	a++;
	return a;
}

int main(void) {
	int n = 10;
	int& r = add(n);
	cout << n << " " << r << endl;
	cout << &n << " " << &r << endl;
	int b = add(r);
	r++;
	cout << b << " " << r << endl;
	cout << &b << " " << &r << endl;
	return 0;
}