#include <iostream>
using namespace std;

int main(void) {
	int num = 10;
	//�����ڴ� �ݵ�� ����� ���ÿ� �ʱ�ȭ
	int& ref = num;
	int& ref2 = ref;

	num++;
	cout << num << " " << ref << " " << ref2 << endl;
	cout << &num << " " << &ref << " " << &ref2 << endl;


	return 0;
}