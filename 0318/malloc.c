#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	//�����Ҵ� : ��(heap) ���� �޸𸮿� ����ڰ� ���ϴ� ��ŭ �޸𸮸� �Ҵ��ϴ� ���
	int *arr = (int *)malloc(sizeof(int)*10);//---> ������ �迭 10�� ��ŭ �����Ҵ��� �Ͽ���.
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
	free(arr);//�����Ҵ��� �޸𸮸� ����
	return 0;
}





