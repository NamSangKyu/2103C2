#include <iostream>
using namespace std;
//정수형 변수 두개의 값을 바꿔주는 Call by Reference 형태 함수
//포인터 이용
void Swap(int* p1, int* p2) {
	int temp = *p1;
	*p1 = *p2;
	*p2 = temp;
}
//참조자
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