#include <iostream>
//¦���� true, Ȧ���� false
bool checkEven(int n) {
	return n % 2 == 0;
}
int main(void) {
	//���� Ÿ�� bool�� true�� false�� �����ϱ� ���� ���� Ÿ��
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
		std::cout << "�ش� ���ڴ� ¦���Դϴ�." << std::endl;
	else
		std::cout << "�ش� ���ڴ� Ȧ���Դϴ�." << std::endl;
	return 0;
}