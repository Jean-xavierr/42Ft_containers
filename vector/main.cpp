
#include <iostream>
#include <vector>
#include "Vector.hpp"

int main(void)
{
	std::vector<int> first;
	std::vector<int> second(5, 10);
	std::vector<int> third(second.begin(), second.end());
	std::vector<int> fourth(third);
	std::vector<int> five(5);


	std::cout << "container vector second : ";
	for (std::vector<int>::iterator it = second.begin(); it != second.end(); it++)
		std::cout << " " << *it;

	std::cout << std::endl << second[3] << std::endl;

	for (int i = 0; i < (int)five.size(); i++)
		std::cout << five[i] << std::endl;

	ft::vector<int> test(2, 3);
	return 0;
}
