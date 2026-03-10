
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

		std::vector<int>::iterator it = easyfind(test, 4);
		std::cout << *it << std::endl;
	}
	catch(std::exception &e){
		std::cout << e.what() << std::endl;
	}

	try{

		std::vector<int>::iterator it = easyfind(test, 9);
		std::cout << *it << std::endl;
	}
	catch(std::exception &e){
		std::cout << e.what() << std::endl;
	}

}