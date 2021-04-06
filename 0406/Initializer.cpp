#include <iostream>
using namespace std;
//상수와 참조자는 선언하자마자 초기화
class TEST {
private:
	const int n;
	int& ref;
public:
	//상수와 참조자는 Initailizer에서 초기화
	TEST(int t, int &a) : n(t), ref(a){
		//상수와 참조자는 생성자 내부에서 초기화 X
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