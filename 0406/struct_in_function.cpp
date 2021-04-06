#include <iostream>
using namespace std;
struct Car {
	char model[20];
	int speed;
	int MAX_SPEED;
	int break_step;//�극��ũ�� ������ �ӵ���

	void Break() {
		//����ӵ��� break_step ��ŭ ����
		//��ſ� -���Ǹ� 0���� ���� �ӵ��� ����
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

	//���� �ڵ��� ���� ������ ���
	//���� , ���� �ӵ�, �ִ�ӵ��� ���
	void PrintInfo() {
		cout << "���� : " << model << endl;
		cout << "���� �ӵ� : " << speed << endl;
		cout << "�ִ� �ӵ� : " << MAX_SPEED << endl;
	}
};
int main(void) {
	Car car1 = { "�׷���",20, 350, 5 };
	car1.Acc();
	car1.Break();
	car1.PrintInfo();
	Car car2 = { "BMW",100, 450,15 };
	car2.Acc();
	car2.Break();
	car2.PrintInfo();
	return 0;
}