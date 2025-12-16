#include "Span.hpp"
#include <iostream>

void basicTest()
{

	std::cout << "\n=== Basic Test ===\n";
	Span sp(5);
	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	std::cout << "Shortest span: " << sp.shortestSpan() << "\n"; //! 2
	std::cout << "Longest span: " << sp.longestSpan() << "\n";   //! 14
}

void oneElementTest()
{

	std::cout << "\n=== One Element Tests ===\n";
	Span sp(1);
	sp.addNumber(42);
	try
	{
		std::cout << "Shortest span: " << sp.shortestSpan() << "\n";
	}
	catch (const std::exception &e)
	{
		std::cout << "Caught exception: " << e.what() << "\n";
	}
	try
	{
		std::cout << "Longest span: " << sp.longestSpan() << "\n";
	}
	catch (const std::exception &e)
	{
		std::cout << "Caught exception: " << e.what() << "\n";
	}
}

void overflowTest()
{

	std::cout << "\n=== Capacity Overflow Test ===\n";
	Span sp(2);
	try
	{
		sp.addNumber(1);
		sp.addNumber(2);
		sp.addNumber(3); // overflow
	}
	catch (const std::exception &e)
	{
		std::cout << "Caught exception: " << e.what() << "\n";
	}
}

void RandomNumberTest()
{

	std::cout << "\n=== Random Numbers Test ===\n";
	srand(time(NULL));
	Span sp(100);
	std::vector<int> randomNums;
	for (int i = 0; i < 100; ++i)
	{
		int num = rand() % 1000;
		randomNums.push_back(num);
	}

	try
	{
		sp.addNumber(randomNums.begin(), randomNums.end());
	}
	catch (const std::exception &e)
	{
		std::cout << "Exception during adding random numbers: " << e.what() << "\n";
	};

	try
	{
		std::cout << "Shortest span: " << sp.shortestSpan() << "\n";
		std::cout << "Longest span: " << sp.longestSpan() << "\n";
	}
	catch (const std::exception &e)
	{
		std::cout << "Exception during span calculation: " << e.what() << "\n";
	}
}

int main()
{
	basicTest();
	oneElementTest();
	overflowTest();
	RandomNumberTest();

	return 0;
}