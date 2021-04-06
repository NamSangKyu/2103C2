#include <iostream>
#include <cstring>
using namespace std;
//접근 제어자 - 변수나 함수의 접근할 수 있는 범위를 결정
//public - 누구나 접근 가능, private - 내부에서만 접근 가능
class Car {
private:
	//멤버변수
	char model[20];
	int speed;
	int MAX_SPEED;
	int break_step;
public:
	//멤버함수
	//Car내용을 초기화할 함수
	void Init(const char* n, int s, int mx, int bs) {
		strcpy_s(model, sizeof(model), n);
		speed = s;
		MAX_SPEED = mx;
		break_step = bs;
	}
	void Break() {
		speed -= break_step;
		if (speed < 0)
			speed = 0;
		cout << "현재 " << model << " 속도 : " << speed << endl;
	}
	void Acc() {
		speed += 10;
		if (speed >= MAX_SPEED)
			speed = MAX_SPEED;
		cout << "현재 " << model << " 속도 : " << speed << endl;
	}
	void PrintInfo() {
		cout << "차종 : " << model << endl;
		cout << "현재 속도 : " << speed << endl;
		cout << "최대 속도 : " << MAX_SPEED << endl;
	}
};
int main(void) {
	Car car1;
	//car1.speed++;
	car1.Init("그랜저", 20, 350, 5);
	car1.Acc();
	car1.Break();
	car1.PrintInfo();
	Car car2;
	char str[] = "BMW";
	car2.Init(str, 100, 450, 15);
	car2.Acc();
	car2.Break();
	car2.PrintInfo();
	return 0;
}