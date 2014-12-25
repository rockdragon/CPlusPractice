#include <iostream>
using namespace std;
#include "Vector_container.h"
#include "List_container.h"
#include "Child.h"

void use(Container &c) {
	const int sz = c.size();

	for (int i = 0; i != c.size(); ++i)
		cout << c[i] << endl;
}

void g() {
	Vector_container vc{ 1, 2, 3, 4, 5 };
	use(vc);
}
void f(){
	List_container l{ 1, 2, 3, 5, 8 };
	use(l);
}
void readKey(){
	int x;
	cin >> x;
}

typedef void(*Func)(void);
Func getFuncAtPos(Base &b, int pos){
	return (Func)*((long*)*(long*)(&b) + pos);
}

void virtualFuncCall(){
	Child child;
	cout << "Instance Base Address:" << (&child) << endl;
	cout << "Virtual Functions Table Address:" << (long*)(&child) << endl;
	cout << "Virutal Functions Table's First Function Address:" << (long*)*(long*)(&child) << endl;
	Func pFunc = nullptr;
	for (int i = 0; i < 3; ++i){
		pFunc = getFuncAtPos(child, i);
		pFunc();
	}
	Base *b = &child;
	b->w();
}

void dynamicCall(){
	Child child;
	Base *b = &child;

	(dynamic_cast<Child&>(*b)).f();
}

int main() {
	//virtualFuncCall();

	dynamicCall();

	readKey();
	return 0;
}