#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	//동적할당 : 힙(heap) 영역 메모리에 사용자가 원하는 만큼 메모리를 할당하는 방법
	int *arr = (int *)malloc(sizeof(int)*10);//---> 정수형 배열 10개 만큼 동적할당을 하였다.
	int i;
	for (i = 0; i < 10; i++)
	{
		arr[i] = i + 1;
		printf("%d ", arr[i]);
	}
	printf("\n");
	arr = (int *)realloc(arr, sizeof(int) * 5);
	for (i = 0; i < 10; i++)
		printf("%d ", arr[i]);
	
	printf("\n");
	free(arr);//동적할당한 메모리를 해제
	return 0;
}





