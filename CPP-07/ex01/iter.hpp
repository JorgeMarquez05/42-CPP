#pragma once
#include <iostream>

template <typename T>
void iter(T x[], const size_t size, void(f)(T x))
{
	for (size_t idx = 0; idx < size; ++idx)
	{
		f(x[idx]);
	}
}

template <typename T>
void print(T n)
{
	std::cout << "n: " << n << std::endl;
}