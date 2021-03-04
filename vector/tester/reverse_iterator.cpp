/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_iterator.cpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jereligi <jereligi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/03 16:12:24 by jereligi          #+#    #+#             */
/*   Updated: 2021/03/04 10:48:03 by jereligi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../vector.hpp"
#include "constant.hpp"

void	reverse_iterator_incrementers()
{
	std::cout << ft_vector << std::endl;

	// FT_VECTOR
	ft::vector<int>				vec;
	ft::vector<int>::reverse_iterator	it;

	vec.push_back(1);
	vec.push_back(2);
	vec.push_back(3);
	vec.push_back(4);
	vec.push_back(5);
	vec.push_back(42);

	std::cout << COLOR_CYAN << "Test reverse_iterator incrementers" << COLOR_RESET << std::endl;
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
	it = vec.rbegin();
	std::cout << "it = vec.rend();" << std::endl;
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
	std::vector<int>::reverse_iterator	ite;

	vec1.push_back(1);
	vec1.push_back(2);
	vec1.push_back(3);
	vec1.push_back(4);
	vec1.push_back(5);
	vec1.push_back(42);
	std::cout << COLOR_BLUE << "Test std::vector i++ | ++i | --i | i-- :" << COLOR_RESET << std::endl;
	ite = vec1.rbegin();
	std::cout << "it = vec.rend();" << std::endl;
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

void		reverse_iterator_arithmetics()
{
	std::cout << ft_vector << std::endl ;
	std::cout << COLOR_CYAN <<  "Test reverse_iterator Arithmetics" << std::endl;

	// FT_VECTOR
	ft::vector<int>				vec;
	ft::vector<int>::reverse_iterator	it;

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

	it = vec.rbegin();
	std::cout << "it = vec.begin();" << std::endl;
	std::cout << "*(it + 0) = " << *(it + 0) << std::endl;
	std::cout << "*(it + 1) = " << *(it + 1) << std::endl;
	std::cout << "*(it + 5) = " << *(it + 5) << std::endl << std::endl;

	it = vec.rend() - 1;
	std::cout << "it = v.end() - 1;" << std::endl;
	std::cout << "*(it - 0) = " << *(it - 0) << std::endl;
	std::cout << "*(it - 1) = " << *(it - 1) << std::endl;
	std::cout << "*(it - 5) = " << *(it - 5) << std::endl << std::endl;

	std::cout << "(*it += 2) = " << (*it += 2) << std::endl;
	std::cout << "(*it -= 1) = " << (*it -= 1) << std::endl << std::endl;

	// STD_VECTOR
	std::vector<int>			vec1;
	std::vector<int>::reverse_iterator	ite;

	vec1.push_back(1);
	vec1.push_back(2);
	vec1.push_back(3);
	vec1.push_back(4);
	vec1.push_back(5);
	vec1.push_back(42);
	std::cout << COLOR_BLUE << "Test std::vector i + | i - | i += | i -= :" << COLOR_RESET << std::endl;
	ite = vec1.rbegin();
	std::cout << "it = vec.begin();" << std::endl;
	std::cout << "*(it + 0) = " << *(ite + 0) << std::endl;
	std::cout << "*(it + 1) = " << *(ite + 1) << std::endl;
	std::cout << "*(it + 5) = " << *(ite + 5) << std::endl << std::endl;

	ite = vec1.rend() - 1;
	std::cout << "it = v.end() - 1;" << std::endl;
	std::cout << "*(it - 0) = " << *(ite - 0) << std::endl;
	std::cout << "*(it - 1) = " << *(ite - 1) << std::endl;
	std::cout << "*(it - 5) = " << *(ite - 5) << std::endl << std::endl;

	std::cout << "(*it += 2) = " << (*ite += 2) << std::endl;
	std::cout << "(*it -= 1) = " << (*ite -= 1) << std::endl << std::endl;

	next_test();
}

void		reverse_iterator_booleans()
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

	ft::vector<int>::reverse_iterator	it_beg = vec.rbegin();
	ft::vector<int>::reverse_iterator	it_end = vec.rend() - 1;

	std::cout << "it_beg = vec.rbegin()"  << std::endl;
	std::cout << "it_end = vec.rend()"  << std::endl << std::endl;

	std::cout << *it_beg << "|" << *it_end << std::endl;

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
	std::vector<int>::reverse_iterator	ite_beg = vec1.rbegin();
	std::vector<int>::reverse_iterator	ite_end = vec1.rend() - 1;

	std::cout << *ite_beg << "|" << *ite_end << std::endl;

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

void		reverse_iterator_deference()
{
	std::cout << ft_vector << std::endl;
	std::cout << COLOR_CYAN <<  "Test reverse_iterator deference" << std::endl;

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

	ft::vector<int>::reverse_iterator	it = vec.rbegin();
	ft::vector<int>::reverse_iterator	ite = vec.rend() - 1;
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
	std::vector<int>::reverse_iterator	itb = vec1.rbegin();
	std::vector<int>::reverse_iterator	iten = vec1.rend() - 1;

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
