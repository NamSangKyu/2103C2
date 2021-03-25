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
	int i, j;

	for (i = 0; i < size-1 ; i++) {
		printf("%d pass : ", i + 1);
		for (j = 0; j < size-1-i; j++) {
			if (arr[j] > arr[j + 1]) {
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
		PrintArray(arr, size);
	}
}
void SelectionSort(int* arr, int size) {
	//�������� ����
	int i, j;
	for (i = 0;i < size-1 ; i++ ) {
		printf("%d pass : ", i + 1);
		for (j = i + 1 ; j < size ; j++) {
			if (arr[i] > arr[j]) {
				int temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
		PrintArray(arr, size);
	}
}
void QuickSort(int* arr, int left, int right) {
	int pl = left;
	int pr = right;
	int x = arr[(left + right) / 2];
	do {
		while (arr[pl] < x) pl++;
		while (arr[pr] > x) pr--;
		if (pl <= pr) {
			int temp = arr[pl];
			arr[pl] = arr[pr];
			arr[pr] = temp;
			pl++;
			pr--;
		}
	} while (pl<=pr);
	if (left < pr) QuickSort(arr, left, pr);
	if(right>pl) QuickSort(arr, pl, right);
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

	printf("���� ��� : ");
	PrintArray(arr, size);
	//BubleSort(arr, size);
	//SelectionSort(arr, size);
	QuickSort(arr, 0, size - 1);
	PrintArray(arr, size);
	free(arr);
	return 0;
}