/*
	���ϸ� : this_pointer.cpp
	��  �� : this ������ ����
*/
#include <iostream>
using namespace std;
class A {
private:
	int num;
public:
	A(int num) {
		this->num = num;
	}
	void PrintInfo() {
		cout << num << endl;
	}
};
int main(void) {
	A a(10);
	a.PrintInfo();
	return 0;
}