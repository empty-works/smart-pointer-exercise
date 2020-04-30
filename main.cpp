#include <iostream>
#include <vector>
#include <memory>
#include "Test.h"

std::unique_ptr<std::vector<std::shared_ptr<Test>>> make();
void fill(std::vector<std::shared_ptr<Test>>, int);
void display(std::vector<std::shared_ptr<Test>>);

int main() {

	std::unique_ptr<std::vector<std::shared_ptr<Test>>> vec_ptr;
	vec_ptr = make();
	std::cout << "How many data points do you want to enter:";
	int num;
	std::cin >> num;
	fill(*vec_ptr, num);
	display(*vec_ptr);	
	return 0;
}

std::unique_ptr<std::vector<std::shared_ptr<Test>>> make() {

	std::unique_ptr<std::vector<std::shared_ptr<Test>>> vec_ptr = std::make_unique<std::vector<std::shared_ptr<Test>>>();
	
	return vec_ptr;	
}

void fill(std::vector<std::shared_ptr<Test>>, int) {


}


