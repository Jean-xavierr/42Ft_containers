/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   modifiers_vector.cpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jereligi <jereligi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/04 11:36:28 by jereligi          #+#    #+#             */
/*   Updated: 2021/03/04 15:03:09 by jereligi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../vector.hpp"
#include "constant.hpp"



void	ft_modifiers_vector()
{
	std::cout << ft_vector << std::endl;
	// tester [] | at | front | back 
	// FT_VECTOR
	std::cout << COLOR_CYAN << "Test Modifiers vector" << COLOR_RESET << std::endl<< std::endl;
	
	ft::vector<int>				vec(4,42);
	std::cout << COLOR_CYAN << "Test ft::vector assign | push_back | pop_back | insert \
	| erase | swap | clear" << COLOR_RESET << std::endl << std::endl;
	std::cout << COLOR_YELLOW << "vector {";
	for (size_t i = 0; i < vec.size(); i++)
	{
		std::cout << vec[i];
		if (i + 1 != vec.size())
			std::cout << ", ";
		else
			std::cout << "}" << COLOR_RESET << std::endl << std::endl;
	}

	vec.assign(2, 120);
	std::cout << "vec.assign(2, 120)" << std::endl;
	std::cout << "vec[4] = " << vec[4] << " | vec[5] = " << vec[5] << std::endl;
	vec.push_back(7);
	vec.push_back(8);
	std::cout << "vec.push_back(7)" << std::endl;
	std::cout << "vec.push_back(8)" << std::endl;

	std::cout << COLOR_YELLOW << "vector {";
	for (size_t i = 0; i < vec.size(); i++)
	{
		std::cout << vec[i];
		if (i + 1 != vec.size())
			std::cout << ", ";
		else
			std::cout << "}" << COLOR_RESET << std::endl << std::endl;
	}
	
	vec.pop_back();
	std::cout << "vec.pop_back()" << std::endl;
	std::cout << COLOR_YELLOW << "vector {";
	for (size_t i = 0; i < vec.size(); i++)
	{
		std::cout << vec[i];
		if (i + 1 != vec.size())
			std::cout << ", ";
		else
			std::cout << "}" << COLOR_RESET << std::endl << std::endl;
	}
	vec.pop_back();
	vec.pop_back();
	std::cout << "vec.pop_back()" << std::endl;
	std::cout << "vec.pop_back()" << std::endl;
	std::cout << COLOR_YELLOW << "vector {";
	for (size_t i = 0; i < vec.size(); i++)
	{
		std::cout << vec[i];
		if (i + 1 != vec.size())
			std::cout << ", ";
		else
			std::cout << "}" << COLOR_RESET << std::endl << std::endl;
	}
	ft::vector<int>::iterator	it = vec.begin();
	vec.insert(it, 1);
	vec.insert(it + 5, 9);
	std::cout << "it = vec.begin()" << std::endl;
	std::cout << "vec.insert(it, 1)" << std::endl;
	std::cout << "vec..insert(it + 5, 9)" << std::endl;
	std::cout << COLOR_YELLOW << "vector {";
	for (size_t i = 0; i < vec.size(); i++)
	{
		std::cout << vec[i];
		if (i + 1 != vec.size())
			std::cout << ", ";
		else
			std::cout << "}" << COLOR_RESET << std::endl << std::endl;
	}
	vec.insert(it + 1, 4, 0);
	std::cout << "vec.insert(it + 1, 4, 0)" << std::endl;
	std::cout << COLOR_YELLOW << "vector {";
	for (size_t i = 0; i < vec.size(); i++)
	{
		std::cout << vec[i];
		if (i + 1 != vec.size())
			std::cout << ", ";
		else
			std::cout << "}" << COLOR_RESET << std::endl << std::endl;
	}
	it = vec.begin();
	vec.insert(it, it + 4, it + 6);
	std::cout << "vec.insert(it, it + 4, it + 6);" << std::endl;
	std::cout << COLOR_YELLOW << "vector {";
	for (size_t i = 0; i < vec.size(); i++)
	{
		std::cout << vec[i];
		if (i + 1 != vec.size())
			std::cout << ", ";
		else
			std::cout << "}" << COLOR_RESET << std::endl << std::endl;
	}

}

void	std_modifiers_vector()
{
	// tester [] | at | front | back 
	// std_VECTOR
	
	std::vector<int>				vec1(4,42);
	std::cout << COLOR_CYAN << "Test std::vector assign | push_back | pop_back | insert \
	| erase | swap | clear" << COLOR_RESET << std::endl << std::endl;
	std::cout << COLOR_YELLOW << "vector {";
	for (size_t i = 0; i < vec1.size(); i++)
	{
		std::cout << vec1[i];
		if (i + 1 != vec1.size())
			std::cout << ", ";
		else
			std::cout << "}" << COLOR_RESET << std::endl << std::endl;
	}

	vec1.assign(2, 120);
	std::cout << "vec.assign(2, 120)" << std::endl;
	std::cout << "vec[4] = " << vec1[4] << " | vec[5] = " << vec1[5] << std::endl;
	vec1.push_back(7);
	vec1.push_back(8);
	std::cout << "vec.push_back(7)" << std::endl;
	std::cout << "vec.push_back(8)" << std::endl;

	std::cout << COLOR_YELLOW << "vector {";
	for (size_t i = 0; i < vec1.size(); i++)
	{
		std::cout << vec1[i];
		if (i + 1 != vec1.size())
			std::cout << ", ";
		else
			std::cout << "}" << COLOR_RESET << std::endl << std::endl;
	}
	
	vec1.pop_back();
	std::cout << "vec.pop_back()" << std::endl;
	std::cout << COLOR_YELLOW << "vector {";
	for (size_t i = 0; i < vec1.size(); i++)
	{
		std::cout << vec1[i];
		if (i + 1 != vec1.size())
			std::cout << ", ";
		else
			std::cout << "}" << COLOR_RESET << std::endl << std::endl;
	}
	vec1.pop_back();
	vec1.pop_back();
	std::cout << "vec.pop_back()" << std::endl;
	std::cout << "vec.pop_back()" << std::endl;
	std::cout << COLOR_YELLOW << "vector {";
	for (size_t i = 0; i < vec1.size(); i++)
	{
		std::cout << vec1[i];
		if (i + 1 != vec1.size())
			std::cout << ", ";
		else
			std::cout << "}" << COLOR_RESET << std::endl << std::endl;
	}
	std::vector<int>::iterator	it = vec1.begin();
	vec1.insert(it, 1);
	vec1.insert(it + 5, 9);
	std::cout << "it = vec.begin()" << std::endl;
	std::cout << "vec.insert(it, 1)" << std::endl;
	std::cout << "vec..insert(it + 5, 9)" << std::endl;
	std::cout << COLOR_YELLOW << "vector {";
	for (size_t i = 0; i < vec1.size(); i++)
	{
		std::cout << vec1[i];
		if (i + 1 != vec1.size())
			std::cout << ", ";
		else
			std::cout << "}" << COLOR_RESET << std::endl << std::endl;
	}
	vec1.insert(it + 1, 4, 0);
	std::cout << "vec.insert(it + 1, 4, 0)" << std::endl;
	std::cout << COLOR_YELLOW << "vector {";
	for (size_t i = 0; i < vec1.size(); i++)
	{
		std::cout << vec1[i];
		if (i + 1 != vec1.size())
			std::cout << ", ";
		else
			std::cout << "}" << COLOR_RESET << std::endl << std::endl;
	}
	it = vec1.begin();
	vec1.insert(it, it + 4, it + 6);
	std::cout << "vec.insert(it, it + 4, it + 6);" << std::endl;
	std::cout << COLOR_YELLOW << "vector {";
	for (size_t i = 0; i < vec1.size(); i++)
	{
		std::cout << vec1[i];
		if (i + 1 != vec1.size())
			std::cout << ", ";
		else
			std::cout << "}" << COLOR_RESET << std::endl << std::endl;
	}

}