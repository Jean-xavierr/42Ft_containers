#include "map.hpp"
#include <iostream>
#include <map>
#include <string>

// (*it).first
// it.operator->()->first
// map->operator[]('i');

int main ()
{
	ft::map<char, int>	*map = new ft::map<char, int>();

	ft::map<char, int>::iterator				it;
	// ft::map<char, int>::const_iterator				itc;

	// itc = map->begin();
	map->operator[]('i');

	map->insert(ft::pair<char, int>('i', 1));
	map->insert(ft::pair<char, int>('c', 1));
	map->insert(ft::pair<char, int>('f', 3));
	// map->insert(ft::pair<char, int>('b', 2));
	// map->insert(ft::pair<char, int>('a', 2));
	map->insert(ft::pair<char, int>('g', 2));
	// map->insert(ft::pair<char, int>('e', 2));
	// map->insert(ft::pair<char, int>('b', 2));
	// map->operator[]('v');
	// map->insert(ft::pair<char, int>('b', 2));

	// it = map->begin();
	// map->insert(it, ft::pair<char, int>('z', 2));

	// std::cout << "oki" << std::endl;
	// map->operator[]('i');
	// map->operator[]('j');
	// map->operator[]('i');
	// map->operator[]('h');
	// map['i'] = 5;

	// map->insert(ft::pair<char, int>('d', 2));

	for (it = map->begin(); it != map->end(); it++)
		std::cout << "first :" << (*it).first << std::endl;

	map->clear();

	it = map->begin();
	std::cout << (*it).first << std::endl;


	// it = map->begin();
	// std::cout << "first :" << (*it).first << std::endl;

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