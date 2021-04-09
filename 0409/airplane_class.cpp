#include <iostream>

using namespace std;

//일반 비행기
//	fly() ---> 비행기가 날라갑니다.
class Airplane {
public:
	void fly() {
		cout << "비행기가 날라갑니다." << endl;
	}
};
//초음속 비행기
//멤버변수 : 모드(false - 일반 비행, true - 초음속 비행)
//멤버함수 : fly 재구현 - 모드에 따라서 false 이면 부모가 가지고 있는 fly 실행,
//                       true 이면 초음속 비행중입니다 출력
class SonicAirplane : public Airplane {
private:
	bool mode;
public:
	SonicAirplane() {
		mode = false;
	}
	void fly() {
		if (mode)
			cout << "초음속 비행 중입니다." << endl;
		else
			Airplane::fly();
	}
	void changeMode() {
		mode = !mode;
	}
};
int main(void) {
	SonicAirplane air;
	air.fly();
	air.changeMode();
	air.fly();
	return 0;
}