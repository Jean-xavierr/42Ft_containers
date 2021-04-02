#include <map>
#include <iostream>

int		main(void)
{
	std::map<char, int>		*map = new std::map<char, int>();

	map->insert(std::pair<char, int>('i', 1));
	map->insert(std::pair<char, int>('c', 1));
	map->insert(std::pair<char, int>('f', 3));
	map->insert(std::pair<char, int>('g', 3));

	std::map<char, int>::iterator		it;

	for (it = map->begin(); it != map->end(); it++)
		std::cout << (*it).first << std::endl;

	it = map->lower_bound ('d');
	std::cout << (*it).first << std::endl;
	return (0);
}