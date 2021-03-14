#include <vector>

// 2. initialization of array member variable
class A {
	int arr[3] = { 12,34,56 };  // a.

public:
	A(int x, int y, int z): arr { x, y, z }{}	//b. overwritten

};


void showcompiler();

int main(int,char**) {
  
	/*
	// uniform initialization
	//1. dynamically allocated memory
	int* ptr = new int[3]{ 3,4,5 };

	//3. initialization of STL container
	std::vector<int>  v1{ 10,34 };
	*/


	return 0;
}
