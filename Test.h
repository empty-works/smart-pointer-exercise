#ifndef TEST_H_
#define TEST_H_

#include <iostream>
#include <memory>

class Test {

	friend std::ostream &operator<<(std::ostream &os, const Test &obj);

	private:
	int data;

	public:
	Test() :data{0}{std::cout << "Test constructor(" << data << ")" << std::endl;}
	Test(const int new_data) :data{new_data}{std::cout << "Test constructor(" << data << ")" << std::endl;}
	int get_data() {return data;}
	~Test() {std::cout << "Test destructor(" << data << ")" << std::endl;}
};

#endif
