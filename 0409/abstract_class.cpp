#include <iostream>
using namespace std;
//순수 가상함수가 있으면 해당 클래스는 추상 클래스가 됨
class OnOff {
public:
	//순수 가상함수
	virtual void PowerOn() = 0;
	virtual void PowerOff() = 0;
};

class TV : public OnOff {
private:
	bool power;
public:
	void PowerOn() {
		power = true;
		cout << "TV 전원 On" << endl;
	}
	void PowerOff() {
		power = false;
		cout << "TV 전원 Off" << endl;
	}
};

class Boiler : public OnOff {
private:
	bool power;
public:
	void PowerOn() {
		power = true;
		cout << "Boiler 전원 On" << endl;
	}
	void PowerOff() {
		power = false;
		cout << "Boiler 전원 Off" << endl;
	}
};
class Light : public OnOff {
	//OnOff가 가지고 있던 순수 가상함수를 오버라이딩 하지 않으면
	//자식 클래스도 추상클래스가 된다.
};
void PowerOn(OnOff* onoff) {
	onoff->PowerOn();
}
int main(void) {
	OnOff* onoff;
	TV tv;
	Boiler boiler;
	//OnOff on; //추상 클래스는 생성이 안됨
	//Light light;//자식 클래스도 추상화 되서 생성이 안됨
	return 0;
}