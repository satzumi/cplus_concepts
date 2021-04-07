#include <iostream>

// before c++11
//Before C++11, a constructor with a single parameter was considered a converting //constructor (because it takes a value of another type and creates a new instance of //the type out of it).


//With C++11, every constructor without the explicit specifier is considered a //converting constructor


struct foo {
	foo() {
		std::cout << "foo()" << std::endl;
	}
	foo(const int a) {
		std::cout <<"foo(a)" << std::endl;
	}
	foo(const int a, const int b) {
		std::cout << "foo(a,b)" << std::endl;
	}
	/*
	foo(std::initializer_list<int> l) {
		std::cout << "foo(l)" << std::endl;
	}
	*/
};

void bar(foo const f) {

}

int main(int,char**) {
	
	foo f1;
	foo f2{};
	
	foo f3(1);
	foo f4 = 1;
	foo f5 {1};
	foo f6 = {1};
	foo f7 (1,2);
	foo f8 {1,2};
	foo f9 = {1,2};
	
	bar({});			// foo()
	bar(1);				// foo(a)
	bar({1,2});			// foo(a,b)
	
}