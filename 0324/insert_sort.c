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
	//삽입 정렬 수행
	for (i = ; i < ; i++) {
		//입력
		printf("숫자 입력 : ");
		scanf_s("%d", &arr[i]);
		//정렬 수행
		for (j = ; j; j--) {

		}
		PrintArray(arr, i + 1);
	}
	return 0;
}