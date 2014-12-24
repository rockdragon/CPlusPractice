#pragma once
#include <iostream>
#include <list>

#include "Container.h"

class List_container : public Container
{
	std::list<double> ld;
public:
	List_container();
	List_container(std::initializer_list<double> il) : ld(il){}
	~List_container();

	double& operator[](int);
	int size() const{ return ld.size(); }
};



