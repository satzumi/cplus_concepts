#pragma once
#include <iostream>
// const 
// A compile time contstraing that object can not be modified.
namespace Const {

	using namespace std;
	class Dog {
		int age;
		string name;
	public:
		Dog() { age = 3; name = "micky"; }

		void setAge(const int& a) {	    // called when passing var const
			age = a;
			cout << "const" << endl;
		}
		void setAge(int& a) {			// called when passing var is non const
			cout << "non const" << endl;
			age = a;
		}
		const string getName() {
			return name;
		}

	};


	// why use const
	//	a. Guard against inadvertent modifying the variable.
	//	b. Self document
	//  c. Enable code optimization.
	//  d. const means variable can be put in ROM.


	void test_basic(){

		const int i = 9;
		int j = 10;
		// i = 6;    // give compile time error.
		const int* ptr = &i;  // data is constant , pointer is not.

		int* const ptr2 = &j; // pointer is constant , data is not.

	}

	void test_const_override() {
		int a = 4;
		const int b = 6;
		Dog d1;
		d1.setAge(a);
		d1.setAge(b);
	}

	

}