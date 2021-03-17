/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tester_list.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jereligi <jereligi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/17 15:29:38 by jereligi          #+#    #+#             */
/*   Updated: 2021/03/17 16:42:53 by jereligi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "constant.hpp"
#include "test_essentials.cpp"
#include "test_capacity.cpp"
#include "test_iterator.cpp"

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
	return (0);
}