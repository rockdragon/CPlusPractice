#include "VectorOfT.h"

template<typename T>
const T& VectorOfT<T>::operator[](int i) const
{
	return elem[i];
}