/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   constant.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jereligi <jereligi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/03 16:12:08 by jereligi          #+#    #+#             */
/*   Updated: 2021/04/03 15:16:37 by jereligi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONSTANT_HPP
#define CONSTANT_HPP

#include <iostream>
#include <list>
#include <string>
#include "../list.hpp"

#define COLOR_RESET		"\033[0m"
#define COLOR_RED		"\033[1;31m"
#define COLOR_BLUE		"\033[1;34m"
#define COLOR_GREEN		"\033[1;32m"
#define COLOR_WHITE		"\033[1;37m"
#define COLOR_YELLOW	"\033[33m"
#define COLOR_CYAN		"\033[1;36m"
#define	clear_terminal "\x1B[2J\x1B[H"
#define ft_list		COLOR_BLUE << "----- ft::list -----" << COLOR_RESET << std::endl

void	next_test();

#endif