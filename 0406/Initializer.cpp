#include <iostream>
using namespace std;
//����� �����ڴ� �������ڸ��� �ʱ�ȭ
class TEST {
private:
	const int n;
	int& ref;
public:
	//����� �����ڴ� Initailizer���� �ʱ�ȭ
	TEST(int t, int &a) : n(t), ref(a){
		//����� �����ڴ� ������ ���ο��� �ʱ�ȭ X
		/*n = t;
		ref = a;*/
	}
	void print() {
		cout << n << " " << ref << endl;
	}

};
int main(void) {
	int num = 100;
	TEST t(5, num);
	t.print();

	return 0;
}