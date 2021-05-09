#include "weak_pointer.h"

namespace WeakPtr {
	
	void test_basic() {
		std::cout << " ----------- test basics ------------" << std::endl;

		shared_ptr<Dog> pD{ new Dog{"Smokey"} }; 
		shared_ptr<Dog> pD2{ new Dog{"Gunner"} };

		pD->makefriend(pD2);
		pD2->makefriend(pD);
	}

	void test_deletion() {
		std::cout << " ----------- test deletion ------------" << std::endl;
		shared_ptr<Dog> pD{ new Dog{"Smokey"} };
		{
			shared_ptr<Dog> pD2{ new Dog{"Gunner"} };

			pD->makefriend(pD2);
			pD->friend_info();
		}
		
		pD->friend_info();
		
	}


}