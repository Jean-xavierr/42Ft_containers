#include "list.hpp"
#include <iostream>

bool single_digit (const int& value) { return (value<13); }

int			main(void)
{
	ft::list<int>				l(2,42);
	ft::list<int>				l2(2,8);
	ft::list<int>				l3(1, 12);
	ft::list<int>::iterator		it;

	for (it = l.begin(); it != l.end(); it++)
		std::cout << *it << std::endl;
	std::cout << std::endl << std::endl;
	



	l.push_back(43);
	l.push_front(41);
	l.push_front(40);
	for (it = l.begin(); it != l.end(); it++)
		std::cout << *it << std::endl;
	std::cout << std::endl << std::endl;




	l.insert(l.begin(), 39);
	l.insert(++(l.begin()), 38);
	l.push_front(37);
	std::cout << "size : " << l.size() << std::endl;
	for (it = l.begin(); it != l.end(); it++)
		std::cout << *it << std::endl;
	std::cout << std::endl;

	l.insert(--(l.end()), 3, 59);
	std::cout << "size : " << l.size() << std::endl;
	for (it = l.begin(); it != l.end(); it++)
		std::cout << *it << std::endl;

	ft::list<int>				l1(2,1);

	std::cout << std::endl << "l1 : " << std::endl;
	l1.insert(++(l1.begin()), ++(l.begin()), l.end());
	for (it = l1.begin(); it != l1.end(); it++)
		std::cout << *it << std::endl;

	l1.erase(++(l1.begin()));
	l1.erase(++(l1.begin()));
	// l1.erase(++(l1.begin()), l1.end());
	std::cout << std::endl << "l2 : " << std::endl;
	for (it = l2.begin(); it != l2.end(); it++)
		std::cout << *it << std::endl;
	
	l2.splice(l2.begin(), l3, l3.begin());
	std::cout << std::endl << "l2 : " << std::endl;
	for (it = l2.begin(); it != l2.end(); it++)
		std::cout << *it << std::endl;
	ft::list<int>				l4(2, 70);
	l4.push_back(71);
	l4.push_back(75);

	l2.splice(l2.end(), l4);
	std::cout << std::endl << "l2 splice: " << std::endl;
	for (it = l2.begin(); it != l2.end(); it++)
		std::cout << *it << std::endl;
	l2.push_back(70);
	std::cout << std::endl << "l2 push: " << std::endl;
	for (it = l2.begin(); it != l2.end(); it++)
		std::cout << *it << std::endl;

	std::cout << std::endl << "l4  " << std::endl;
	for (it = l4.begin(); it != l4.end(); it++)
		std::cout << *it << std::endl;

	// l2.remove_if(single_digit);
	l2.unique();
	std::cout << std::endl << "l2 remove: " << std::endl;
	for (it = l2.begin(); it != l2.end(); it++)
		std::cout << *it << std::endl;
	return 0;
}