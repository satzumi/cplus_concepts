#pragma once
#include <string>
#include <iostream>
using namespace std;
namespace WeakPtr {

	class Dog {
		
		//shared_ptr<Dog> m_pFriend;    // cyclic refrence
		weak_ptr<Dog> m_pFriend;		// same as raw pointer
										// protected refrence . ie if the object it is referin
										// is deleted, the pointer becomes null. 
										// can't delete 
		
	public:
		string m_name;
		Dog(string name) {
			std::cout << "created :" << name << " " << endl;
			m_name = name;
		}

		~Dog() {
			std::cout << "Destroyed:" << m_name << endl;
		}
		void makefriend(shared_ptr<Dog> f) {
			m_pFriend = f;
		}

		void friend_info() {
			if (!m_pFriend.expired() ) {
				cout << m_pFriend.lock()->m_name << endl;
			}
			else {
				cout << "I have No friend" << endl;
			}
		}
	};

	void test_basic();
	void test_deletion();
}