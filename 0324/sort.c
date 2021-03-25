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
	//버블 정렬 구현
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
	//선택정렬 구현
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
int main(void) {
	int* arr;
	int size = 0; //배열 개수

	printf("배열 개수 입력 : ");
	scanf_s("%d", &size);
	//동적 할당해서 입력한 개수만큼 배열을 생성
	arr = (int*)malloc(sizeof(int) * size);
	//배열에 내용을 자동으로 셋팅
	srand(time(0)); //랜덤으로 숫자를 뽑을때 뽑는 루틴을 변경(SEED 값 설정)

	for (int i = 0; i < size; i++) {
		arr[i] = rand() % 100;
	}

	printf("생성 결과 : ");
	PrintArray(arr, size);
	//BubleSort(arr, size);
	SelectionSort(arr, size);
	free(arr);
	return 0;
}