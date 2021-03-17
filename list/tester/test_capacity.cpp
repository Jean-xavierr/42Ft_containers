/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_capacity.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jereligi <jereligi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/17 15:45:34 by jereligi          #+#    #+#             */
/*   Updated: 2021/03/17 15:53:23 by jereligi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "constant.hpp"

void	test_capacity_std(void)
{
	std::cout << COLOR_BLUE << "----- std::list -----" << COLOR_RESET << std::endl << std::endl;
	std::cout << "For a string list : { need, to, finish, this, project }" << std::endl << std::endl;

	std::list<std::string> lst;

	lst.push_back("need");
	lst.push_back("to");
	lst.push_back("finish");
	lst.push_back("this");
	lst.push_back("project");

	std::cout << "lst.size() = " << COLOR_GREEN << lst.size() << COLOR_RESET << std::endl;
	std::cout << "lst.empty() = " << COLOR_GREEN << std::boolalpha << lst.empty() << COLOR_RESET << std::endl;
	std::cout << "lst.max_size() = " << COLOR_GREEN << lst.max_size() << COLOR_RESET << std::endl << std::endl;


	std::cout << "For an empty string list :" << std::endl;

	std::list<std::string> lst2;

	std::cout << "lst2.size() = " << COLOR_GREEN << lst2.size() << COLOR_RESET << std::endl;
	std::cout << "lst2.empty() = " << COLOR_GREEN << std::boolalpha << lst2.empty() << COLOR_RESET << std::endl << std::endl;
	next_test();
}

void	test_capacity(void)
{
	std::cout << ft_list << std::endl;
	std::cout << COLOR_CYAN <<  "Test capacity | size | empty | max_size " << COLOR_RESET << std::endl;
	std::cout << "For a string list : { need, to, finish, this, project }" << std::endl;

	ft::list<std::string> lst;

	lst.push_back("need");
	lst.push_back("to");
	lst.push_back("finish");
	lst.push_back("this");
	lst.push_back("project");

	std::cout << "lst.size() = " << COLOR_GREEN << lst.size() << COLOR_RESET << std::endl;
	std::cout << "lst.empty() = " << COLOR_GREEN << std::boolalpha << lst.empty() << COLOR_RESET << std::endl;
	std::cout << "lst.max_size() = " << COLOR_GREEN << lst.max_size() << COLOR_RESET << std::endl << std::endl;


	std::cout << "For an empty string list :" << std::endl;

	ft::list<std::string> lst2;

	std::cout << "lst2.size() = " << COLOR_GREEN << lst2.size() << COLOR_RESET << std::endl;
	std::cout << "lst2.empty() = " << COLOR_GREEN << std::boolalpha << lst2.empty() << COLOR_RESET << std::endl << std::endl;

	test_capacity_std();
}