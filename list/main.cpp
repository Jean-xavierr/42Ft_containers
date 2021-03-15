
#include <iostream>
#include <list>
#include "list.hpp"

int        main(void)
{
	std::list<int>		l1(2, 42);
	std::list<int>		l2(1, 1);

	l2.push_back(2);
	l2.push_back(3);
	l2.push_back(4);
	l2.push_back(5);

	l1.insert(l1.begin(), ++(l2.begin()), --(l2.end()));

	std::list<int>::iterator	it;

	for (it = l1.begin(); it != l1.end(); it++)
		std::cout << *it << std::endl;
	it = ++(l1.begin());
	++it;
	l1.erase(it, --(l1.end()));
	std::cout << std::endl;
	for (it = l1.begin(); it != l1.end(); it++)
		std::cout << *it << std::endl;
}