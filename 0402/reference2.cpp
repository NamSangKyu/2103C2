#include <iostream>
using namespace std;
//������ ���� �ΰ��� ���� �ٲ��ִ� Call by Reference ���� �Լ�
//������ �̿�
void Swap(int* p1, int* p2) {
	int temp = *p1;
	*p1 = *p2;
	*p2 = temp;
}
//������
void Swap(int& r1, int& r2) {
	int temp = r1;
	r1 = r2;
	r2 = temp;
}
int main(void) {
	int a = 10, b = 20;
	Swap(&a, &b);
	cout << a << " " << b << endl;
	Swap(a, b);
	cout << a << " " << b << endl;

	return 0;
}