#include <stdio.h>
#include <malloc.h>
struct person {
	char name[28];
	int age;
};
typedef int* PINT;
typedef unsigned int UINT;
typedef unsigned int* P_UINT;
typedef struct person Person;

typedef struct {
	char* sno;
	char* name;
}Student;

int main(void) {
	//unsigned int n;
	UINT n;
	//unsigned int *ptr;
	P_UINT ptr;
	return 0;
}