#include <iostream>
//짝수면 true, 홀수면 false
bool checkEven(int n) {
	return n % 2 == 0;
}
int main(void) {
	//변수 타입 bool은 true와 false를 저장하기 위한 변수 타입
	bool b1 = true;
	bool b2 = false;
	bool b3 = 10 > 3;

	std::cout << b1 << std::endl;
	std::cout << b2 << std::endl;
	std::cout << b3 << std::endl;
	std::cout << sizeof(b1) << std::endl;
	std::cout << sizeof(b2) << std::endl;
	std::cout << sizeof(b3) << std::endl;
	std::cout << sizeof(true) << std::endl;
	std::cout << sizeof(false) << std::endl;
	std::cout << sizeof(bool) << std::endl;

	if (checkEven(10))
		std::cout << "해당 숫자는 짝수입니다." << std::endl;
	else
		std::cout << "해당 숫자는 홀수입니다." << std::endl;
	return 0;
}