#include "std_lib_facilities.h"
using namespace std;


double converter(double num, string unit) {
	if (unit == "m") return num;
	if (unit == "cm") return num/100;
	if (unit == "in") return converter(num*2.54, "cm");
	if (unit == "ft") return converter(num*12, "in");
}

int main() {
	
	double num;
	bool first_num = true;
	double smallest;
	double biggest;
	string unit;
	string units[4] = {"m", "cm", "in", "ft"};
	double m,cm,in,ft;
	double sumOfValues = 0;
	int numOfValues = 0;
	vector<double> values;
	
    while (cin >> num >> unit) {
    	
    	//benne van-e a units-ban
    	bool contains = false;
		for(int i = 0; i < 4; i++){
			if(units[i] == unit)
				contains = true;
		}
		
		// ha benne van a units-ban
		if (contains) {
			// a szam erteke meterben megadva
			num = converter(num, unit);
			
			// az eddig megadott szamok osszege
			sumOfValues += num;
			// a szamok darabszama
			numOfValues += 1;
			// szam berakasa a vectorba
			values.push_back(num);
			
			// az 1. bevitt szam
			if (first_num == true) {
				first_num = false;
				smallest = num;
				biggest = num;
			}
			// legkisebb szam
			if (num < smallest) {
				cout << num << " the smallest so far\n";
				smallest = num;
			}
			// legnagyobb szam
			if (num > biggest) {
				cout << num << " the largest so far\n";
				biggest = num;
			}
		}
		
		// ha nincs benne a units-ban
		if (!contains) {
			cout << "illegal unit\n";
			goto end;
		}
	}
	end:
	cout << "sumOfValues: " << sumOfValues << " meters\nnumOfValues: " << numOfValues << endl;
	
	// vector rendezese
	sort(values);
	
	//vector kiiratasa
	for(int i=0; i < values.size(); i++) {
		cout << values[i] << ' ';
	}
	return 0;
}
