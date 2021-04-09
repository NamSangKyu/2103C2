#include <iostream>
using namespace std;
//���� �����Լ��� ������ �ش� Ŭ������ �߻� Ŭ������ ��
class OnOff {
public:
	//���� �����Լ�
	virtual void PowerOn() = 0;
	virtual void PowerOff() = 0;
};

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
class Light : public OnOff {
	//OnOff�� ������ �ִ� ���� �����Լ��� �������̵� ���� ������
	//�ڽ� Ŭ������ �߻�Ŭ������ �ȴ�.
};
void PowerOn(OnOff* onoff) {
	onoff->PowerOn();
}
int main(void) {
	OnOff* onoff;
	TV tv;
	Boiler boiler;
	//OnOff on; //�߻� Ŭ������ ������ �ȵ�
	//Light light;//�ڽ� Ŭ������ �߻�ȭ �Ǽ� ������ �ȵ�
	return 0;
}