#include <iostream>

int main(void) {
	//1~100���� ���� ���
	int total = 0;

	//���� ���� ����� ���ÿ� �ʱ�ȭ
	for (int i = 1; i < 101; i++) {
		total += i;
	}
	//i++;//�ݺ����� �����鼭 ����
	std::cout << "�� ��� : " << total << std::endl;
	return 0;
}