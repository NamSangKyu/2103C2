#include <stdio.h>
#define NAME "ȫ�浿"
#define AGE	20
#define PRINT printf("�ȳ��ϼ���\n");
//��ũ�� ����� �ڵ� �ۿ��ϴ� ���� �ƴ϶�
//������ ���� �ش��ϴ� �ڵ�� �ٲ���
// �ҽ��ڵ忡 �� NAME ---> "ȫ�浿" �ٲٴ� ���
#define POWER(X) (X)*(X)

int main(void) {
	printf("%s\n", NAME);
	printf("%d\n", AGE);
	PRINT;
	printf("2�� ���� : %d\n", POWER(2));//4
	//11? or 25?---> X (X) ����� �޶���
	printf("2+3�� ���� : %d\n", POWER(2 + 3));
	//							(2+3)*(2+3)
	return 0;
}

