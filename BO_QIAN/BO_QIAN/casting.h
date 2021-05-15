#pragma once
#include <iostream>
using namespace std;

namespace Casting {
	
	// static_cast

	class Dog {
		string m_name;
	public:
		Dog(string name) {
			m_name = name;
		}
		Dog() {}
		virtual ~Dog() {}
		virtual void bark() {}
	};

	class YellowDog : public Dog {
	public:
		~YellowDog() {}
		void bark() {}
	};

	int i = 9;
	float f = static_cast<float>(i); //convert object from one type to another.
	Dog d = static_cast<Dog>(string("Smokey")); // type conversion needs to be defined
	Dog* pd = static_cast<Dog*>(new YellowDog()); // convert pointer/refernce from one type to another
												  //

	// 2. dynamic_cast
	// a. converts pointer/reference one type to related type. ( downcast )
	// b. run type check. if succeed p1 == p2 . if fail, p2 == 0 
	// c. requires two types to be polymorphic.

	Dog* p1 = new YellowDog();
	YellowDog* p2 = dynamic_cast<YellowDog*>(p1);

	void test_dynamic_cast() {

		if (p2) {
			std::cout << "success" << std::endl;
		}
	}

	// 3. const cast 
											// works only for pointer/reference
	const char* str = "hello world.";		// works on same type.
	char* modifiable = const_cast<char*>(str); // cast away constness of object being pointed to.


	// 4. reinterpret_cast
	int p = 0x1456787;
	Dog* dd = reinterpret_cast<Dog*>(p);	// cast a type to any other type

}