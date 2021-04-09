#include <iostream>
using namespace std;
class Integer {
private:
	int num;
public:
	Integer(int num) {
		this->num = num;
	}
	Integer operator+(Integer& n) {
		Integer result(num + n.num);
		return result;
	}
	Integer operator-(Integer& n) {
		Integer result(num - n.num);
		return result;
	}
	//������
	Integer& operator++() {
		num++;
		return *this;
	}
	//������
	Integer& operator++(int) {
		num++;
		return *this;
	}
	int GetNum() { return num; }
};
void main() {
	Integer n1(10);
	Integer n2(20);
	Integer n3 = n1 + n2;
	Integer n4 = n1 - n2;
	(++n4)++;
	cout << "��ü n1+n2 = " << n3.GetNum() << endl;
	cout << n4.GetNum() << endl;
}