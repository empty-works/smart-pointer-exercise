#include <iostream>
#include <string>
#include "Test.h"

std::ostream &operator<<(std::ostream &os, Test &obj) {

	os << "Test data: " << obj.get_data() << std::endl;
	return os;
}
