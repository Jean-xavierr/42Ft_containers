#include "map.hpp"
#include <iostream>
#include <map>
#include <string>

// (*it).first
// it.operator->()->first

int main ()
{
	ft::map<char, int>	*map = new ft::map<char, int>();

	// map->operator[]('b');

	map->insert(ft::pair<char, int>('c', 1));
	map->insert(ft::pair<char, int>('a', 1));
	map->insert(ft::pair<char, int>('d', 1));
	ft::map<char, int>::iterator	it;

	for (it = map->begin(); it != map->end(); it++)
		std::cout << (*it).first << std::endl;


	// for (it = map->begin(); it != map->end(); it++)
	// 	std::cout << "key : " << (*it).first << " | " << "val : " << (*it).second << std::endl;

	// std::map<char, int>	*map2 = new std::map<char, int>();
	// map2->insert(std::pair<char, int>('a', 1));
	// map2->insert(std::pair<char, int>('e', 2));
	// map2->insert(std::pair<char, int>('c', 3));
	// map2->insert(std::pair<char, int>('d', 4));
	// map2->insert(std::pair<char, int>('f', 2));
	// std::map<char, int>::iterator	it;

	// for (it = map2->begin(); it != map2->end(); it++)
	// 	std::cout << (*it).first << " " << (*it).second << std::endl;


  return 0;
}