#include <iostream>

class Vector {
private:
    double* elem; // elem points to an array of sz doubles
    int sz;
public:
    Vector(int s) :elem{new double[s]}, sz{s} // constructor: acquire resources
    {
        for (int i=0; i!=s; ++i) // initialize elements
            elem[i]=0;
    }
    Vector::Vector(std::initializer_list<double> lst) // initialize with a list
            :elem{new double[lst.size()]}, sz{static_cast<int>(lst.size())}
    {
        copy(lst.begin(),lst.end(),elem); // copy from lst into elem (§10.6)
    }
    ~Vector() { delete[] elem; } // destructor: release resources
    double& operator[](int i);
    int size() const;
};