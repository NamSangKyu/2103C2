#include <iostream>
//overloading : �Լ����� �����ϰ� ���� ����, �� �Ű������� ��ġ���� �ʰ� ���
//	1. �Ű������� ���� �ٸ�
//	2. �Ű������� Ÿ���� �ٸ�
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