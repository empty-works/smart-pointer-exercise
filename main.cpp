#include <iostream>
#include <vector>
#include <memory>
#include "Test.h"

std::unique_ptr<std::vector<std::shared_ptr<Test>>> make();
void fill(std::vector<std::shared_ptr<Test>>, size_t);
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

void fill(std::vector<std::shared_ptr<Test>> test_vec , size_t num_data) {

	for(size_t i{0}; i < num_data; i++) {
	
		std::cout << "Enter data point [" << i << "] : ";
		int num;
		std::cin >> num;
		std::shared_ptr<Test> new_test = std::make_shared<Test>(num);
	}
}

void display(std::vector<std::shared_ptr<Test>>) {


}
