
#include <iostream>
#include <vector>
#include "Vector.hpp"

int main(void)
{
	ft::vector<int>		arr(2, 43);
	std::vector<int>			arr1(2, 43);

	arr.push_back(45);
	std::cout << arr.size() << " | " << arr.capacity() << std::endl;
	std::cout << arr.front() << " | " <<  arr.back() << std::endl << std::endl;

	arr1.push_back(45);
	std::cout << arr1.size() << " | " << arr1.capacity() << std::endl;
	std::cout << arr1.front() << " | " <<  arr1.back() << std::endl;
	return 0;
}
