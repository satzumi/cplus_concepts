#pragma once
#include <iostream>
using namespace std;

namespace SharedPtr {
	class Cat {
		string m_name;
	public:
		Cat() {
			cout << "Created nameless cat:" << endl;
			m_name = "nameless";
		}
		Cat(string name) : m_name{ name } {
			cout << "Cat created: " << m_name << endl;
		}
		~Cat() {
			cout << "Cat destroyed: " << m_name << endl;
		}

		void name(string name) {
			m_name = name;
		}
	};

	void test_basics();
	void test_badusage();
	void test_make();
	void test_customdeleter();
}
