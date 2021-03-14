
#include <iostream>

void showcompiler()
{
#if defined _MSC_VER_
	std::cout << "visual c++" << std::endl;
#elif defined __clang__
	std::cout << "clang" << std::endl;
#elif defined __GNUG__
	std::cout << "gnu" << std::endl;
#else
	std::cout << "unknown compiler" << std::endl;
#endif
}

// # - stringizing operator
// ## - concatenation operator

//make string from an identifier
//1. make helper macro  
#define MAKE_STR2(X)  #X
//2. define the macro you want to use
#define MAKE_STR(X)	MAKE_STR2(X)

//cancatenate
//1. make helper macro
#define MERGE2(x,y)		x##y
//2. define the macro you want to use
#define MERGE(x,y)	MERGE2(x,y)

void macroExpansion() {
#define NUMBER 42
	
	std::string s3 = { MAKE_STR2(NUMBER) };			// s3 = "NUMBER"
	std::string s4 = { MAKE_STR(NUMBER) };			// s4 = "42"
	
}
