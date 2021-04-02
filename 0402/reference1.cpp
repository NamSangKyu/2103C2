#include <iostream>
using namespace std;

int main(void) {
	int num = 10;
	//참조자는 반드시 선언과 동시에 초기화
	int& ref = num;
	int& ref2 = ref;

	num++;
	cout << num << " " << ref << " " << ref2 << endl;
	cout << &num << " " << &ref << " " << &ref2 << endl;


	return 0;
}