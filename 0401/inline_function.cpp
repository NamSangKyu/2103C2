#include <iostream>
//inline 함수는 #define으로 함수를 만든 효과를 줌
//단 inline은 컴파일러가 사용자가 넣지 않아도, 넣어도 함수에따라서 자동으로 넣거나 뺀다
inline int Plus(int n1, int n2) {
	return n1 + n2;
}
int main(void) {
	for(int i=0;i<5000;i++)
		std::cout << Plus(10, 20) << std::endl;
	return 0;
}