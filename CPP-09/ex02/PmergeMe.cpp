#include "PmergeMe.hpp"

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

int parseToNumber(char *argv, unsigned long &nbr) {

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
		v_numbers.push_back(nbr);
		d_numbers.push_back(nbr);
		std::cout << d_numbers.back() << std::endl;
	}
}