#include <iostream>
//코드상에서 영역을 구분하는 용도
namespace TEST1 {
	void Print() {
		std::cout << "HELLO" << std::endl;
	}
}
namespace TEST2 {
	void Print() {
		std::cout << "HELLO" << std::endl;
	}
}
int main(void) {
	int a;
	char str[50];

	std::cin >> str;
	std::cin >> a;

	std::cout << str << " " << a << std::endl;

	TEST1::Print();
	TEST2::Print();

}