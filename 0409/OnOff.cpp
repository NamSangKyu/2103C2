#include <iostream>
using namespace std;
/*
	OnOff Ŭ����
		����Լ� 
			PowerOn : ������ �Ѵ� �Լ�
			PowerOff : ������ ���� �Լ�
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
	TV Ŭ���� : OnOff
		������� :
			power - bool
		����Լ� : �θ� Ŭ���� ������ �ִ� �Լ��� �������̵� ó��
			PowerOn : power�� true �ٲٰ� TV ���� On
			PowerOff : power�� false �ٲٰ� TV ���� Off
*/
class TV : public OnOff {
private:
	bool power;
public:
	void PowerOn() {
		power = true;
		cout << "TV ���� On" << endl;
	}
	void PowerOff() {
		power = false;
		cout << "TV ���� Off" << endl;
	}
};
/*
	Boiler Ŭ���� : OnOff
		������� :
			power - bool
		����Լ� : �θ� Ŭ���� ������ �ִ� �Լ��� �������̵� ó��
			PowerOn : power�� true �ٲٰ� Boiler ���� On
			PowerOff : power�� false �ٲٰ� Boiler ���� Off
*/
class Boiler : public OnOff {
private:
	bool power;
public:
	void PowerOn() {
		power = true;
		cout << "Boiler ���� On" << endl;
	}
	void PowerOff() {
		power = false;
		cout << "Boiler ���� Off" << endl;
	}
};
void PowerOn(OnOff* onoff) {
	//�ϳ��� �Լ��� �������� ���� ���� - ������(polymorphism)
	onoff->PowerOn();
}
int main(void) {
	OnOff *onoff;
	TV tv;
	Boiler boiler;
	//�ڽ� Ŭ������ �θ� Ŭ������ ����ȯ �Ҽ� �ִ�.
	onoff = &tv;
	onoff = &boiler;
	onoff->PowerOn();

	
	return 0;
}