/*
	ÆÄÀÏ¸í : object_copy.cpp

*/
#include <iostream>
#include <cstring>
#include <cstdlib>
using namespace std;
struct Person {
	char name[30];
	int age;
};
struct Person_ptr {
	char* name;
	int age;
};
int main(void) {
	/*Person p = { "È«±æµ¿",20 };
	Person s = p;
	strcpy_s(s.name, sizeof(s.name), "±èÃ¶¼ö");
	cout << s.name << " " << s.age << endl;
	cout << p.name << " " << p.age << endl;*/
	Person_ptr p;
	p.name = (char*)malloc(strlen("È«±æµ¿") + 1);
	strcpy_s(p.name, strlen("È«±æµ¿") + 1, "È«±æµ¿");
	p.age = 20;
	Person_ptr s = p;
	strcpy_s(s.name, strlen("±èÃ¶¼ö") + 1, "±èÃ¶¼ö");
	cout << p.name << " " << p.age << endl;
	cout << s.name << " " << s.age << endl;
	return 0;
}


