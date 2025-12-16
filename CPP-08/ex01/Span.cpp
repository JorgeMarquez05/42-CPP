#include "Span.hpp"
#include <limits>

Span::Span() : _maxNbr(0), _members()
{
}

Span::Span(unsigned int N) : _maxNbr(N), _members()
{
}
Span::Span(const Span &other) : _maxNbr(other._maxNbr), _members(other._members)
{
}

Span &Span::operator=(const Span &other)
{
	if (this != &other)
	{
		_maxNbr = other._maxNbr;
		_members = other._members;
	}
	return (*this);
}

Span::~Span()
{
}

void Span::addNumber(int nbr)
{
	if (_members.size() >= _maxNbr)
		throw OutOfBorders();
	_members.push_back(nbr);
}

int Span::shortestSpan()
{
	if (_members.size() < 2)
		throw std::runtime_error("Not enough elements to find a span");

	std::vector<int> tmp = _members;
	std::sort(tmp.begin(), tmp.end());

	int shortest = std::numeric_limits<int>::max();

	for (size_t i = 1; i < tmp.size(); ++i)
	{
		int diff = tmp[i] - tmp[i - 1];
		if (diff < shortest)
			shortest = diff;
	}
	return (shortest);
}

int Span::longestSpan()
{
	if (_members.size() < 2)
		throw std::runtime_error("Not enough elements to find a span");

	std::vector<int>::const_iterator min = std::min_element(_members.begin(), _members.end());
	std::vector<int>::const_iterator max = std::max_element(_members.begin(), _members.end());

	return (*max - *min);
}
