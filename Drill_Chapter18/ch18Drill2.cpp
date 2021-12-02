#include "std_lib_facilities.h"
vector<int> gv(10);
int factorial(int n) {
    if (n == 1)
        return 1;
    else
        return n*factorial(n-1);
}
void f(vector<int> a) {
    
    vector<int> lv;
    for (int i = 0; i<10; i++) {
        lv.push_back(gv[i]);
    }
    cout << "gv értékei: ";
    for (int i = 0; i<10; i++) {
        cout << lv[i] << " ";
    }
    cout << endl;
    vector<int> lv2(10);
    lv2 = a;
    cout << "argumentum értékei: ";
    for (int i = 0; i<10; i++) {
        cout << lv2[i] << " ";
    }
    cout << endl;
}
int main() {
    
    for (int i = 0; i<10; i++) {
        gv[i] = pow(2,i);
    }
    f(gv);
    vector<int> vv(0);
    for (int i = 0; i<10; i++) {
        vv.push_back(factorial(i+1));
    }
    
    f(vv);
    
    return 0;
}
