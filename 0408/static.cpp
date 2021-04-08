#include <iostream>
using namespace std;
class Number {
private:
	static int count;//이미 data영역에 할당
	int n;
public:
	Number() {
		count++;
		cout << count << "번째 Number 생성" << endl;
	}
	static void PrintCount() {
		cout << "현재 count : " << count << endl;
		//static 멤버는 non static 멤버에 접근할 수 없음
		//non static 멤버는 static 멤버에 접근할 수 있음
		//cout << "현재 n : " << n << endl;
	}
};
//static으로 선언된 변수는 
//이런식으로 외부에서 반드시 초기화 해야됨
int Number::count = 0;
int main(void) {
	Number a;
	Number b;
	a.PrintCount();
	//static 멤버는 클래스명::함수명/변수명 해서 쓸수 있다.
	Number::PrintCount();
	return 0;
}