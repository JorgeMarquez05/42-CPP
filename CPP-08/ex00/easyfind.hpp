#pragma once
#include <algorithm>
#include <stdexcept>

template <typename T> typename T::iterator easyfind(T &container, int toFind)
{
	typename T::iterator it = std::find(container.begin(), container.end(), toFind);
	if (it == container.end())
		throw std::runtime_error("Not Found");
	return (it);
}