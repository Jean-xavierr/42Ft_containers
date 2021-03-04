/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iterator_vector.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jereligi <jereligi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/03 16:12:17 by jereligi          #+#    #+#             */
/*   Updated: 2021/03/04 10:49:04 by jereligi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../vector.hpp"
#include "constant.hpp"

void	iterator_incrementers()
{
	std::cout << ft_vector << std::endl;

	// FT_VECTOR
	ft::vector<int>				vec;
	ft::vector<int>::iterator	it;

	vec.push_back(1);
	vec.push_back(2);
	vec.push_back(3);
	vec.push_back(4);
	vec.push_back(5);
	vec.push_back(42);

	std::cout << COLOR_CYAN << "Test iterator incrementers" << COLOR_RESET << std::endl;
	std::cout << COLOR_YELLOW << "vector {";
	
	for (size_t i = 0; i < vec.size(); i++)
	{
		std::cout << vec[i];
		if (i + 1 != vec.size())
			std::cout << ", ";
		else
			std::cout << "}" << COLOR_RESET << std::endl << std::endl;	
	}

	std::cout << COLOR_BLUE << "Test ft::vector i++ | ++i | --i | i-- :" << COLOR_RESET << std::endl;
	it = vec.begin();
	std::cout << "it = vec.begin();" << std::endl;
	std::cout << "*it = " << *it << std::endl;
	std::cout << "*(it++) = " << *(it++) << std::endl;
	std::cout << "*it = " << *it << std::endl;
	std::cout << "*(it--) = " << *(it--) << std::endl;
	std::cout << "*it = " << *it << std::endl;
	std::cout << "*(++it) = " << *(++it) << std::endl;
	std::cout << "*it = " << *it << std::endl;
	std::cout << "*(--it) = " << *(--it) << std::endl;
	std::cout << "*it = " << *it << std::endl << std::endl;


	// STD_VECTOR
	std::vector<int>			vec1;
	std::vector<int>::iterator	ite;

	vec1.push_back(1);
	vec1.push_back(2);
	vec1.push_back(3);
	vec1.push_back(4);
	vec1.push_back(5);
	vec1.push_back(42);
	std::cout << COLOR_BLUE << "Test std::vector i++ | ++i | --i | i-- :" << COLOR_RESET << std::endl;
	ite = vec1.begin();
	std::cout << "it = vec.begin();" << std::endl;
	std::cout << "*it = " << *ite << std::endl;
	std::cout << "*(it++) = " << *(ite++) << std::endl;
	std::cout << "*it = " << *ite << std::endl;
	std::cout << "*(it--) = " << *(ite--) << std::endl;
	std::cout << "*it = " << *ite << std::endl;
	std::cout << "*(++it) = " << *(++ite) << std::endl;
	std::cout << "*it = " << *ite << std::endl;
	std::cout << "*(--it) = " << *(--ite) << std::endl;
	std::cout << "*it = " << *ite << std::endl << std::endl;

	next_test();
}

void		iterator_arithmetics()
{
	std::cout << ft_vector << std::endl ;
	std::cout << COLOR_CYAN <<  "Test Iterator Arithmetics" << std::endl;

	// FT_VECTOR
	ft::vector<int>				vec;
	ft::vector<int>::iterator	it;

	vec.push_back(1);
	vec.push_back(2);
	vec.push_back(3);
	vec.push_back(4);
	vec.push_back(5);
	vec.push_back(42);

	std::cout << COLOR_YELLOW << "vector {";
	for (size_t i = 0; i < vec.size(); i++)
	{
		std::cout << vec[i];
		if (i + 1 != vec.size())
			std::cout << ", ";
		else
			std::cout << "}" << COLOR_RESET << std::endl << std::endl;	
	}

	std::cout << COLOR_BLUE << "Test ft::vector i + | i - | i += | i -= :" << COLOR_RESET << std::endl;

	it = vec.begin();
	std::cout << "it = vec.begin();" << std::endl;
	std::cout << "*(it + 0) = " << *(it + 0) << std::endl;
	std::cout << "*(it + 1) = " << *(it + 1) << std::endl;
	std::cout << "*(it + 5) = " << *(it + 5) << std::endl << std::endl;

	it = vec.end() - 1;
	std::cout << "it = v.end() - 1;" << std::endl;
	std::cout << "*(it - 0) = " << *(it - 0) << std::endl;
	std::cout << "*(it - 1) = " << *(it - 1) << std::endl;
	std::cout << "*(it - 5) = " << *(it - 5) << std::endl << std::endl;

	std::cout << "(*it += 2) = " << (*it += 2) << std::endl;
	std::cout << "(*it -= 1) = " << (*it -= 1) << std::endl << std::endl;

	// STD_VECTOR
	std::vector<int>			vec1;
	std::vector<int>::iterator	ite;

	vec1.push_back(1);
	vec1.push_back(2);
	vec1.push_back(3);
	vec1.push_back(4);
	vec1.push_back(5);
	vec1.push_back(42);
	std::cout << COLOR_BLUE << "Test std::vector i + | i - | i += | i -= :" << COLOR_RESET << std::endl;
	ite = vec1.begin();
	std::cout << "it = vec.begin();" << std::endl;
	std::cout << "*(it + 0) = " << *(ite + 0) << std::endl;
	std::cout << "*(it + 1) = " << *(ite + 1) << std::endl;
	std::cout << "*(it + 5) = " << *(ite + 5) << std::endl << std::endl;

	ite = vec1.end() - 1;
	std::cout << "it = v.end() - 1;" << std::endl;
	std::cout << "*(it - 0) = " << *(ite - 0) << std::endl;
	std::cout << "*(it - 1) = " << *(ite - 1) << std::endl;
	std::cout << "*(it - 5) = " << *(ite - 5) << std::endl << std::endl;

	std::cout << "(*it += 2) = " << (*ite += 2) << std::endl;
	std::cout << "(*it -= 1) = " << (*ite -= 1) << std::endl << std::endl;

	next_test();
}

void		iterator_booleans()
{
	std::cout << ft_vector << std::endl;
	std::cout << COLOR_CYAN <<  "Test Iterator Booleans" << std::endl;

	// FT_VECTOR
	ft::vector<int>				vec;

	vec.push_back(1);
	vec.push_back(2);
	vec.push_back(3);
	vec.push_back(4);
	vec.push_back(5);
	vec.push_back(42);

	std::cout << COLOR_YELLOW << "vector {";
	for (size_t i = 0; i < vec.size(); i++)
	{
		std::cout << vec[i];
		if (i + 1 != vec.size())
			std::cout << ", ";
		else
			std::cout << "}" << COLOR_RESET << std::endl << std::endl;	
	}

	std::cout << COLOR_BLUE << "Test ft::vector < | > | <= | >= | == | != :" << COLOR_RESET << std::endl;

	ft::vector<int>::iterator	it_beg = vec.begin();
	ft::vector<int>::iterator	it_end = vec.end();

	std::cout << "it_beg = vec.begin()"  << std::endl;
	std::cout << "it_end = vec.end()"  << std::endl << std::endl;

	std::cout << "it_beg < it_end is " << std::boolalpha << (it_beg < it_end) << std::endl;
	std::cout << "it_end < it_beg is " << std::boolalpha << (it_end < it_beg) << std::endl;
	std::cout << "it_beg > it_end is " << std::boolalpha << (it_beg > it_end) << std::endl;
	std::cout << "it_end > it_beg is " << std::boolalpha << (it_end > it_beg) << std::endl << std::endl;

	std::cout << "it_beg <= it_end is " << std::boolalpha << (it_beg <= it_end) << std::endl;
	std::cout << "it_end <= it_beg is " << std::boolalpha << (it_end <= it_beg) << std::endl;
	std::cout << "it_end <= it_end is " << std::boolalpha << (it_end <= it_end) << std::endl;
	std::cout << "it_beg >= it_end is " << std::boolalpha << (it_beg >= it_end) << std::endl;
	std::cout << "it_end >= it_beg is " << std::boolalpha << (it_end >= it_beg) << std::endl;
	std::cout << "it_end >= it_end is " << std::boolalpha << (it_end >= it_end) << std::endl << std::endl;

	std::cout << "it_beg == it_end is " << std::boolalpha << (it_beg == it_end) << std::endl;
	std::cout << "it_beg == it_beg is " << std::boolalpha << (it_beg == it_beg) << std::endl;
	std::cout << "it_beg != it_end is " << std::boolalpha << (it_beg != it_end) << std::endl;
	std::cout << "it_beg != it_beg is " << std::boolalpha << (it_beg != it_beg) << std::endl << std::endl;

	// STD_VECTOR
	std::vector<int>			vec1;

	vec1.push_back(1);
	vec1.push_back(2);
	vec1.push_back(3);
	vec1.push_back(4);
	vec1.push_back(5);
	vec1.push_back(42);
	std::cout << COLOR_BLUE << "Test std::vector < | > | <= | >= | == | != :" << COLOR_RESET << std::endl << std::endl;
	std::vector<int>::iterator	ite_beg = vec1.begin();
	std::vector<int>::iterator	ite_end = vec1.end();

	std::cout << "it_beg < it_end is " << std::boolalpha << (ite_beg < ite_end) << std::endl;
	std::cout << "it_end < it_beg is " << std::boolalpha << (ite_end < ite_beg) << std::endl;
	std::cout << "it_beg > it_end is " << std::boolalpha << (ite_beg > ite_end) << std::endl;
	std::cout << "it_end > it_beg is " << std::boolalpha << (ite_end > ite_beg) << std::endl << std::endl;

	std::cout << "it_beg <= it_end is " << std::boolalpha << (ite_beg <= ite_end) << std::endl;
	std::cout << "it_end <= it_beg is " << std::boolalpha << (ite_end <= ite_beg) << std::endl;
	std::cout << "it_end <= it_end is " << std::boolalpha << (ite_end <= ite_end) << std::endl;
	std::cout << "it_beg >= it_end is " << std::boolalpha << (ite_beg >= ite_end) << std::endl;
	std::cout << "it_end >= it_beg is " << std::boolalpha << (ite_end >= ite_beg) << std::endl;
	std::cout << "it_end >= it_end is " << std::boolalpha << (ite_end >= ite_end) << std::endl << std::endl;

	std::cout << "it_beg == it_end is " << std::boolalpha << (ite_beg == ite_end) << std::endl;
	std::cout << "it_beg == it_beg is " << std::boolalpha << (ite_beg == ite_beg) << std::endl;
	std::cout << "it_beg != it_end is " << std::boolalpha << (ite_beg != ite_end) << std::endl;
	std::cout << "it_beg != it_beg is " << std::boolalpha << (ite_beg != ite_beg) << std::endl << std::endl;
	next_test();
}

void		iterator_deference()
{
	std::cout << ft_vector << std::endl;
	std::cout << COLOR_CYAN <<  "Test Iterator deference" << std::endl;

	// FT_VECTOR
	ft::vector<int>				vec;

	vec.push_back(1);
	vec.push_back(2);
	vec.push_back(3);
	vec.push_back(4);
	vec.push_back(5);
	vec.push_back(42);

	std::cout << COLOR_YELLOW << "vector {";
	for (size_t i = 0; i < vec.size(); i++)
	{
		std::cout << vec[i];
		if (i + 1 != vec.size())
			std::cout << ", ";
		else
			std::cout << "}" << COLOR_RESET << std::endl << std::endl;	
	}

	std::cout << COLOR_BLUE << "Test ft::vector * | [] | -> :" << COLOR_RESET << std::endl;

	ft::vector<int>::iterator	it = vec.begin();
	ft::vector<int>::iterator	ite = vec.end() - 1;
	std::cout << "it = vec.begin()" << std::endl;
	std::cout << "*it = " << *it << std::endl;
	*it = 43;
	std::cout << "*it = " << *it << std::endl << std::endl;

	std::cout << "it[0] = " << it[0] << std::endl;
	it[0] = 9;
	std::cout << "it[0] = " << it[0] << std::endl;
	std::cout << "*(it = ite) = " << *(it = ite) << std::endl << std::endl;

	// STD_VECTOR
	std::vector<int>			vec1;

	vec1.push_back(1);
	vec1.push_back(2);
	vec1.push_back(3);
	vec1.push_back(4);
	vec1.push_back(5);
	vec1.push_back(42);
	std::cout << COLOR_BLUE << "Test std::vector * | [] | -> :" << COLOR_RESET << std::endl;
	std::vector<int>::iterator	itb = vec1.begin();
	std::vector<int>::iterator	iten = vec1.end() - 1;

	std::cout << "it = vec.begin()" << std::endl;
	std::cout << "*it = " << *itb << std::endl;
	*itb = 43;
	std::cout << "*it = " << *itb << std::endl << std::endl;

	std::cout << "it[0] = " << itb[0] << std::endl;
	itb[0] = 9;
	std::cout << "it[0] = " << itb[0] << std::endl;
	std::cout << "*(it = ite) = " << *(itb = iten) << std::endl << std::endl;
	next_test();
}