/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tester_vector.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jereligi <jereligi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/03 16:12:32 by jereligi          #+#    #+#             */
/*   Updated: 2021/03/03 16:12:33 by jereligi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tester_iterator_vector.cpp"
#include "tester_reverse_iterator.cpp"

void	next_test()
{
	std::string	buf;

	std::cout << COLOR_GREEN << "press enter for continu..." << COLOR_RESET;
	std::getline (std::cin, buf);
	std::cout << clear_terminal << std::endl;
}

int		main(void)
{
	iterator_incrementers();
	iterator_arithmetics();
	iterator_booleans();
	iterator_deference();

	reverse_iterator_incrementers();
	reverse_iterator_arithmetics();
	reverse_iterator_booleans();
	reverse_iterator_deference();
	return (0);
}