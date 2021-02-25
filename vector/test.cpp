
#include <iostream>
#include <vector>
#include "Vector.hpp"
#include "Iterator.hpp"


int		main(void)
{
	// std::vector<int>	vec(4,5);
	// std::vector<int>::iterator it;

	// it = begin(vec);
	// std::cout << *it << std::endl;

	// vec.insert(it + 1, 12);
	// for (it = begin(vec); it < end(vec); it++)
	// 	std::cout << *it << std::endl;

	// std::cout << std::endl;
	// vec.assign(3, 2);
	// for (it = begin(vec); it < end(vec); it++)
	// 	std::cout << *it << std::endl;

	ft::vector<int>	vec1(4,3);
	ft::vector<int>::iterator ite = begin(vec1);
	vec1.push_back(5);
	ft::vector<int>::iterator iten = end(vec1);
	std::cout << *ite << std::endl;
	std::cout << *iten << std::endl;

	std::cout << "Test" << std::endl;
	for (ite = begin(vec1); ite <= end(vec1); ite++)
		std::cout << *ite << std::endl;
	int nb = *ite != *iten;
	std::cout << nb << std::endl;
	return 0;
}