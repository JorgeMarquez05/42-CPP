#include "MutantStack.hpp"
#include <iostream>
#include <list>

void subjectTest(MutantStack<int> &mstack)
{
	std::cout << "-----------Mutant Stack Test---------------- " << std::endl;

	mstack.push(5);
	mstack.push(17);
	std::cout << mstack.top() << std::endl;
	mstack.pop();
	std::cout << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	std::stack<int> s(mstack);
	std::cout << "---------------------------------------- " << std::endl;
}
void listTest(std::list<int> &testList)
{
	std::cout << "-----------List Test---------------- " << std::endl;

	testList.push_back(5);
	testList.push_back(17);

	std::cout << testList.back() << std::endl;

	testList.pop_back();

	std::cout << testList.size() << std::endl;

	testList.push_back(3);
	testList.push_back(5);
	testList.push_back(737);
	testList.push_back(0);

	std::list<int>::iterator it = testList.begin();
	std::list<int>::iterator ite = testList.end();

	++it;
	--it;

	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}

	std::cout << "---------------------------------------- " << std::endl;
}

void iterationTest(MutantStack<int> &mstack)
{
	std::cout << "\n== Iterate from begin to end ==" << std::endl;
	for (MutantStack<int>::iterator it = mstack.begin(); it != mstack.end(); ++it)
	{
		std::cout << *it << " ";
	}
	std::cout << std::endl;
}

int main()
{
	MutantStack<int> mstack;
	std::list<int> list;
	subjectTest(mstack);
	listTest(list);
	iterationTest(mstack);
	return 0;
}
