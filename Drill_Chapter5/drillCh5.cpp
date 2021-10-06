#include "std_lib_facilities.h"
int main()
try {
	// 1.
    cout << "Success!1\n";
    // 2.
	cout << "Success!2\n";
	// 3.
	cout << "Success" << "!3\n";
	// 4.
	cout << "success4" << '\n';
	// 5.
	int res = 7; vector<int> v(10); v[5] = res; cout << "Success!5\n";
	// 6.
	v[5] = 7; if (v[5]==7) cout << "Success!6\n";
	// 7.
	if (true) cout << "Success!7\n"; else cout << "Fail!\n";
	// 8.
	bool c = true; if (c) cout << "Success!8\n"; else cout << "Fail!\n";
	// 9.
	string s = "ape"; c = true; if (c) cout << "Success!9\n";
	// 10.
	s = "ape"; if (s=="ape") cout << "Success!10\n";
	// 11.
	s = "fool"; if (s=="fool") cout << "Success!11\n";
	// 12.
	s = "ape"; if (s!="fool") cout << "Success!12\n";
	// 13.
	vector<char> v13(5); for(int i=0; i<v13.size(); ++i) cout << "Success!13\n";
	// 14.
	vector<char> v14(5); for(int i=0; i<=v14.size(); ++i) cout << "Success!14\n";
	// 15.
	s = "Success!15\n"; for (int i=0; i<11; ++i) cout << s[i];
	// 16.
	if (true) cout << "Success!16\n"; else cout << "Fail!\n";
	// 17.
	int x = 2000; int c17 = x; if (c17==2000) cout << "Success!17\n";
	// 18.
	s = "Success!18\n"; for(int i=0; i<11; ++i) cout << s[i];
	// 19.
	vector<bool> v19(5); for(int i=0; i<=v19.size(); ++i) cout << "Success!19\n";
	// 20.
	int i=0; int j = 9; while (i<10) ++i; if (j<i) cout << "Success!20\n";
	// 21.
	x = 3; double d = 5/(x-2); if (d==2*x-1) cout << "Success!21\n";
	// 22.
	s = "Success!22\n"; for(int i=0; i<=10; ++i) cout << s[i];
	// 23.
	i=0; j=9; while (i<10) ++i; if (j<i) cout << "Success!23\n";
	// 24.
	x = 4; d = 5/(x-2); if (d=0.5*x+0.5) cout << "Success!24\n";
	// 25.
	cout << "Success!25\n"; 
    keep_window_open();
    return 0;
}
catch (exception& e) {
          cerr << "error: " << e.what() << '\n';
          keep_window_open();
          return 1;
}
catch (...) {
          cerr << "Oops: unknown exception!\n";
          keep_window_open();
          return 2;
}
