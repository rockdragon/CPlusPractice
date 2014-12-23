#include "Vector.h"
#include "Container.h"

class Vector_container : public Container {
    Vector v;
public:
    Vector_container(int s) : v{s} {
    }

    Vector_container(std::initializer_list<double> lst) : v{lst} {
    }

    ~Vector_container() {
    }

    double &operator[](int i) {
        return v[i];
    }

    int size() const {
        return v.size();
    }
};
