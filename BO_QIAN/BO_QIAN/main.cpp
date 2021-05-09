#include "weak_pointer.h"


int main(int,char**) 
{
	WeakPtr::test_basic();
	WeakPtr::test_deletion();

	return 0;
}