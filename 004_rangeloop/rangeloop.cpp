
#include <iostream>
#include <vector>

void range() {
	std::vector<int> items{ 12,43, 54,11,33 };
	
	for (auto i : items) {
		std::cout << i << std::endl;
	}
	
	int ages[] = { 12,90,78,55,65 };
	for (auto& a : ages) {
		a += 5;
	}
}