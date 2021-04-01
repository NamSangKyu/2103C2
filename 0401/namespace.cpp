#include <iostream>
namespace Print {
	void PrintMessage() {
		std::cout << "PrintMessage 1" << std::endl;
	}
}
namespace Message {
	void PrintMessage() {
		std::cout << "PrintMessage 2" << std::endl;
	}
}
int main(void) {
	Print::PrintMessage();
	Message::PrintMessage();
	return 0;
}