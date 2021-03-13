

* non-static member variables initialization
before
	initialization is done in constructor
after
	a. in class declaration ( default member initialization )
	b. in constructor

* scoped enumeration
	before 
		unscoped enumeration e.g enum Color { Red, Blue }
	
	after
		enum class Color { Red , Blue }
		enum struct Animal { Lion, Tiger, Leopard}
		
		// c++20
		struct foo {
			enum class Status {Unknown,Created,Connected}
			using enum Status;
		};
		foo::Status s = foo::Created;	// instead of 
										// foo::Status::Created
