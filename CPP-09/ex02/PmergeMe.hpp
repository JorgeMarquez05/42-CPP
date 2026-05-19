
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

	template <typename Container, typename PairContainer> void createPairs(Container &c, PairContainer &pairs) {
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
	}

	template <typename Container, typename PairContainer>
	void mapSortedPairs(const Container &sorted_winners, const PairContainer &original_pairs,
	                    PairContainer &sorted_pairs) {
		for (typename Container::size_type i = 0; i < sorted_winners.size(); ++i) {
			for (size_t j = 0; j < original_pairs.size(); ++j) {
				if (sorted_winners[i] == original_pairs[j].winner) {
					sorted_pairs.push_back(original_pairs[j]);
					break;
				}
			}
		}
	}

	template <typename Container> void binaryInsertion(Container &mainChain, unsigned long element, int upper_bound) {
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

	template <typename Container, typename PairContainer> void mergeInsertion(Container &c) {
		if (c.size() < 2) {
			return;
		}

		bool has_pendulum = (c.size() % 2) != 0;
		unsigned long pendulum = 0;
		if (has_pendulum) {
			pendulum = c.back();
			c.pop_back();
		}

		PairContainer pairs;
		createPairs(c, pairs);

		c.clear();
		for (size_t i = 0; i < pairs.size(); ++i) {
			c.push_back(pairs[i].winner);
		}

		mergeInsertion<Container, PairContainer>(c);

		PairContainer sorted_pairs;
		mapSortedPairs(c, pairs, sorted_pairs);

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
				while (target_upper_bound < static_cast<int>(c.size()) &&
				       c[target_upper_bound] != sorted_pairs[i].winner) {
					target_upper_bound++;
				}
				binaryInsertion(c, element_to_insert, target_upper_bound);
			}
			last_jacob = curr_jacob;
			j_idx++;
		}

		if (has_pendulum) {
			binaryInsertion(c, pendulum, c.size());
		}
	}

	template <typename Container> void printContainer(const Container &c) {
		for (typename Container::size_type i = 0; i < c.size(); ++i) {
			std::cout << c[i] << " ";
		}
		std::cout << std::endl;
	}

  public:
	PmergeMe();
	PmergeMe(const PmergeMe &other);
	PmergeMe &operator=(const PmergeMe &other);
	~PmergeMe();

	void insertNumbers(int argc, char *argv[]);

	void sort();
};
