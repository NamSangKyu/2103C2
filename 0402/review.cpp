#include <iostream>
//�ڵ�󿡼� ������ �����ϴ� �뵵
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