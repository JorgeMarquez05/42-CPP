#include "Array.hpp"
#include <iostream>

#include <stdlib.h>
#include <time.h>
// int main(void)
// {
// 	// int *a = new int[2];
//     // a[1] = 1;
//     // a[23] = 2;
//     // a[233] = 2;
// 	// std::cout << a << std::endl;
// 	// std::cout << a[2] << std::endl;

//     Array<int>   array;
//     std::cout << array[4] << std::endl ;
//     std::cout << array.size() << std::endl ;
//     return(0);
// }

#define MAX_VAL 750
int main(int, char **)
{
	Array<int> numbers(MAX_VAL);
	int *mirror = new int[MAX_VAL];
	srand(time(NULL));
	for (int i = 0; i < MAX_VAL; i++)
	{
		const int value = rand();
		numbers[i] = value;
		mirror[i] = value;
	}
	// SCOPE
	{
		Array<int> tmp = numbers;
		Array<int> test(tmp);
	}

	for (int i = 0; i < MAX_VAL; i++)
	{
		if (mirror[i] != numbers[i])
		{
			std::cerr << "didn't save the same value!!" << std::endl;
			return 1;
		}
	}
	try
	{
		numbers[-2] = 0;
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		numbers[MAX_VAL] = 0;
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << '\n';
	}

	for (int i = 0; i < MAX_VAL; i++)
	{
		numbers[i] = rand();
		std::cout << numbers[i] << std::endl;
	}
    std::cout << "numbers.size(): "<< numbers.size() << std::endl;
	delete[] mirror; //
	return 0;
}