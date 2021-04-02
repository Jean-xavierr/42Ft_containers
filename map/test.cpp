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
	ft::map<char, int>::iterator				ite;

	// map->operator[]('i');
	map->insert(ft::pair<char, int>('c', 1));
	map->insert(ft::pair<char, int>('f', 1));
	map->insert(ft::pair<char, int>('b', 2));
	map->insert(ft::pair<char, int>('d', 3));
	map->insert(ft::pair<char, int>('e', 2));
	map->insert(ft::pair<char, int>('g', 2));


	for (it = map->begin(); it != map->end(); it++)
		std::cout << "first :" << (*it).first << std::endl;

	it = map->find('f');
	std::cout << "it : " << (*it).first << " | end : " << (*map->end()).first << std::endl;
	map->erase(it, map->end());
	

	std::cout << std::endl;
	for (it = map->begin(); it != map->end(); it++)
		std::cout << "second :" << (*it).first << std::endl;

	// map->clear();

	// it = map->begin();
	// std::cout << (*it).first << std::endl;

  return 0;
}