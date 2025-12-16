
#include <iostream>
#include <vector>
#include "easyfind.hpp"

int main(void)
{
	std::vector<int> test;

	test.push_back(4);
	test.push_back(3);
	test.push_back(2);
	test.push_back(1);

	try{

		easyfind(test, 4);
	}
	catch(std::exception &e){
		std::cout << e.what() << std::endl;
	}

	try{

		easyfind(test, 9);
	}
	catch(std::exception &e){
		std::cout << e.what() << std::endl;
	}

}