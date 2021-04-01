#include <iostream>
//overloading : 함수명을 동일하게 쓸수 있음, 단 매개변수를 일치하지 않게 사용
//	1. 매개변수의 개수 다름
//	2. 매개변수의 타입이 다름
int sum(int a, int b) {
	return a + b;
}
double sum(double a, double b) {
	return a + b;
}
char sum(char a, char b) {
	return a + b;
}
int sum(int a) {
	return a + 10;
}
int main(void) {
	std::cout << sum(10, 20) << std::endl;
	std::cout << sum(10.456, 20.234) << std::endl;
	std::cout << sum('A', 'B') << std::endl;
	std::cout << sum(10) << std::endl;

	return 0;
}