
#include <iostream>
#include <vector>
#include "vector.hpp"

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
	std::vector<int>::iterator i = vec.begin();
	std::vector<int>::iterator it = vec2.begin();
	std::vector<int>::iterator ite = vec2.end();
	vec.insert(i + 3, it, ite);


	// for (it = begin(vec); it < end(vec); it++)
	// 	std::cout << *it << std::endl;
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
	ft::vector<int>::iterator ix = vec1.begin();
	ft::vector<int>::iterator itx = vec3.begin();
	ft::vector<int>::iterator iten = vec3.end();
	ft::vector<int>::const_iterator ci = vec1.begin();
	ft::vector<int>::reverse_iterator ri = vec1.rbegin();
	ft::vector<int>::const_reverse_iterator cri = vec1.rbegin();

	std::cout << *cri << std::endl;
	std::cout << *ri << std::endl << std::endl;
	*ri += 1;

	std::cout << *ri << std::endl;

	// std::cout << *ci << std::endl;

	for (ri = vec1.rbegin(); ri != vec1.rend(); ri++)
		std::cout << *ri << std::endl;
	// vec1.insert(ix + 3, itx, iten);
	// for (itx = begin(vec1); itx < end(vec1); itx++)
	// 	std::cout << *itx << std::endl;

	return 0;
}