#include "PmergeMe.hpp"
#include <ctime>

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
	}
}

void PmergeMe::printVector() {
	for (std::vector<int>::size_type i = 0; i < v_numbers.size(); ++i) {
		std::cout << v_numbers[i] << " ";
	}
	std::cout << std::endl;
}
void PmergeMe::printDeque() {

	for (std::deque<int>::size_type i = 0; i < v_numbers.size(); ++i) {
		std::cout << v_numbers[i] << " ";
	}
	std::cout << std::endl;
}

void PmergeMe::mergeInsertionVector(std::vector<unsigned long> &c) {
	if (c.size() < 2) {
		return;
	}

	bool has_pendulum = (c.size() % 2) != 0;
	unsigned long pendulum = 0;
	if (has_pendulum) {
		pendulum = c.back();
		c.pop_back();
	}

	std::vector<Pair> pairs;
	for (size_t i = 0; i < c.size(); i += 2) {
		Pair p;
		if (c[i] > c[i + 1]) {
			p.winner = c[i];
			p.loser = c[i + 1];
		} else {
			p.winner = c[i + 1];
			p.loser = c[i];
		}
		pairs.push_back(p);
	}

	c.clear();
	for (size_t i = 0; i < pairs.size(); ++i) {
		c.push_back(pairs[i].winner);
	}
	mergeInsertionVector(c);

	std::vector<Pair> sorted_pairs;
	for (std::vector<unsigned long>::size_type i = 0; i < c.size(); ++i) {
		for (size_t j = 0; j < pairs.size(); ++j) {
			if (c[i] == pairs[j].winner) {
				sorted_pairs.push_back(pairs[j]);
				break;
			}
		}
	}

	c.clear();
	c.push_back(sorted_pairs[0].loser);
	for (size_t i = 0; i < sorted_pairs.size(); ++i) {
		c.push_back(sorted_pairs[i].winner);
	}

	int j_idx = 3;
	unsigned long last_jacob = 1;
	unsigned long num_pairs = sorted_pairs.size();

	while (last_jacob < num_pairs) {
		unsigned long curr_jacob = getJacobsthal(j_idx);
		unsigned long bound = curr_jacob < num_pairs ? curr_jacob : num_pairs;

		for (long i = bound - 1; i >= static_cast<long>(last_jacob); i--) {
			unsigned long element_to_insert = sorted_pairs[i].loser;

			int target_upper_bound = 0;
			while (target_upper_bound < static_cast<int>(c.size()) && c[target_upper_bound] != sorted_pairs[i].winner) {
				target_upper_bound++;
			}
			binaryInsertionVector(c, element_to_insert, target_upper_bound);
		}
		last_jacob = curr_jacob;
		j_idx++;
	}

	if (has_pendulum) {
		binaryInsertionVector(c, pendulum, c.size());
	}
}

void PmergeMe::binaryInsertionVector(std::vector<unsigned long> &mainChain, unsigned long element, int upper_bound) {
	int low = 0;
	int high = upper_bound;

	while (low < high) {
		int mid = low + (high - low) / 2;
		if (element < mainChain[mid]) {
			high = mid;
		} else {
			low = mid + 1;
		}
	}
	mainChain.insert(mainChain.begin() + low, element);
}

void PmergeMe::mergeInsertionDeque(std::deque<unsigned long> &c) {
	if (c.size() < 2) {
		return;
	}

	bool has_pendulum = (c.size() % 2) != 0;
	unsigned long pendulum = 0;
	if (has_pendulum) {
		pendulum = c.back();
		c.pop_back();
	}

	// 1. Crear Parejas
	std::vector<Pair> pairs;
	for (size_t i = 0; i < c.size(); i += 2) {
		Pair p;
		if (c[i] > c[i + 1]) {
			p.winner = c[i];
			p.loser = c[i + 1];
		} else {
			p.winner = c[i + 1];
			p.loser = c[i];
		}
		pairs.push_back(p);
	}

	c.clear();
	for (size_t i = 0; i < pairs.size(); ++i) {
		c.push_back(pairs[i].winner);
	}
	mergeInsertionDeque(c);

	std::vector<Pair> sorted_pairs;
	for (std::deque<unsigned long>::size_type i = 0; i < c.size(); ++i) {
		for (size_t j = 0; j < pairs.size(); ++j) {
			if (c[i] == pairs[j].winner) {
				sorted_pairs.push_back(pairs[j]);
				break;
			}
		}
	}

	c.clear();
	c.push_back(sorted_pairs[0].loser);
	for (size_t i = 0; i < sorted_pairs.size(); ++i) {
		c.push_back(sorted_pairs[i].winner);
	}

	int j_idx = 3;
	unsigned long last_jacob = 1;
	unsigned long num_pairs = sorted_pairs.size();

	while (last_jacob < num_pairs) {
		unsigned long curr_jacob = getJacobsthal(j_idx);
		unsigned long bound = curr_jacob < num_pairs ? curr_jacob : num_pairs;

		for (long i = bound - 1; i >= static_cast<long>(last_jacob); i--) {
			unsigned long element_to_insert = sorted_pairs[i].loser;

			int target_upper_bound = 0;
			while (target_upper_bound < static_cast<int>(c.size()) && c[target_upper_bound] != sorted_pairs[i].winner) {
				target_upper_bound++;
			}
			binaryInsertionDeque(c, element_to_insert, target_upper_bound);
		}
		last_jacob = curr_jacob;
		j_idx++;
	}

	if (has_pendulum) {
		binaryInsertionDeque(c, pendulum, c.size());
	}
}
void PmergeMe::binaryInsertionDeque(std::deque<unsigned long> &mainChain, unsigned long element, int upper_bound) {
	int low = 0;
	int high = upper_bound;

	while (low < high) {
		int mid = low + (high - low) / 2;
		if (element < mainChain[mid]) {
			high = mid;
		} else {
			low = mid + 1;
		}
	}
	mainChain.insert(mainChain.begin() + low, element);
}

void PmergeMe::sort() {
	std::cout << "Before: ";
	printVector();
	std::cout << "Before: ";
	printDeque();

	std::clock_t start_v = std::clock();
	mergeInsertionVector(v_numbers);
	std::clock_t end_v = std::clock();
	double time_v = static_cast<double>(end_v - start_v) / CLOCKS_PER_SEC * 1000000.0;

	std::clock_t start_d = std::clock();
	mergeInsertionDeque(d_numbers);
	std::clock_t end_d = std::clock();
	double time_d = static_cast<double>(end_d - start_d) / CLOCKS_PER_SEC * 1000000.0;

	std::cout << "After:  ";
	printVector();
	std::cout << "After:  ";
	printDeque();

	std::cout << "Time to process a range of " << v_numbers.size() << " elements with std::vector : " << time_v << " us"
	          << std::endl;
	std::cout << "Time to process a range of " << d_numbers.size() << " elements with std::deque  : " << time_d << " us"
	          << std::endl;
}
