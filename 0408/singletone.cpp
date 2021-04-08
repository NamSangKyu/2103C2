/*
	파일명 : singletone
	개  요 : 싱글톤 패턴 예제
	
	프로그램 시작부터 끝날때까지 객체 하나만 가지고 활용
*/
#include <iostream>
using namespace std;

class Number {
private:
	static int count;
	//1. 자기자신 타입을 가리킬 private static pointer
	static Number* instance;
	//2. private 생성자 : 외부 생성을 막음
	Number() {
		cout << "Number()" << endl;
	}
public:
	//3. instance를 리턴시킬 static 함수 필요
	static Number& GetInstance() {
		//객체가 만약에 생성이 안됬으면 생성
		if (instance == NULL) 
			instance = new Number();
		return *instance;
	}
	void PrintCount() {
		cout << "현재 Count 값 : " << count << endl;
	}
};
int Number::count = 0;
Number* Number::instance = NULL;
int main(void) {
	Number &n = Number::GetInstance();
	n.PrintCount();
	Number::GetInstance().PrintCount();
	return 0;
}