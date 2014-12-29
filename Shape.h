#include <iostream>
#include <memory>
using namespace std;

class Shape {
public:
	Shape(const Shape&) = delete;
	Shape& operator=(const Shape&) = delete;

	Shape(Shape&&) = delete;
	Shape& operator=(Shape&&) = delete;

	~Shape();
};
