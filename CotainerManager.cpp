#include "Container.h"
#include <iostream>
using namespace std;

void use(Container &c){
    const int sz = c.size();

    for(int i=0;i!=c.size(); ++i)
        cout << c[i] <<endl;
}
