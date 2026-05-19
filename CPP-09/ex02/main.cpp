#include "PmergeMe.hpp"


int main(int argc, char *argv[]) {
	if (argc == 1) {
		std::cout << "Error: Insufficient number of parameters" << std::endl;
		return (-1);
	}

	PmergeMe algo;
	algo.insertNumbers(argc, argv);
	// std::cout << "getJacobsthal(2): "<<getJacobsthal(14) << std::endl;
	// bool isEven = ((argc - 1) % 2) == 0;
	// std::cout << isEven << std::endl;

	return (0);
}