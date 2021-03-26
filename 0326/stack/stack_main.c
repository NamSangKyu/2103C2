#include <stdio.h>
#include "stack.h"

int main(void) {
	Init(5);

	Push(10);
	Push(1);
	Push(40);
	Push(23);
	Push(11);
	Push(22);

	printf("%d\n", Pop());
	printf("%d\n", Pop());
	printf("%d\n", Pop());
	printf("%d\n", Pop());
	printf("%d\n", Pop());
	printf("%d\n", Pop());
	printf("%d\n", Pop());
	return 0;
}