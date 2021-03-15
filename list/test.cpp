#include "list.hpp"
#include <iostream>


int			main(void)
{
	ft::list<int>				l(2,42);
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
	l1.erase(++(l1.begin()), l1.end());
	std::cout << std::endl << "l1 : " << std::endl;
	for (it = l1.begin(); it != l1.end(); it++)
		std::cout << *it << std::endl;
	return 0;
}