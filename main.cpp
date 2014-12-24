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
	return (Func)*((int*)*(int*)(&b) + pos);
}

void virtualFuncCall(){
	Child child;
	Func pFunc = NULL;
	for (int i = 0; i < 3; ++i){
		pFunc = getFuncAtPos(child, i);
		pFunc();
	}
}

int main() {
	virtualFuncCall();

	readKey();
	return 0;
}