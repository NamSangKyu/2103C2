#include <iostream>
int sum(int a=7, int b=9) {
	return a + b;
}
//�Ű� ������ ����Ʈ ���� ���� ���� ������, �� �ڿ� �Ű����� ���� ����Ʈ �� ����
//�Ű� ������ �����ʹ� �պ��� ä��� ����
double sum(double a=3.1415, double b) {//����
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