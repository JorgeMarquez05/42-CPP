#include "iter.hpp"

int main()
{
	int array[5] = {1, 2, 3};
	char arr[5] = {'a', 'b', 'c'};

	::iter(array, 5, print);
	std::cout << std::endl << std::endl << std::endl;
	::iter(arr, 5, print);
}