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
	BubleSort(arr, size);
	printf("정렬 결과 : ");
	PrintArray(arr, size);
	free(arr);
	return 0;
}