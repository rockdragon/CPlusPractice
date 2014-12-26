#include <iostream>
using namespace std;

class Thing{
private:
	double *elem;
	int sz;
public:
	Thing(int i) : elem{ new double[i] }, sz(i){}
	Thing(Thing&&t) : elem{ t.elem }, sz{t.sz}{
		t.elem = nullptr;
		t.sz = 0;
	}	
	double& operator[](int i){ return elem[i]; }

	// unnecessary
	//~Thing(){ 
	//	if (elem != nullptr)
	//		delete[] elem;
	//}

	void init_by_cin(){
		cout << "please input " << sz << " elements: " << endl;
		for (int i = 0; i != sz; ++i)
			cin >> elem[i];
	}

	void out(){
		cout << "out elemnts:-------------" << endl;
		for (int i = 0; i != sz; ++i)
			cout << elem[i] << endl;
	}
};