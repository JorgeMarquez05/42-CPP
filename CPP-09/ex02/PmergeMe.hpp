
#include <cerrno>
#include <climits>
#include <cstdlib>
#include <deque>
#include <iostream>
#include <vector>

class PmergeMe {
  private:
	std::vector<unsigned long> v_numbers;
	std::deque<unsigned long> d_numbers;

	struct Pair {
		unsigned long winner;
		unsigned long loser;
	};
	unsigned long getJacobsthal(int k);
	void printVector();
	void printDeque();

	void mergeInsertionVector(std::vector<unsigned long> &c);
	void binaryInsertionVector(std::vector<unsigned long> &mainChain, unsigned long element, int upper_bound);

	void mergeInsertionDeque(std::deque<unsigned long> &c);
	void binaryInsertionDeque(std::deque<unsigned long> &mainChain, unsigned long element, int upper_bound);

  public:
	PmergeMe();
	PmergeMe(const PmergeMe &other);
	PmergeMe &operator=(const PmergeMe &other);
	~PmergeMe();

	void insertNumbers(int argc, char *argv[]);

	void sort();
};
