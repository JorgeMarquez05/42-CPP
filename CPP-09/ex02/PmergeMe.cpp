#include "PmergeMe.hpp"
#include <ctime>
#include <algorithm>

PmergeMe::PmergeMe() {
}
PmergeMe::PmergeMe(const PmergeMe &other) {
	*this = other;
}

PmergeMe &PmergeMe::operator=(const PmergeMe &other) {
	if (this != &other) {
		this->v_numbers = other.v_numbers;
		this->d_numbers = other.d_numbers;
	}
	return *this;
}

PmergeMe::~PmergeMe() {
}

unsigned long PmergeMe::getJacobsthal(int k) {
	if (k % 2 == 0) {
		return ((1UL << (k + 1)) + 1) / 3;
	} else {
		return ((1UL << (k + 1)) - 1) / 3;
	}
}

static int parseToNumber(char *argv, unsigned long &nbr) {

	const char *str = argv;

	while (std::isspace(*str)) {
		str++;
	}
	if (*str == '-') {
		std::cerr << "Error: Negatives numbers aren't allowed" << std::endl;
		return EXIT_FAILURE;
	}

	char *endptr;
	nbr = std::strtoul(argv, &endptr, 10);

	if (errno == ERANGE && nbr == ULONG_MAX) {
		std::cerr << "Error: Number it's to big (Overflow)." << std::endl;
		std::cerr << "The max number allowed it's: " << ULONG_MAX << std::endl;
		return EXIT_FAILURE;
	}
	if (argv == endptr || *argv == '\0' || *endptr != '\0') {
		std::cerr << "Error: '" << argv << "' is not a valid number." << std::endl;
		return EXIT_FAILURE;
	}
	return (0);
}

void PmergeMe::insertNumbers(int argc, char *argv[]) {
	for (int idx = 1; idx < argc; idx++) {

		unsigned long nbr;
		if (parseToNumber(argv[idx], nbr)) {
			throw std::exception();
		}
		if (std::find(v_numbers.begin(), v_numbers.end(), nbr) != v_numbers.end()) {
			std::cerr << "Error: Duplicate number found => " << nbr << std::endl;
			throw std::exception();
		}

		v_numbers.push_back(nbr);
		d_numbers.push_back(nbr);
	}
}

void PmergeMe::sort() {
	std::cout << "Before: ";
	printContainer(v_numbers);
	std::cout << "Before: ";
	printContainer(d_numbers);

	std::clock_t start_v = std::clock();
	mergeInsertion<std::vector<unsigned long>, std::vector<Pair> >(v_numbers);
	std::clock_t end_v = std::clock();
	double time_v = static_cast<double>(end_v - start_v) / CLOCKS_PER_SEC * 1000000.0;

	std::clock_t start_d = std::clock();
	mergeInsertion<std::deque<unsigned long>, std::deque<Pair> >(d_numbers);
	std::clock_t end_d = std::clock();
	double time_d = static_cast<double>(end_d - start_d) / CLOCKS_PER_SEC * 1000000.0;

	std::cout << "After:  ";
	printContainer(v_numbers);
	std::cout << "After:  ";
	printContainer(d_numbers);

	std::cout << "Time to process a range of " << v_numbers.size() << " elements with std::vector : " << time_v << " us"
	          << std::endl;
	std::cout << "Time to process a range of " << d_numbers.size() << " elements with std::deque  : " << time_d << " us"
	          << std::endl;
}
