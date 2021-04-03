#include <map>
#include "map.hpp"
#include <vector>
#include <iostream>
#include "utils.hpp"

// (*it).first
// it.operator->()->first
// map->operator[]('i');

int main ()
{
	ft::map<char, int>	*map = new ft::map<char, int>();

	// ft::map<char, int>::iterator				it;
	// ft::map<char, int>::iterator				ite;

	// map->operator[]('i');
	map->insert(ft::pair<char, int>('c', 1));
	map->insert(ft::pair<char, int>('f', 1));
	map->insert(ft::pair<char, int>('b', 2));


	std::cout << "max_size : " << map->max_size() << std::endl;
	std::map<char, int>	*map2 = new std::map<char, int>();

	map2->insert(std::pair<char, int>('c', 1));
	map2->insert(std::pair<char, int>('f', 1));
	map2->insert(std::pair<char, int>('b', 2));
std::cout << "max_size : " << map2->max_size() << std::endl;
	// map->insert(ft::pair<char, int>('a', 2));
	// map->insert(ft::pair<char, int>('d', 3));
	// map->insert(ft::pair<char, int>('e', 2));
	// map->insert(ft::pair<char, int>('g', 2));


	// for (it = map->begin(); it != map->end(); it++)
	// 	std::cout << "first :" << (*it).first << std::endl;

	// it = map->find('c');
	// std::cout << "it : " << (*it).first << std::endl;
	// map->erase(it);
	

	// // std::cout << std::endl;
	// for (it = map->begin(); it != map->end(); it++)
	// 	std::cout << "second :" << (*it).first << std::endl;


	// std::cout << std::endl << std::endl;


	// ft::map<int, int>	int_int_map;

	// int_int_map[66] = 66;
	// int_int_map[47] = 47;
	// int_int_map[74] = 74;
	// int_int_map[54] = 54;
	// int_int_map[71] = 71;
	// int_int_map[53] = 53;
	// int_int_map[59] = 59;
	// int_int_map[69] = 69;
	// int_int_map[72] = 72;

	// std::cout << "int_int_map : " << std::endl << int_int_map << std::endl;

	// ft::map<int, int>::iterator itx = int_int_map.begin();

	// std::cout << "ft::map<int, int>::iterator itx = int_int_map.begin();" << std::endl;

	// itx = int_int_map.find(66);
	// // itx++;
	// // itx++;
	// // itx++;
	// // itx++;

	// std::cout << "itx++" << std::endl;
	// std::cout << "itx++" << std::endl;
	// std::cout << "itx++" << std::endl;
	// std::cout << "itx++" << std::endl << std::endl;

	// std::cout << "*itx : " << *itx << std::endl << std::endl;

	// int_int_map.erase(itx);
	// std::cout << "int_int_map.erase(it);" << std::endl << std::endl;

	// ft::map<char, int>::reverse_iterator				rit;

	// rit = map->rbegin();
	// std::cout << (*rit).first << std::endl;
	// rit--;
	// std::cout << (*rit).first << std::endl;
	// map->clear();

	// it = map->begin();
	// std::cout << (*it).first << std::endl;

  return 0;
}