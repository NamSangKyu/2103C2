#include <iostream>

using namespace std;

//�Ϲ� �����
//	fly() ---> ����Ⱑ ���󰩴ϴ�.
class Airplane {
public:
	void fly() {
		cout << "����Ⱑ ���󰩴ϴ�." << endl;
	}
};
//������ �����
//������� : ���(false - �Ϲ� ����, true - ������ ����)
//����Լ� : fly �籸�� - ��忡 ���� false �̸� �θ� ������ �ִ� fly ����,
//                       true �̸� ������ �������Դϴ� ���
class SonicAirplane : public Airplane {
private:
	bool mode;
public:
	SonicAirplane() {
		mode = false;
	}
	void fly() {
		if (mode)
			cout << "������ ���� ���Դϴ�." << endl;
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