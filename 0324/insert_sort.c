#include <stdio.h>
void PrintArray(int* arr, int size) {
	int i;
	for (i = 0; i < size; i++)
		printf("%d ", arr[i]);
	printf("\n");
}

int main(void) {
	int arr[6];
	int i, j;
	//���� ���� ����
	for (i = 0; i < 6; i++) {
		//�Է�
		printf("���� �Է� : ");
		scanf_s("%d", &arr[i]);
		//���� ����
		for (j = i; j>0 && arr[j] < arr[j - 1]; j--) {
				int temp = arr[j];
				arr[j] = arr[j - 1];
				arr[j - 1] = temp;
		}
		PrintArray(arr, i + 1);
	}
	return 0;
}