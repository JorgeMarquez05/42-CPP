#include "PmergeMe.hpp"

int main(int argc, char *argv[]) {
	if (argc == 1) {
		std::cout << "Error: Insufficient number of parameters" << std::endl;
		return (-1);
	}

	PmergeMe algo;
	algo.insertNumbers(argc, argv);
	algo.sort();

	return (0);
}