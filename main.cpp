﻿#include <iostream>
#include <string>
#include <memory>
using namespace std;
#include "Vector_container.h"
#include "List_container.h"
#include "Child.h"
#include "Thing.h"
#include "Shape.h"
#include "VectorOfT.h"

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

void tryThing(){
	Thing one(3);
	one.init_by_cin();

	cout << "move a thing." << endl;
	
	Thing another(one);
	one[0] = 555;
	another.out();

	one.out();
}

int main() {
	VectorOfT<int> c(10);
	for (int i = 0; i != c.size(); i++)
		c[i] = i;
	
	int sum = 0;
	for (int i = 0; i != c.size(); i++)
		sum += c[i];
	cout << sum << endl;


	//virtualFuncCall();
	//dynamicCall();
	//Shape s;
	//tryThing();

	readKey();
	return 0;
}