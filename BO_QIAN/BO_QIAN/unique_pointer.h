#pragma once

#include <string>
#include <iostream>

using namespace std;
class Dog {
public:
	string m_name;
	void bark() { cout << "Dog " << m_name << " rules!" << endl; }

	Dog() :m_name{ "nameless" } { cout << "nameless dog created"; }
	Dog(string name) :m_name{ name } {
		cout << "Dog is created:" << m_name << endl;
	}
	~Dog() {
		cout << "Dog is destroyed" << m_name << endl;
	}
};

 void test();
 void test_unique();
 void test_release();
 void test_reset();
 void test_move();
 void test_foo();