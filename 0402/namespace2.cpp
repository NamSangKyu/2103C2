#include <iostream>
using namespace std;
namespace test {
	void Print() {
		std::cout << "Print()" << std::endl;
	}
}
using test::Print;
//using std::cout;
//using std::cin;
//using std::endl;
int main(void) {
	test::Print();
	Print();
	cout << "Hello World" << endl;
	return 0;
}
