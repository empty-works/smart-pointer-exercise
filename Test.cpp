#include <iostream>
#include "Test.h"

std::ostream &operator<<(std::ostream &os, const Test &obj) {

	os << "Test data: " <</* obj.get_data() <<*/ std::endl;
	return os;
}
