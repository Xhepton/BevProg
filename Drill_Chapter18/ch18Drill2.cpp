#include "std_lib_facilities.h"

vector<int> gv(10);

int factorial(int n) {
	if (n == 1) 
		return 1;
	else
		return n*factorial(n-1);
}

void f(vector<int> a) {
	
	vector<int> lv(a.size());
	for (int i = 0; i<10; i++) {
		lv[i] = gv[i];
	}
	for (int i = 0; i<10; i++) {
		cout << lv[i] << " ";
	}
	vector<int> lv2;
	lv2 = a;
	for (int i = 0; i<10; i++) {
		
	}
}

int main() {
	
	for (int i = 0; i<10; i++) {
		gv[i] = pow(2,i);
	}
	
	f(gv);
	
	vector<int> vv(10);
	for (int i = 0; i<10; i++) {
		vv[i] = factorial(i);
	}
	
	f(vv);
	
	return 0;
}