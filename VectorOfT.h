#pragma once
#pragma once
#include <iostream>

template<typename T>
class VectorOfT {
private:
	T* elem;			// generic type
	int sz;
public:
	explicit VectorOfT(int s)	// constructor
	{
		elem = new T[s];
		sz = s;
	}
	~VectorOfT() { delete[] elem; }

	T& operator[](int i) { return elem[i]; }
	const T& operator[](int i) const;
	int size() const { return sz; }	

	template<typename T>
	T* begin(VectorOfT<T>& x){
		return x.size() ? &x[0] : nullptr;
	}
	template<typename T>
	T* end(VectorOfT<T>& x){
		return begin(x) + x.size();
	}
};
