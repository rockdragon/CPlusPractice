#include <iostream>

template<typename T>
class VectorOfT {
private:
	T* elem;			// generic type
	int sz;
public:
	explicit VectorOfT(int s);		// constructor
	~VectorOfT() { delete[] elem; }

	T& operator[](int i);
	const T& operator[](int i) const;
	int size() const { return sz; }
};