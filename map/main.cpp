#include <map>
#include "map.hpp"
#include <iostream>

int		main(void)
{
	ft::map<char, int>		*map = new ft::map<char, int>();
	ft::map<char, int>		*map2 = new ft::map<char, int>();

	// map->insert(ft::pair<char, int>('i', 1));
	// map->insert(ft::pair<char, int>('c', 1));
	// map->insert(ft::pair<char, int>('f', 3));
	// map->insert(ft::pair<char, int>('g', 3));
	map->operator[]('x') = 2;
	map->operator[]('x') = 2;

	ft::map<std::string, int>	str_int_map;

	// str_int_map["coucou"];

	// str_int_map.operator[]("coucou") = 3;
	

	map2->insert(ft::pair<char, int>('a', 1));
	map2->insert(ft::pair<char, int>('b', 1));
	map2->insert(ft::pair<char, int>('d', 3));

	map->insert(map2->begin(), map2->end());

	ft::map<char, int>::iterator		it;

	for (it = map->begin(); it != map->end(); it++)
		std::cout << (*it).first << std::endl;

	it = map->lower_bound ('d');
	std::cout << (*it).first << std::endl;
	return (0);
}