#include <iostream>
//inline �Լ��� #define���� �Լ��� ���� ȿ���� ��
//�� inline�� �����Ϸ��� ����ڰ� ���� �ʾƵ�, �־ �Լ������� �ڵ����� �ְų� ����
inline int Plus(int n1, int n2) {
	return n1 + n2;
}
int main(void) {
	for(int i=0;i<5000;i++)
		std::cout << Plus(10, 20) << std::endl;
	return 0;
}