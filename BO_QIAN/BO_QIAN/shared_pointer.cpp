#include "shared_pointer.h"

namespace SharedPtr {
	void test_basics() {
		shared_ptr<Cat> p{ new Cat{} };
		{
			shared_ptr<Cat>p2 = p;	// count is 2	

			// Return number of shared_ptr instances including (this) managing 
			// the current object.
			std::cout << "Use count: " << p.use_count() << std::endl;
		}
		// count = 1
		std::cout << "Use count: " << p.use_count() << std::endl;

	}


	void test_badusage() {

		Cat* raw{ new Cat{} };
		
		// p1 and p2  don't know if other is also managing the raw pointer.
		// will lead to crash 

		// remember : object should be assigned to a smart pointer as soon as it is created. 
		// raw pointer shouldn't be used again. 
		shared_ptr<Cat> p1{ raw };  
		shared_ptr<Cat> p2{ raw };
	}

	void test_make() {
		// not exception safe
		{
			shared_ptr<Cat> notsafe{ new Cat{} };
		}
		// exception safe
		{
			shared_ptr<Cat> safe = make_shared<Cat>();
		}
	}
	
	void test_customdeleter() {
		shared_ptr<Cat> p1 = make_shared<Cat>("Mika");	// default deleter
		shared_ptr<Cat> p2 = shared_ptr<Cat>{ new Cat{"Rosy"}, [](Cat* p) {std::cout << "custom delete."; delete p; } };
	
		shared_ptr<Cat> p3 = shared_ptr<Cat>{ new Cat[3], [](Cat* p) { delete[] p; } };

	}
}