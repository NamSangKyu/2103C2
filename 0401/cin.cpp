#include <iostream>

int main(void) {
	int num;
	std::cout << "숫자하나 입력하시오 : ";
	std::cin >> num;

	float f;
	std::cout << "실수 하나 입력하시오 : ";
	std::cin >> f;

	char str[100];
	std::cout << "문자열을 입력하세요 : ";
	std::cin >> str;
	//           1번째  2번째 3번째 4번째  5번째
	std::cout << num << " " << f << " " << str << std::endl;
	return 0;
}