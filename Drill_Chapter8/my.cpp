#include "my.h"
#include "std_lib_facilities.h"


void print_foo(){
	cout << foo << '\n';
}

void print(int i){
	cout << i << '\n';
}

int foo;

int main() {
	foo = 7;
	print_foo();
	print(99);
	
	
	int x = 7;
	int y = 9;
	swap_v(x,y);
	cout << "x értéke: " << x << "  y értéke: " << y << endl;
	swap_r(x,y);
	cout << "x értéke: " << x << "  y értéke: " << y << endl;
//	swap_cr(x,y); const
	
	swap_v(7,9);  //void
//	swap_r(7,9);  referenciához nincs változó létrehozva
//	swap_cr(7,9); const
	
	const int cx = 7;
	const int cy = 9;
	
	swap_v(cx,cy);
	cout << "cx értéke: " << cx << "  cy értéke: " << cy << endl;
//	swap_r(cx,cy);   const
//	swap_cr(cx,cy);  const
	
	swap_v(7.7, 9.9);   //void
//	swap_r(7.7, 9.9);   nem int
//	swap_cr(7.7, 9.9);  nem int
	
	double dx = 7.7;
	double dy = 9.9;
	
	swap_v(dx,dy);
	cout << "dx értéke: " << dx << "  dy értéke: " << dy << endl;
//	swap_r(dx,dy);      nem int
//	swap_cr(dx,dy);     const

}
