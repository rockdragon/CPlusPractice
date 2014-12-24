#include "Child.h"

void Child::f() {std::cout << "Child::f" << endl; }
void Child::g() {std::cout << "Child::g" << endl; }
void Child::h() {
	Base::h();
	std::cout << "Child::h" << endl;
}
