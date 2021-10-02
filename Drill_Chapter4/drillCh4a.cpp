#include "std_lib_facilities.h"
using namespace std;

int main() {
	double num1;
	double num2;
    while (cin >> num1 >> num2) {
    	
    	// ha num1 kisebb
		if (num1 < num2) {
			cout << "the smaller value is: " << num1 <<"\n";
			cout << "the larger value is: " << num2 <<"\n";
			
			// ha majdnem egyenloek (<0.01)
			if ((num2-num1)<(1.0/100)) {
				cout << "the numbers are almost equal";
			}
		}
		
		//ha num1 nagyobb
		else if (num1 > num2) {
			cout << "the smaller value is: " << num2 <<"\n";
			cout << "the larger value is: " << num1 <<"\n";
			
			// ha majdnem egyenloek (<0.01)
			if ((num1-num2)<(1.0/100)) {
				cout << "the numbers are almost equal";
			}
		}
		// ha egyenloek
		else 
			cout << "the numbers are equal\n";
	}
    return 0;
}
