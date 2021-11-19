#include "std_lib_facilities.h"

struct Point {
	int x;
	int y;
};

int main() {
	
	cout << "please enter input seven (x,y) pairs: ";
	vector<Point> original_points;
	
	int x;
	int y;
	int i = 0;
	
	while(i < 7 && cin >> x >> y) {
		original_points.push_back(Point{x, y});
		i++;
	}
		
	//fálj létrehozás és írás
	ofstream myFile;
	myFile.open("mydata.txt");
	if(!myFile)
		error("Can't open this file");
	for (auto Point : original_points) {
		myFile << Point.x << " "<< Point.y << endl;
	}
	myFile.close();	
	
	//fálj olvasás
	ifstream f;
	f.open("mydata.txt");
	if(!f)
		error("Can't open this file");
	vector<Point> processed_points;
	while(f >> x >> y)
		processed_points.push_back(Point{x,y});
	f.close();
	
	//kiíratás
	for (auto p: original_points)
		cout << p.x << " " << p.y << endl;
	for (auto p: processed_points)
		cout << p.x << " " << p.y << endl;
	
	//hibaüzenet
	if(original_points.size() != processed_points.size())
		error("Something's wrong!");
		
	return 0;
}