/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_iterator.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jereligi <jereligi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/17 15:55:29 by jereligi          #+#    #+#             */
/*   Updated: 2021/03/17 16:41:23 by jereligi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "constant.hpp"


void	test_operator_over_ite_std(void)
{
	std::cout << COLOR_BLUE << "----- std::list -----" << COLOR_RESET << std::endl << std::endl;
	std::list<bool> lst;

	lst.push_back(true);
	lst.push_back(false);
	lst.push_back(false);
	lst.push_back(true);
	lst.push_back(false);
	lst.push_back(true);

	std::cout << std::endl << "For a bool list lst = { ";
	for (std::list<bool>::iterator it = lst.begin(); it != lst.end(); it++)
		std::cout  << COLOR_CYAN << std::boolalpha << COLOR_RESET << *it << " ";
	std::cout << "}" << std::endl << std::endl;

	std::list<bool>::iterator it_begin = lst.begin();
	std::list<bool>::iterator it_end = lst.end();

	std::cout << "For it_begin = lst.begin()" << std::endl;
	std::cout << "For it_end = lst.end()" << std::endl << std::endl;

	std::cout << "it_begin == it_end = " << COLOR_GREEN << std::boolalpha << (it_begin == it_end) << COLOR_RESET << std::endl;
	std::cout << "it_begin == it_begin = " << COLOR_GREEN << std::boolalpha << (it_begin == it_begin) << COLOR_RESET << std::endl << std::endl;

	std::cout << COLOR_YELLOW  << "operator!=() " << COLOR_RESET << std::endl;

	std::cout << "it_begin != it_end = " << COLOR_GREEN << std::boolalpha << (it_begin != it_end) << COLOR_RESET << std::endl;
	std::cout << "it_begin != it_begin = " << COLOR_GREEN << std::boolalpha << (it_begin != it_begin) << COLOR_RESET << std::endl << std::endl;

	std::cout << COLOR_YELLOW << "operator*() " << COLOR_RESET << std::endl << std::endl;

	std::cout << "*(it_begin++) = " << COLOR_GREEN << std::boolalpha << *(it_begin++) << COLOR_RESET << std::endl;
	std::cout << "*(it_begin++) = " << COLOR_GREEN << std::boolalpha << *(it_begin++) << COLOR_RESET << std::endl;
	std::cout << "*(it_begin++) = " << COLOR_GREEN << std::boolalpha << *(it_begin++) << COLOR_RESET << std::endl;
	std::cout << "*(it_begin++) = " << COLOR_GREEN << std::boolalpha << *(it_begin++) << COLOR_RESET << std::endl;
	std::cout << "*(it_begin++) = " << COLOR_GREEN << std::boolalpha << *(it_begin++) << COLOR_RESET << std::endl;
	std::cout << "*(it_begin++) = " << COLOR_GREEN << std::boolalpha << *(it_begin++) << COLOR_RESET << std::endl << std::endl;
	next_test();
}

void	test_operator_over_ite(void)
{
	std::cout << ft_list << std::endl;
	std::cout << COLOR_CYAN <<  "Test overload operator | == | != | * " << COLOR_RESET << std::endl << std::endl;
	std::cout << COLOR_YELLOW << "operator==() " << COLOR_RESET << std::endl;

	ft::list<bool> lst;

	lst.push_back(true);
	lst.push_back(false);
	lst.push_back(false);
	lst.push_back(true);
	lst.push_back(false);
	lst.push_back(true);

	std::cout << std::endl << "For a bool list lst = { ";
	for (ft::list<bool>::iterator it = lst.begin(); it != lst.end(); it++)
		std::cout  << COLOR_CYAN << std::boolalpha << COLOR_RESET << *it << " ";
	std::cout << "}" << std::endl << std::endl;

	ft::list<bool>::iterator it_begin = lst.begin();
	ft::list<bool>::iterator it_end = lst.end();

	std::cout << "For it_begin = lst.begin()" << std::endl;
	std::cout << "For it_end = lst.end()" << std::endl << std::endl;

	std::cout << "it_begin == it_end = " << COLOR_GREEN << std::boolalpha << (it_begin == it_end) << COLOR_RESET << std::endl;
	std::cout << "it_begin == it_begin = " << COLOR_GREEN << std::boolalpha << (it_begin == it_begin) << COLOR_RESET << std::endl << std::endl;

	std::cout << COLOR_YELLOW  << "operator!=() " << COLOR_RESET << std::endl;

	std::cout << "it_begin != it_end = " << COLOR_GREEN << std::boolalpha << (it_begin != it_end) << COLOR_RESET << std::endl;
	std::cout << "it_begin != it_begin = " << COLOR_GREEN << std::boolalpha << (it_begin != it_begin) << COLOR_RESET << std::endl << std::endl;

	std::cout << COLOR_YELLOW << "operator*() " << COLOR_RESET << std::endl << std::endl;

	std::cout << "*(it_begin++) = " << COLOR_GREEN << std::boolalpha << *(it_begin++) << COLOR_RESET << std::endl;
	std::cout << "*(it_begin++) = " << COLOR_GREEN << std::boolalpha << *(it_begin++) << COLOR_RESET << std::endl;
	std::cout << "*(it_begin++) = " << COLOR_GREEN << std::boolalpha << *(it_begin++) << COLOR_RESET << std::endl;
	std::cout << "*(it_begin++) = " << COLOR_GREEN << std::boolalpha << *(it_begin++) << COLOR_RESET << std::endl;
	std::cout << "*(it_begin++) = " << COLOR_GREEN << std::boolalpha << *(it_begin++) << COLOR_RESET << std::endl;
	std::cout << "*(it_begin++) = " << COLOR_GREEN << std::boolalpha << *(it_begin++) << COLOR_RESET << std::endl << std::endl;

	test_operator_over_ite_std();
}

void	test_iterator_std(void)
{
	std::list<std::string> lst;

	std::cout << COLOR_BLUE << "----- std::list -----" << COLOR_RESET << std::endl << std::endl;
	std::cout << "For a string list : { youtube, twitch, reddit, facebook }" << std::endl;

	lst.push_back("youtube");
	lst.push_back("twitch");
	lst.push_back("reddit");
	lst.push_back("facebook");

	std::cout << "For it.begin != it.end();" << std::endl;
	std::cout << "++it;" << std::endl;
	for (std::list<std::string>::iterator it = lst.begin(); it != lst.end(); ++it)
		std::cout << COLOR_GREEN << *it << COLOR_RESET << std::endl;

	std::cout << std::endl;

	std::cout << "*(lst.begin()) = " << COLOR_GREEN << *(lst.begin()) << COLOR_RESET << std::endl << std::endl;

	std::cout  << COLOR_YELLOW << "---- ITERATOR OVERLOADS ----" << COLOR_RESET << std::endl;
	std::list<std::string>::iterator it2 = lst.begin();

	std::cout << "it2 = lst.begin();" << std::endl;

	std::cout << "++it2 = " << COLOR_GREEN << *(++it2) << COLOR_RESET << std::endl;
	std::cout << *it2 << std::endl;
	std::cout << "--it2 = " << COLOR_GREEN << *(--it2) << COLOR_RESET << std::endl;
	std::cout << *it2 << std::endl << std::endl;

	std::cout << "it2++ = " << COLOR_GREEN << *(it2++) << COLOR_RESET << std::endl;
	std::cout << *it2 << std::endl;
	std::cout << "it2-- = " << COLOR_GREEN << *(it2--) << COLOR_RESET << std::endl;
	std::cout << *it2 << std::endl << std::endl;
	next_test();
}

void	test_iterator(void)
{
	ft::list<std::string> lst;

	std::cout << ft_list << std::endl;
	std::cout << COLOR_CYAN <<  "Test iterator | begin | end | it++ | it-- " << COLOR_RESET << std::endl << std::endl;
	std::cout << "For a string list : { youtube, twitch, reddit, facebook }" << std::endl;

	lst.push_back("youtube");
	lst.push_back("twitch");
	lst.push_back("reddit");
	lst.push_back("facebook");

	std::cout << "For it.begin != it.end();" << std::endl;
	std::cout << "++it;" << std::endl;
	for (ft::list<std::string>::iterator it = lst.begin(); it != lst.end(); ++it)
		std::cout << COLOR_GREEN << *it << COLOR_RESET << std::endl;

	std::cout << std::endl;

	std::cout << "*(lst.begin()) = " << COLOR_GREEN << *(lst.begin()) << COLOR_RESET << std::endl << std::endl;

	std::cout  << COLOR_YELLOW << "---- ITERATOR OVERLOADS ----" << COLOR_RESET << std::endl;
	ft::list<std::string>::iterator it2 = lst.begin();

	std::cout << "it2 = lst.begin();" << std::endl;

	std::cout << "++it2 = " << COLOR_GREEN << *(++it2) << COLOR_RESET << std::endl;
	std::cout << *it2 << std::endl;
	std::cout << "--it2 = " << COLOR_GREEN << *(--it2) << COLOR_RESET << std::endl;
	std::cout << *it2 << std::endl << std::endl;

	std::cout << "it2++ = " << COLOR_GREEN << *(it2++) << COLOR_RESET << std::endl;
	std::cout << *it2 << std::endl;
	std::cout << "it2-- = " << COLOR_GREEN << *(it2--) << COLOR_RESET << std::endl;
	std::cout << *it2 << std::endl << std::endl;

	test_iterator_std();
}