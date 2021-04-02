#include <iostream>
using namespace std;
//자동차 구조체, 모델명, 속도
struct Car {
	char model[20];
	int speed;
};
//자동자 accelator 함수 작성 
//---> 함수 실행 할때마다 속도를 원하는 만큼 증가
//단 최대속도를 정한 다음에 최대속도는 넘지 못하겠끔
void Acc(Car& car) {
	car.speed += 10;
	if (car.speed >= 200)
		car.speed = 200;
	cout << "현재 " << car.model << " 속도 : " << car.speed << endl;
}
int main(void) {
	Car car = { "그랜저",20 };
	Acc(car);
	return 0;
}