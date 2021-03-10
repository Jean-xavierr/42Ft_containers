
#include <iostream>
#include <list>
#include "list.hpp"

int        main(void)
{
	// constructors used in the same order as described above:
	// std::list<int> first;                                // empty list of ints
	// std::list<int> second (4,100);                       // four ints with value 100
	// std::list<int> third (second.begin(),second.end());  // iterating through second
	// std::list<int> fourth (third);                       // a copy of third
	
	// int	myint[] = {0, 2, 4, 6, 8};
	// std::list<int>	l(myint, myint + 5);

	// std::cout << "mylist contains:";
  	// for (std::list<int>::iterator it = l.begin(); it != l.end(); ++it)
    // 	std::cout << ' ' << *it;

	ft::list<int>	node;
	ft::list<int>	x;

	node.push_back(4);
	node.push_back(5);
	node.push_back(6);
	node.push_front(3);
	node.push_front(2);
	std::cout << "List completed : " << std::endl;
	node.print_list();
	std::cout << std::endl;
	node.pop_back();
	node.pop_front();
	node.pop_front();
	node.print_list();
	std::cout << "SWAP" << std::endl;
	x.push_back(1);
	x.push_back(1);
	x.push_back(1);
	node.swap(x);
	std::cout << "x : " << std::endl;
	x.print_list();
	std::cout << "node : " << std::endl;
	node.print_list();


	node.clear();
	// std::cout << "Clear()" << std::endl;
	// node.print_list();
	std::cout << "size node : " << node.size() << std::endl;
	std::cout << "size x : " << x.size() << std::endl;

	std::cout << "front : " << x.front() << std::endl;

	std::cout << "front : " << x.back() << std::endl;

	std::list<int>	list;
	std::cout << "max size node : " << node.max_size() << std::endl;
	std::cout << "max size list : " << list.max_size() << std::endl;


	ft::list<int>::iterator		it;
	for (it = x.begin(); it != x.end(); it++)
		std::cout << *it << std::endl;

	ft::list<int>	y(2, 8);
	std::cout << "Y : " << std::endl;
	for (it = y.begin(); it != y.end(); it++)
		std::cout << *it << std::endl;

	ft::list<int>	y2(y);
	std::cout << "Y2 : " << std::endl;
	for (it = y2.begin(); it != y2.end(); it++)
		std::cout << *it << std::endl;
	return (0);
}