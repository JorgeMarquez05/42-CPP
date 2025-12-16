#pragma once
#include <algorithm>
#include <stdexcept>
#include <vector>

class Span
{
  private:
  unsigned int _maxNbr;
	std::vector<int> _members;

	class OutOfBorders : public std::exception
	{
		const char *what() const throw()
		{
			return ("Cannot Add, Span Already Full");
		}
	};

  public:
	Span();
	Span(unsigned int N);
	Span(const Span &other);
	Span &operator=(const Span &other);
	~Span();

	// Member Functions
	void addNumber(int nbr);
	int shortestSpan();
	int longestSpan();
	template <typename Iter> void addNumber(Iter begin, Iter end);
};

template <typename Iter> void Span::addNumber(Iter begin, Iter end)
{
	for (Iter it = begin; it != end; ++it)
	{
		if (_members.size() >= _maxNbr)
			throw OutOfBorders();
		_members.push_back(*it);
	}
}
