/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tester_list.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jereligi <jereligi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/17 15:29:38 by jereligi          #+#    #+#             */
/*   Updated: 2021/04/03 15:00:53 by jereligi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "constant.hpp"
#include "test_essentials.cpp"
#include "test_capacity.cpp"
#include "test_iterator.cpp"
#include "test_modifiers.cpp"
#include "test_operations.cpp"
#include "test_operator_non_member.cpp"
#include <cmath>

void	next_test()
{
	std::string	buf;

	std::cout << COLOR_GREEN << "press enter for continu..." << COLOR_RESET;
	std::getline (std::cin, buf);
	std::cout << clear_terminal << std::endl;
}

int		main(void)
{
	test_essentials();
	test_capacity();
	test_iterator();
	test_operator_over_ite();
	test_constructors();
	test_modifiers_one();
	test_modifiers_two();
	test_operations_splice();
	test_operations_remove();
	test_operations_unique();
	test_operations_sort();
	test_operations_reverse();
	test_non_member_ope();
	test_operations_merge();
	return (0);
}