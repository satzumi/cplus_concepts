// unique pointer : exclusive ownership , light weight smart pointer
#include "unique_pointer.h"

void test() {
	Dog* pD = new Dog("Gunner");
	pD->bark();
	/* bunch of other things*/
	// memory may be leaked 
	// 1. retured
	// 2. exception occur
	delete pD;
}

void test_unique() {

	std::unique_ptr<Dog> pD{ new Dog{"Gunner"} };
	pD->bark();

}

// Memory leaked. So should be cautious of release.
void test_release() {
	std::unique_ptr<Dog> pD{ new Dog{"Gunner"} };

	Dog* p = pD.release();
	p->bark();
}

// reset - Deletes older memory.
void test_reset() {

	std::unique_ptr<Dog> pD{ new Dog{"Gunner"} };

	// Gunner would be destroyed. 
	pD.reset(new Dog{ "Somkey" });

	//Smokey is destroyed.
	pD.reset();

}

// move 
void test_move() {

	unique_ptr<Dog> pD{ new Dog{"Gunner"} };
	unique_ptr<Dog> pD2{ new Dog{"Smokey"} };

	pD->bark();

	// 1. Smokey is destroyed. 
	// 2. pD becomes nullptr
	// 3. pD2 becomes owern of Gunner
	pD2 = move(pD);

	pD2->bark();
}

void foo(unique_ptr<Dog> pD) {
	pD->bark();
}

void test_foo() {
	unique_ptr<Dog> pD{ new Dog{"Smokey"} }; 
	foo(move(pD));
	if ( pD == nullptr ) {
		std::cout << "emtpy" << std::endl;
	}
}
