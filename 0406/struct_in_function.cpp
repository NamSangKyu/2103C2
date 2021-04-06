#include <iostream>
using namespace std;
struct Car {
	char model[20];
	int speed;
	int MAX_SPEED;
	int break_step;//브레이크시 감소할 속도값

	void Break() {
		//현재속도를 break_step 만큼 감소
		//대신에 -가되면 0으로 현재 속도를 변경
		speed -= break_step;
		if (speed < 0)
			speed = 0;
		cout << "현재 " << model << " 속도 : " << speed << endl;
	}
			
	void Acc() {
		speed += 10;
		if (speed >= MAX_SPEED)
			speed = MAX_SPEED;
		cout << "현재 " << model << " 속도 : " << speed << endl;
	}

	//현재 자동차 상태 정보를 출력
	//차종 , 현재 속도, 최대속도를 출력
	void PrintInfo() {
		cout << "차종 : " << model << endl;
		cout << "현재 속도 : " << speed << endl;
		cout << "최대 속도 : " << MAX_SPEED << endl;
	}
};
int main(void) {
	Car car1 = { "그랜저",20, 350, 5 };
	car1.Acc();
	car1.Break();
	car1.PrintInfo();
	Car car2 = { "BMW",100, 450,15 };
	car2.Acc();
	car2.Break();
	car2.PrintInfo();
	return 0;
}