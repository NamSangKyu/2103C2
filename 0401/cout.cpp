#include <iostream>

int main(void) {

	std::cout << "Hello World" << std::endl;
	std::cout << "Hello World" << std::endl;
	
	int a = 10;
	float f = 3.1415f;
	double d = 3243.3453;
	char str[] = "안녕하세여";
	//출력하는 순서대로 데이터를 쉬프트 연산하면 됨
	std::cout << a << " " << f << " " << d << std::endl;
	std::cout << str << std::endl;
	return 0;
}