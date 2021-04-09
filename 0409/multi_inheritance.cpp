#include <iostream>
using namespace std;
class A {
public:
	A() {
		cout << "A Constructor" << endl;
	}
	~A() {
		cout << "A DeConstructor" << endl;

	}
};

class B : virtual public A {
public:
	B() {
		cout << "B Constructor" << endl;
	}
	~B() {
		cout << "B DeConstructor" << endl;
	}
};
class C : virtual public A {
public:
	C() {
		cout << "C Constructor" << endl;
	}
	~C() {
		cout << "C DeConstructor" << endl;
	}
};
class D : public C, public B {
public:
	D() {
		cout << "D Constructor" << endl;
	}
	~D() {
		cout << "D DeConstructor" << endl;
	}
};
int main(void) {
	D d;
	
	return 0;
}