#include <iostream>
#include <cstring>
using namespace std;
//���� ������ - ������ �Լ��� ������ �� �ִ� ������ ����
//public - ������ ���� ����, private - ���ο����� ���� ����
class Car {
private:
	//�������
	char model[20];
	int speed;
	int MAX_SPEED;
	int break_step;
public:
	//����Լ�
	//Car������ �ʱ�ȭ�� �Լ�
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
		cout << "���� " << model << " �ӵ� : " << speed << endl;
	}
	void Acc() {
		speed += 10;
		if (speed >= MAX_SPEED)
			speed = MAX_SPEED;
		cout << "���� " << model << " �ӵ� : " << speed << endl;
	}
	void PrintInfo() {
		cout << "���� : " << model << endl;
		cout << "���� �ӵ� : " << speed << endl;
		cout << "�ִ� �ӵ� : " << MAX_SPEED << endl;
	}
};
int main(void) {
	Car car1;
	//car1.speed++;
	car1.Init("�׷���", 20, 350, 5);
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