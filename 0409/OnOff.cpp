#include <iostream>
using namespace std;
/*
	OnOff 클래스
		멤버함수 
			PowerOn : 전원을 켜는 함수
			PowerOff : 전원을 끄는 함수
*/
class OnOff {
public:
	virtual void PowerOn() {
		cout << "Power On" << endl;
	}
	virtual void PowerOff() {
		cout << "Power Off" << endl;
	}
};
/*
	TV 클래스 : OnOff
		멤버변수 :
			power - bool
		멤버함수 : 부모 클래스 가지고 있는 함수를 오버라이딩 처리
			PowerOn : power를 true 바꾸고 TV 전원 On
			PowerOff : power를 false 바꾸고 TV 전원 Off
*/
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
/*
	Boiler 클래스 : OnOff
		멤버변수 :
			power - bool
		멤버함수 : 부모 클래스 가지고 있는 함수를 오버라이딩 처리
			PowerOn : power를 true 바꾸고 Boiler 전원 On
			PowerOff : power를 false 바꾸고 Boiler 전원 Off
*/
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
void PowerOn(OnOff* onoff) {
	//하나의 함수로 여러가지 일을 수행 - 다형성(polymorphism)
	onoff->PowerOn();
}
int main(void) {
	OnOff *onoff;
	TV tv;
	Boiler boiler;
	//자식 클래스는 부모 클래스로 형변환 할수 있다.
	onoff = &tv;
	onoff = &boiler;
	onoff->PowerOn();

	
	return 0;
}