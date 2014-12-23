#include <iostream>

using namespace std;

#include "Vector_container.h"

void use(Container &c) {
    const int sz = c.size();

    for (int i = 0; i != c.size(); ++i)
        cout << c[i] << endl;
}

void g() {
    Vector_container vc{10, 11, 12, 13};
    use(vc);
}

int main() {
    g();
    return 0;
}