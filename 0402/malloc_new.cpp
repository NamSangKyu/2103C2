#include <iostream>
#include <cstdlib>

int main(void) {
	int* arr1 = (int*)malloc(sizeof(int) * 10);
	int* arr2 = new int[10];

	free(arr1);
	delete[] arr2;
	return 0;
}