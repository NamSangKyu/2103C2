#include <iostream>
using namespace std;
//�ڵ��� ����ü, �𵨸�, �ӵ�
struct Car {
	char model[20];
	int speed;
};
//�ڵ��� accelator �Լ� �ۼ� 
//---> �Լ� ���� �Ҷ����� �ӵ��� ���ϴ� ��ŭ ����
//�� �ִ�ӵ��� ���� ������ �ִ�ӵ��� ���� ���ϰڲ�
void Acc(Car& car) {
	car.speed += 10;
	if (car.speed >= 200)
		car.speed = 200;
	cout << "���� " << car.model << " �ӵ� : " << car.speed << endl;
}
int main(void) {
	Car car = { "�׷���",20 };
	Acc(car);
	return 0;
}