
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
	l1.push_back(89);
	std::cout << std::endl;
	for (it = l1.begin(); it != l1.end(); it++)
		std::cout << *it << std::endl;

	it = ++l2.begin();
	++it;
	++it;
	l1.splice(++l1.begin(), l2, it);

	std::cout << std::endl << "Splice : " << std::endl;	
	for (it = l1.begin(); it != l1.end(); it++)
		std::cout << *it << std::endl;

	l2.push_back(5);
	l2.push_back(2);
	l2.push_back(3);
	l2.push_back(3);
	std::cout << std::endl << "l2" << std::endl;
	for (it = l2.begin(); it != l2.end(); it++)
		std::cout << *it << std::endl;
	l2.unique();
	std::cout << std::endl << "l2 unique" << std::endl;
	for (it = l2.begin(); it != l2.end(); it++)
		std::cout << *it << std::endl;
	l2.sort();
	std::cout << std::endl << "l2 sort" << std::endl;
	for (it = l2.begin(); it != l2.end(); it++)
		std::cout << *it << std::endl;
	l2.push_back(9);
	l2.push_back(12);
	std::list<int>		l3(1, 1);
	l3.push_back(8);
	l3.push_back(11);
	l3.push_back(10);
	l3.push_back(50);

	l2.sort();
	std::cout << std::endl << "l2 sort" << std::endl;
	for (it = l2.begin(); it != l2.end(); it++)
		std::cout << *it << std::endl;
	l3.sort();
	std::cout << std::endl << "l3 sort" << std::endl;
	for (it = l3.begin(); it != l3.end(); it++)
		std::cout << *it << std::endl;
	l2.merge(l3);
	std::cout << std::endl << "l2 merge" << std::endl;
	for (it = l2.begin(); it != l2.end(); it++)
		std::cout << *it << std::endl;
}