#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void PrintArray(int* arr, int size) {
	int i;
	for (i = 0; i < size; i++)
		printf("%d ", arr[i]);
	printf("\n");
}
void BubleSort(int* arr, int size) {
	//���� ���� ����
}
int main(void) {
	int* arr;
	int size = 0; //�迭 ����

	printf("�迭 ���� �Է� : ");
	scanf_s("%d", &size);
	//���� �Ҵ��ؼ� �Է��� ������ŭ �迭�� ����
	arr = (int*)malloc(sizeof(int) * size);
	//�迭�� ������ �ڵ����� ����
	srand(time(0)); //�������� ���ڸ� ������ �̴� ��ƾ�� ����(SEED �� ����)

	for (int i = 0; i < size; i++) {
		arr[i] = rand() % 100;
	}
	BubleSort(arr, size);
	printf("���� ��� : ");
	PrintArray(arr, size);
	free(arr);
	return 0;
}