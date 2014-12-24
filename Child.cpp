#include "Child.h"

void Child::f() { cout << "Child::f" << endl; }
void Child::g() { cout << "Child::g" << endl; }
void Child::h() {
	Base::h();
	cout << "Child::h" << endl;
}
