#include <stdio.h>
#define NAME "홍길동"
#define AGE	20
#define PRINT printf("안녕하세요\n");
//매크로 상수는 코드 작용하는 것이 아니라
//컴파일 전에 해당하는 코드로 바꿔줌
// 소스코드에 쓴 NAME ---> "홍길동" 바꾸는 기능
#define POWER(X) (X)*(X)

int main(void) {
	printf("%s\n", NAME);
	printf("%d\n", AGE);
	PRINT;
	printf("2의 제곱 : %d\n", POWER(2));//4
	//11? or 25?---> X (X) 결과가 달라짐
	printf("2+3의 제곱 : %d\n", POWER(2 + 3));
	//							(2+3)*(2+3)
	return 0;
}

