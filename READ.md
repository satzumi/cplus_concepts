

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

* macro expansion
	After the arguments for the invocation of a function-like macro have been identified, argument substitution takes place. A parameter in the replacement list, unless preceded by a # or ## preprocessing token or followed by a ## preprocessing token (see below), is replaced by the corresponding argument after all the macros contained therein have been expanded. Before being substituted, each argument's preprocessing tokens are completely macro replaced as if they formed the rest of the preprocessing file; no other preprocessing tokens are available.
	
