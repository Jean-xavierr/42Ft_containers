/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_essentials.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jereligi <jereligi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/17 15:27:38 by jereligi          #+#    #+#             */
/*   Updated: 2021/03/17 16:53:02 by jereligi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "constant.hpp"

void	test_constructors_std(void)
{
	std::cout << COLOR_BLUE << "----- std::list -----" << COLOR_RESET << std::endl << std::endl;
	std::cout << COLOR_YELLOW <<"constructor fill" << COLOR_RESET << std::endl << std::endl;

	std::cout << COLOR_GREEN << "std::list<int> lst(10, 10);" << COLOR_RESET << std::endl;
	std::list<int>	lst(10, 10);

	std::cout << std::endl << "lst = { ";
	for (std::list<int>::iterator it = lst.begin(); it != lst.end(); it++)
		std::cout  << COLOR_CYAN << std::boolalpha << COLOR_RESET << *it << " ";
	std::cout << "}" << std::endl << std::endl;

	std::cout << COLOR_GREEN << "std::list<std::string> lst2(10, \"coucou\");" << COLOR_RESET << std::endl;
	std::list<std::string> lst2(10, "coucou");

	std::cout << std::endl << "lst2 = { ";
	for (std::list<std::string>::iterator it = lst2.begin(); it != lst2.end(); it++)
		std::cout  << COLOR_CYAN << std::boolalpha << COLOR_RESET << *it << " ";
	std::cout << "}" << std::endl << std::endl;

	std::cout << COLOR_YELLOW <<"constructor range" << COLOR_RESET << std::endl << std::endl;

	std::cout << COLOR_GREEN << "std::list<std::string> lst3(lst2.begin(), lst2.end());" << COLOR_RESET << std::endl;
	std::list<std::string> lst3(lst2.begin(), lst2.end());

	std::cout << std::endl << "lst3 = { ";
	for (std::list<std::string>::iterator it = lst3.begin(); it != lst3.end(); it++)
		std::cout  << COLOR_CYAN << std::boolalpha << COLOR_RESET << *it << " ";
	std::cout << "}" << std::endl << std::endl;

	std::cout << COLOR_YELLOW <<"constructor copy" << COLOR_RESET << std::endl << std::endl;
	std::cout << COLOR_GREEN << "std::list<std::string> lst4;" << COLOR_RESET << std::endl;
	std::list<std::string> lst4;

	lst4 = lst3;
	std::cout << COLOR_GREEN << "lst4 = lst3;" << COLOR_RESET << std::endl << std::endl;

	std::cout << "lst4 = { ";
	for (std::list<std::string>::iterator it = lst4.begin(); it != lst4.end(); it++)
		std::cout  << COLOR_CYAN << std::boolalpha << COLOR_RESET << *it << " ";
	std::cout << "}" << std::endl << std::endl;
	next_test();
}

void	test_constructors(void)
{
	std::cout << ft_list << std::endl;
	std::cout << COLOR_CYAN <<  "Test construtor " << std::endl << std::endl;
	std::cout << COLOR_YELLOW <<"constructor fill" << COLOR_RESET << std::endl << std::endl;

	std::cout << COLOR_GREEN << "ft::list<int> lst(10, 10);" << COLOR_RESET << std::endl;
	ft::list<int>	lst(10, 10);

	std::cout << std::endl << "lst = { ";
	for (ft::list<int>::iterator it = lst.begin(); it != lst.end(); it++)
		std::cout  << COLOR_CYAN << std::boolalpha << COLOR_RESET << *it << " ";
	std::cout << "}" << std::endl << std::endl;

	std::cout << COLOR_GREEN << "ft::list<std::string> lst2(10, \"coucou\");" << COLOR_RESET << std::endl;
	ft::list<std::string> lst2(10, "coucou");

	std::cout << std::endl << "lst2 = { ";
	for (ft::list<std::string>::iterator it = lst2.begin(); it != lst2.end(); it++)
		std::cout  << COLOR_CYAN << std::boolalpha << COLOR_RESET << *it << " ";
	std::cout << "}" << std::endl << std::endl;

	std::cout << COLOR_YELLOW <<"constructor range" << COLOR_RESET << std::endl << std::endl;

	std::cout << COLOR_GREEN << "ft::list<std::string> lst3(lst2.begin(), lst2.end());" << COLOR_RESET << std::endl;
	ft::list<std::string> lst3(lst2.begin(), lst2.end());

	std::cout << std::endl << "lst3 = { ";
	for (ft::list<std::string>::iterator it = lst3.begin(); it != lst3.end(); it++)
		std::cout  << COLOR_CYAN << std::boolalpha << COLOR_RESET << *it << " ";
	std::cout << "}" << std::endl << std::endl;

	std::cout << COLOR_YELLOW <<"constructor copy" << COLOR_RESET << std::endl << std::endl;
	std::cout << COLOR_GREEN << "ft::list<std::string> lst4;" << COLOR_RESET << std::endl;
	ft::list<std::string> lst4;

	lst4 = lst3;
	std::cout << COLOR_GREEN << "lst4 = lst3;" << COLOR_RESET << std::endl << std::endl;

	std::cout << "lst4 = { ";
	for (ft::list<std::string>::iterator it = lst4.begin(); it != lst4.end(); it++)
		std::cout  << COLOR_CYAN << std::boolalpha << COLOR_RESET << *it << " ";
	std::cout << "}" << std::endl << std::endl;

	test_constructors_std();
}

void	test_essentials_std(void)
{
	std::cout << COLOR_BLUE << "----- std::list -----" << COLOR_RESET << std::endl << std::endl;
	std::cout << COLOR_YELLOW << "push_back :" << COLOR_RESET << std::endl;
	std::cout << "    For list of ints : EMPTY" << std::endl;
	std::list<int>	lst1;

	std::cout << "lst1.push_back(10);" << std::endl;
	std::cout << "lst1.push_back(20);" << std::endl;
	std::cout << "lst1.push_back(30);" << std::endl << std::endl;
	lst1.push_back(10);
	lst1.push_back(20);
	lst1.push_back(30);

	std::cout << COLOR_YELLOW << "back :" << COLOR_RESET << std::endl;
	std::cout << "    With the same list :" << std::endl;

	std::cout << "lst1.back() = " << COLOR_GREEN << lst1.back() << COLOR_RESET << std::endl << std::endl;

	std::cout << COLOR_YELLOW << "pop_back :" << COLOR_RESET << std::endl;

	std::cout << "lst1.pop_back();" << std::endl;
	lst1.pop_back();
	std::cout << "lst1.back() = " << COLOR_GREEN << lst1.back() << COLOR_RESET << std::endl;
	std::cout << "lst1.pop_back();" << std::endl;
	lst1.pop_back();
	std::cout << "lst1.back() = " << COLOR_GREEN << lst1.back() << COLOR_RESET << std::endl;
	std::cout << "lst1.pop_back();" << std::endl << std::endl;
	lst1.pop_back();

	std::cout << "lst1.push_back(42);" << std::endl;
	lst1.push_back(42);
	std::cout << "lst1.back() = " << COLOR_GREEN << lst1.back() << COLOR_RESET << std::endl;
	std::cout << "lst1.pop_back();" << std::endl << std::endl;
	lst1.pop_back();

	std::cout << "Size of lst1 = " << COLOR_GREEN << lst1.size() << COLOR_RESET << std::endl << std::endl;

	std::cout << COLOR_YELLOW << "push_front :" << COLOR_RESET << std::endl;
	std::cout << "    For list of ints : EMPTY" << std::endl;
	std::list<int>	lst2;

	std::cout << "lst2.push_front(10);" << std::endl;
	std::cout << "lst2.push_front(20);" << std::endl;
	std::cout << "lst2.push_front(30);" << std::endl << std::endl;
	lst2.push_front(10);
	lst2.push_front(20);
	lst2.push_front(30);

	std::cout << COLOR_YELLOW << "front :" << COLOR_RESET << std::endl;
	std::cout << "    With the same list :" << std::endl;

	std::cout << "lst2.front() = " << COLOR_GREEN << lst2.front() << COLOR_RESET << std::endl << std::endl;

	std::cout << COLOR_YELLOW << "pop_front :" << COLOR_RESET << std::endl;

	std::cout << "lst2.pop_front();" << std::endl;
	lst2.pop_front();
	std::cout << "lst2.front() = " << COLOR_GREEN << lst2.front() << COLOR_RESET << std::endl;
	std::cout << "lst2.pop_front();" << std::endl;
	lst2.pop_front();
	std::cout << "lst2.front() = " << COLOR_GREEN << lst2.front() << COLOR_RESET << std::endl;
	std::cout << "lst2.pop_front();" << std::endl << std::endl;
	lst2.pop_front();

	std::cout << "lst2.push_front(42);" << std::endl;
	lst2.push_front(42);
	std::cout << "lst2.front() = " << COLOR_GREEN << lst2.front() << COLOR_RESET << std::endl;
	std::cout << "lst2.pop_front();" << std::endl << std::endl;
	lst2.pop_front();

	std::cout << "Size of lst2 = " << COLOR_GREEN << lst2.size() << COLOR_RESET << std::endl << std::endl << std::endl;
	next_test();
}

void	test_essentials(void)
{
	std::cout << ft_list << std::endl;
	std::cout << COLOR_CYAN <<  "Test essentials | push_front | push_back | \
pop_front | pop_back | front | back " << std::endl << std::endl;
	std::cout << COLOR_YELLOW << "push_back :" << COLOR_RESET << std::endl;
	std::cout << "    For list of ints : EMPTY" << std::endl;
	ft::list<int>	lst1;

	std::cout << "lst1.push_back(10);" << std::endl;
	std::cout << "lst1.push_back(20);" << std::endl;
	std::cout << "lst1.push_back(30);" << std::endl << std::endl;
	lst1.push_back(10);
	lst1.push_back(20);
	lst1.push_back(30);

	std::cout << COLOR_YELLOW << "back :" << COLOR_RESET << std::endl;
	std::cout << "    With the same list :" << std::endl;

	std::cout << "lst1.back() = " << COLOR_GREEN << lst1.back() << COLOR_RESET << std::endl << std::endl;

	std::cout << COLOR_YELLOW << "pop_back :" << COLOR_RESET << std::endl;

	std::cout << "lst1.pop_back();" << std::endl;
	lst1.pop_back();
	std::cout << "lst1.back() = " << COLOR_GREEN << lst1.back() << COLOR_RESET << std::endl;
	std::cout << "lst1.pop_back();" << std::endl;
	lst1.pop_back();
	std::cout << "lst1.back() = " << COLOR_GREEN << lst1.back() << COLOR_RESET << std::endl;
	std::cout << "lst1.pop_back();" << std::endl << std::endl;
	lst1.pop_back();

	std::cout << "lst1.push_back(42);" << std::endl;
	lst1.push_back(42);
	std::cout << "lst1.back() = " << COLOR_GREEN << lst1.back() << COLOR_RESET << std::endl;
	std::cout << "lst1.pop_back();" << std::endl << std::endl;
	lst1.pop_back();

	std::cout << "Size of lst1 = " << COLOR_GREEN << lst1.size() << COLOR_RESET << std::endl << std::endl;

	std::cout << COLOR_YELLOW << "push_front :" << COLOR_RESET << std::endl;
	std::cout << "    For list of ints : EMPTY" << std::endl;
	ft::list<int>	lst2;

	std::cout << "lst2.push_front(10);" << std::endl;
	std::cout << "lst2.push_front(20);" << std::endl;
	std::cout << "lst2.push_front(30);" << std::endl << std::endl;
	lst2.push_front(10);
	lst2.push_front(20);
	lst2.push_front(30);

	std::cout << COLOR_YELLOW << "front :" << COLOR_RESET << std::endl;
	std::cout << "    With the same list :" << std::endl;

	std::cout << "lst2.front() = " << COLOR_GREEN << lst2.front() << COLOR_RESET << std::endl << std::endl;

	std::cout << COLOR_YELLOW << "pop_front :" << COLOR_RESET << std::endl;

	std::cout << "lst2.pop_front();" << std::endl;
	lst2.pop_front();
	std::cout << "lst2.front() = " << COLOR_GREEN << lst2.front() << COLOR_RESET << std::endl;
	std::cout << "lst2.pop_front();" << std::endl;
	lst2.pop_front();
	std::cout << "lst2.front() = " << COLOR_GREEN << lst2.front() << COLOR_RESET << std::endl;
	std::cout << "lst2.pop_front();" << std::endl << std::endl;
	lst2.pop_front();

	std::cout << "lst2.push_front(42);" << std::endl;
	lst2.push_front(42);
	std::cout << "lst2.front() = " << COLOR_GREEN << lst2.front() << COLOR_RESET << std::endl;
	std::cout << "lst2.pop_front();" << std::endl << std::endl;
	lst2.pop_front();

	std::cout << "Size of lst2 = " << COLOR_GREEN << lst2.size() << COLOR_RESET << std::endl << std::endl << std::endl;

	test_essentials_std();
}