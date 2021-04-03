/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jereligi <jereligi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/03 14:06:14 by jereligi          #+#    #+#             */
/*   Updated: 2021/04/03 14:11:21 by jereligi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef UTILS_TESTER_HPP
# define UTILS_TESTER_HPP

# include <vector>
# include <iostream>
# include <memory>
# include "../map.hpp"

# define FT_TEST false
# define STD_TEST true

template <typename Tkey, typename Tvalue>
std::ostream	&operator<<(std::ostream &o, std::pair<Tkey, Tvalue> const &i)
{
	std::cout << \
	"key = " << i.first << ", value = " << i.second << " ";
	return (o);
};

template <class Tkey, class Tvalue, class Compare>
std::ostream	&operator<<(std::ostream &o, ft::map<Tkey, Tvalue, Compare> &i)
{
	if (i.size() == 0)
	{
		o << "{}";
		return (o);
	}
	for (typename ft::map<Tkey, Tvalue, Compare>::const_iterator it = i.begin();
		 it != i.end();
		 it++)
		o << *it << std::endl;
	return (o);
};

template <typename Tkey, typename Tvalue>
std::ostream	&operator<<(std::ostream &o, std::map<Tkey, Tvalue> &i)
{
	if (i.size() == 0)
	{
		o << "{}";
		return (o);
	}
	for (typename std::map<Tkey, Tvalue>::const_iterator it = i.begin();
		 it != i.end();
		 it++)
		o << *it << std::endl;
	return (o);
};

template <typename Tkey, typename Tvalue, class Compare>
std::ostream	&operator<<(std::ostream &o, std::map<Tkey, Tvalue, Compare> &i)
{
	if (i.size() == 0)
	{
		o << "{}";
		return (o);
	}
	for (typename std::map<Tkey, Tvalue, Compare>::const_iterator it = i.begin();
		 it != i.end();
		 it++)
		o << *it << std::endl;
	return (o);
};


void	print_header(std::string content)
{
	std::cout << content << std::endl;
}

void	menu(std::vector<void (*)()> lst_funs, std::vector<std::string> lst_messages, std::string title);

#endif