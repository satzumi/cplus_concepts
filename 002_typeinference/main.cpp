#include <iostream>
#include <vector>
int type_inference() {
	
	{
		auto a = 10;	// a is an integer
		auto b = 4.5;	// b is a float
		auto c = a;		// c is an integer
	}
	
	// reduce verbosity of the code.
	{

		std::vector<int> a, b;
		std::vector<int> v{ 12,34,56,78 };
		
		//before c++11
		for (std::vector<int>::iterator itr = v.begin(); itr != v.end(); itr++) {
			a.push_back(*itr);
		}

		//c++11
		for (auto itr = v.begin(); itr != v.end(); itr++) {
			b.push_back(*itr);
		}
	}
	return 0;
}