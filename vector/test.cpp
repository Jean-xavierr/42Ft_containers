
#include <iostream>
#include <vector>
#include "vector.hpp"
#include "iterator.hpp"


int		main(void)
{

	// STD::VECTOR
	//

	std::vector<int>	vec(2,3);
	std::vector<int>	vec2(1,42);
	vec.push_back(5);
	vec.push_back(6);
	vec.push_back(7);

	vec2.push_back(43);
	vec2.push_back(44);
	std::vector<int>::iterator i = begin(vec);
	std::vector<int>::iterator it = begin(vec2);
	std::vector<int>::iterator ite = end(vec2);
	vec.insert(i + 3, it, ite);


	for (it = begin(vec); it < end(vec); it++)
		std::cout << *it << std::endl;
	// std::cout << *ite << std::endl;

	std::cout << std::endl << std::endl;

	// FT::VECTOR
	//

	ft::vector<int>	vec1(2,3);
	ft::vector<int>	vec3(1,42);

	vec1.push_back(5);
	vec1.push_back(6);
	vec1.push_back(7);

	vec3.push_back(43);
	vec3.push_back(44);
	ft::vector<int>::iterator ix = begin(vec1);
	ft::vector<int>::iterator itx = begin(vec3);
	ft::vector<int>::iterator iten = end(vec3);

	vec1.insert(ix + 3, itx, iten);
	for (itx = begin(vec1); itx < end(vec1); itx++)
		std::cout << *itx << std::endl;

	return 0;
}