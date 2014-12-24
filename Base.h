#pragma once
#include <iostream>
using namespace std;

class Base
{
public:
	virtual void f() { cout << "Base::f" << endl; }
	virtual void g() { cout << "Base::g" << endl; }
	virtual void h() { cout << "Base::h" << endl; }
	void w() { cout << "Base::w" << endl; }
};

