#ifndef TEST_H_
#define TEST_H_

#include <iostream>

class Test {

	private:
	int data;

	public:
	Test() :data{0}{std::cout << "Test constructor(" << data << ")" << std::endl;}
	Test(const int new_data) :data{new_data}{std::cout << "Test constructor(" << data << ")";}
};

#endif