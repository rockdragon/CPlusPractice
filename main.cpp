#include <iostream>
using namespace std;
#include "Vector_container.h"

void use(Container &c) {
	const int sz = c.size();

	for (int i = 0; i != c.size(); ++i)
		cout << c[i] << endl;
}

void g() {
	Vector_container vc{ 1, 2, 3, 4, 5 };
	use(vc);
}

int main() {
	g();
	return 0;
}