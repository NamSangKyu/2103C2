#include <iostream>
int sum(int a=7, int b=9) {
	return a + b;
}
//매개 변수에 디폴트 값을 전부 주지 않을시, 맨 뒤에 매개변수 부터 디폴트 값 설정
//매개 변수에 데이터는 앞부터 채우기 때문
double sum(double a=3.1415, double b) {//에러
	return a + b;
}
int sum(int a) {
	return a + 10;
}
int main(void) {
	std::cout << sum() << std::endl;
	std::cout << sum(3,4) << std::endl;
	std::cout << sum(3.325) << std::endl;
	//std::cout << sum(3) << std::endl;
	return 0;
}