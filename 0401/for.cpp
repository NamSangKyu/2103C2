#include <iostream>

int main(void) {
	//1~100까지 합을 출력
	int total = 0;

	//제어 변수 선언과 동시에 초기화
	for (int i = 1; i < 101; i++) {
		total += i;
	}
	//i++;//반복문이 끝나면서 해제
	std::cout << "합 결과 : " << total << std::endl;
	return 0;
}