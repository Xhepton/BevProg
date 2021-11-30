#include "std_lib_facilities.h"

int* ga = new int[10];

int factorial(int n) {
	if (n == 1) 
		return 1;
	else
		return n*factorial(n-1);
}

void f(int* a, int n) {
	int* la = new int[10];
	la = ga;
	for (int i = 0; i<10; i++) {
		cout << la[i] << " ";
	}
	cout << endl;
	
	int* p = new int[n];
	
	p = a;
	
	for (int i = 0; i<n; i++) {
		cout << p[i] << " ";
	}
	cout << endl;
	
	delete[] p;
}

int main() {
	
	for (int i = 0; i<10; i++) {
		ga[i] = pow(2, i);
	}
	
	f(ga, 10);
	
	int* aa = new int[10];
	
	for (int i = 1; i<=10; i++) {
		aa[i] = factorial(i);
	}
	
	f(aa, 10);
	
	return 0;
}