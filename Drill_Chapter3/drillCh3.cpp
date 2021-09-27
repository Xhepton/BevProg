#include "std_lib_facilities.h"
using namespace std;

int main()
{
		string first_name  = "noName1";														// 1.
		string friend_name = "noName2";														// 3.
		char friend_sex = 0;																// 4.
		int age = 42;																		// 5.
		 
		 
        cout << "Enter the name of the person you want to write to:\n";    					// 1.
        cin >> first_name;             														// 1.
        cout << "Enter the name of the other friend\n";										// 3.
        cin >> friend_name;																	// 3.
        cout << "Enter the sex of the other friend (male=m, female=f):\n";					// 4.
        cin >> friend_sex;																	// 4.
        cout << "Enter recipient's age:\n";													// 5.
        cin >> age;																			// 5.
         
         
        cout << "Dear, " << first_name << "!\n";											// 1.
        cout << "How are you?\n" << "I am fine thank you!\n";								// 2.
		cout << "Have you seen " << friend_name << " lately?\n";							// 3.
		 
		 
        if (friend_sex=='m') {																// 4.
			 cout << "If you see " << friend_name << " please ask him to call me\n"; 		// 4.
		}
		if (friend_sex=='f') {																// 4.
			 cout << "If you see " << friend_name << " please ask her to call me\n";		// 4.
		}
		if (age<=0 || age>=110) {															// 5.
			simple_error("you're kidding!");												// 5.
		}
		else {																				// 5.
			cout << "hear you just had a birthday and you are " << age << " years old.\n";	// 5.
		}
		if (age<12) {																		// 6.
			cout << "Next year you will be " << age + 1 <<"\n";								// 6.
		}
		if (age == 17) {																	// 6.
			cout << "Next year you will be able to vote.\n";								// 6.
		}
		if (age > 70) {																		// 6.
			cout << "I hope you are enjoying retirement.\n";								// 6.
		}
		
		cout << "\n\nYours sincerely, Daniel";												// 7.
		
		return 0;
}
    
