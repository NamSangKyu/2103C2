#include <iostream>
using namespace std;
class Number {
private:
	static int count;//�̹� data������ �Ҵ�
	int n;
public:
	Number() {
		count++;
		cout << count << "��° Number ����" << endl;
	}
	static void PrintCount() {
		cout << "���� count : " << count << endl;
		//static ����� non static ����� ������ �� ����
		//non static ����� static ����� ������ �� ����
		//cout << "���� n : " << n << endl;
	}
};
//static���� ����� ������ 
//�̷������� �ܺο��� �ݵ�� �ʱ�ȭ �ؾߵ�
int Number::count = 0;
int main(void) {
	Number a;
	Number b;
	a.PrintCount();
	//static ����� Ŭ������::�Լ���/������ �ؼ� ���� �ִ�.
	Number::PrintCount();
	return 0;
}