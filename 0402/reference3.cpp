#include <iostream>
using namespace std;
//���� �ϳ��� �Ű������� �޾Ƽ� �������ִ� ���� ������ ��Ų�Ŀ�
//�ش� �Ű�����(������)�� ����(������) �ϴ� �Լ�
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