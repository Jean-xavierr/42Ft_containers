/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   element_acces_vector.cpp                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jereligi <jereligi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/04 10:47:43 by jereligi          #+#    #+#             */
/*   Updated: 2021/03/04 11:36:53 by jereligi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../vector.hpp"
#include "constant.hpp"

void	element_acces()
{
	std::cout << ft_vector << std::endl;
	// tester [] | at | front | back 

	// FT_VECTOR
	ft::vector<int>				vec(4,42);

	std::cout << COLOR_CYAN << "Test Element access vector" << COLOR_RESET << std::endl;
	
	std::cout << COLOR_YELLOW << "vector {";
	for (size_t i = 0; i < vec.size(); i++)
	{
		std::cout << vec[i];
		if (i + 1 != vec.size())
			std::cout << ", ";
		else
			std::cout << "}" << COLOR_RESET << std::endl << std::endl;
	}

	std::cout << COLOR_CYAN << "Test ft::vector [] | at | front | back" << COLOR_RESET << std::endl << std::endl;
	
	std::cout << "vec[0] = " << vec[0] << std::endl;
	vec.push_back(43);
	std::cout << "vec.push_back(43)" << std::endl;
	std::cout << "vec[4] = " << vec[4] << std::endl;
	std::cout << "vec.at(4) = " << vec.at(4) << std::endl;
	std::cout << "vec.at(0) = " << vec.at(0) << std::endl;
	vec[0] = 50;
	std::cout << "vec[0] = 50 | vec.front() = " << vec.front() << std::endl;
	std::cout << "vec.back() = " << vec.back() << std::endl;
	vec.push_back(9);
	std::cout << "vec.push_back(9) | vec.back() = " << vec.back() << std::endl << std::endl;

	// STD_VECTOR
	std::vector<int>			vec1(4, 42);

	std::cout << COLOR_CYAN << "Test std::vector [] | at | front | back" << COLOR_RESET << std::endl << std::endl;

	std::cout << "vec[0] = " << vec1[0] << std::endl;
	vec1.push_back(43);
	std::cout << "vec.push_back(43)" << std::endl;
	std::cout << "vec[4] = " << vec1[4] << std::endl;
	std::cout << "vec.at(4) = " << vec1.at(4) << std::endl;
	std::cout << "vec.at(0) = " << vec1.at(0) << std::endl;
	vec1[0] = 50;
	std::cout << "vec[0] = 50 | vec.front() = " << vec1.front() << std::endl;
	std::cout << "vec.back() = " << vec1.back() << std::endl;
	vec1.push_back(9);
	std::cout << "vec.push_back(9) | vec.back() = " << vec1.back() << std::endl << std::endl;
	next_test();
}