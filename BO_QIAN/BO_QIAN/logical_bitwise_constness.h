#pragma once

#include <vector>
using namespace std;
namespace LogicalConstness {

	class BigArray {
		vector<int> v;
		mutable int accCounter;
		int* v2;
	public:
		BigArray() {
			accCounter = -1;
			v2 = new int[10];
		}
		int getItem(int index) const {
			accCounter++;	
			return v[index];
		}

		// bitwise contness
		void setV2Item(int index, int x) const {
			*(v2 + index) = x;
		}
	};


}