#include <iostream>

int main(void) {
	int num;
	std::cout << "�����ϳ� �Է��Ͻÿ� : ";
	std::cin >> num;

	float f;
	std::cout << "�Ǽ� �ϳ� �Է��Ͻÿ� : ";
	std::cin >> f;

	char str[100];
	std::cout << "���ڿ��� �Է��ϼ��� : ";
	std::cin >> str;
	//           1��°  2��° 3��° 4��°  5��°
	std::cout << num << " " << f << " " << str << std::endl;
	return 0;
}