#pragma once

// const 
// A compile time contstraing that object can not be modified.
namespace Const {

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
}