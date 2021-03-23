#include "map.hpp"
#include <iostream>
#include <map>
#include <string>

int main ()
{
	ft::map<char, int>	*map = new ft::map<char, int>();

	// ft::map<char, int>::iterator	it;

	std::cout << map->size() << std::endl;
	map->operator[]('b');


	std::cout << "MAP" << std::endl;

	std::map<char, int>	*m = new std::map<char, int>();

	m->insert(std::pair<char,int>('a',100) );
	std::map<char, int>::iterator	it = m->begin();

	std::cout << "it : " << it->first << std::endl;

  return 0;
}