/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tester_queue.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jereligi <jereligi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/18 16:31:13 by jereligi          #+#    #+#             */
/*   Updated: 2021/03/18 16:37:29 by jereligi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <queue>
#include "queue.hpp"

#define COLOR_RESET		"\033[0m"
#define COLOR_RED		"\033[1;31m"
#define COLOR_BLUE		"\033[1;34m"
#define COLOR_GREEN		"\033[1;32m"
#define COLOR_WHITE		"\033[1;37m"
#define COLOR_YELLOW	"\033[33m"
#define COLOR_CYAN		"\033[1;36m"
#define	clear_terminal "\x1B[2J\x1B[H"
#define ft_queue		COLOR_BLUE << "----- ft::queue -----" << COLOR_RESET << std::endl
#define std_queue	COLOR_BLUE << "----- std::queue -----" << COLOR_RESET << std::endl

void	next_test()
{
	std::string	buf;

	std::cout << COLOR_GREEN << "press enter for continu..." << COLOR_RESET;
	std::getline (std::cin, buf);
	std::cout << clear_terminal << std::endl;
}

static void	test_non_member_ope_std()
{
	std::cout << std_queue << std::endl;

	std::queue<int>	st_nums_one;
	std::queue<int>	st_nums_two;

	st_nums_one.push(0);
	st_nums_one.push(1);
	st_nums_one.push(10);
	st_nums_one.push(11);
	st_nums_one.push(100);
	st_nums_one.push(101);
	st_nums_one.push(110);
	st_nums_one.push(111);

	std::cout << "st_nums_one.push(0);" << std::endl;
	std::cout << "st_nums_one.push(1);" << std::endl;
	std::cout << "st_nums_one.push(10);" << std::endl;
	std::cout << "st_nums_one.push(11);" << std::endl;
	std::cout << "st_nums_one.push(100);" << std::endl;
	std::cout << "st_nums_one.push(101);" << std::endl;
	std::cout << "st_nums_one.push(110);" << std::endl;
	std::cout << "st_nums_one.push(111);" << std::endl << std::endl;

	st_nums_two.push(0);
	st_nums_two.push(1);
	st_nums_two.push(10);
	st_nums_two.push(11);
	st_nums_two.push(100);
	st_nums_two.push(101);
	st_nums_two.push(110);
	st_nums_two.push(111);
	st_nums_two.push(1000);

	std::cout << "st_nums_two.push(0);" << std::endl;
	std::cout << "st_nums_two.push(1);" << std::endl;
	std::cout << "st_nums_two.push(10);" << std::endl;
	std::cout << "st_nums_two.push(11);" << std::endl;
	std::cout << "st_nums_two.push(100);" << std::endl;
	std::cout << "st_nums_two.push(101);" << std::endl;
	std::cout << "st_nums_two.push(110);" << std::endl;
	std::cout << "st_nums_two.push(111);" << std::endl;
	std::cout << "st_nums_two.push(1000);" << std::endl << std::endl;

	std::cout << "#- TEST FRONT AND BACK -#" << std::endl;
	std::cout << "st_nums_one.front() = " << st_nums_one.front() << std::endl;
	std::cout << "st_nums_one.back() = " << st_nums_one.back() << std::endl << std::endl;

	std::cout << "#- EQUAL & NON-EQUAL -#" << std::endl << std::endl;
	std::cout << "st_nums_one == st_nums_one : " << std::boolalpha << (st_nums_one == st_nums_one) << std::endl;
	std::cout << "st_nums_one == st_nums_two : " << std::boolalpha << (st_nums_one == st_nums_two) << std::endl << std::endl;

	std::cout << "st_nums_one != st_nums_one : " << std::boolalpha << (st_nums_one != st_nums_one) << std::endl;
	std::cout << "st_nums_one != st_nums_two : " << std::boolalpha << (st_nums_one != st_nums_two) << std::endl << std::endl;

	std::cout << "#- SUPERIOR & EQUAL-SUPERIOR -#" << std::endl << std::endl;

	std::cout << "st_nums_one < st_nums_one = " << (st_nums_one < st_nums_one) << std::endl;
	std::cout << "st_nums_one < st_nums_two = " << (st_nums_one < st_nums_two) << std::endl;
	std::cout << "st_nums_two < st_nums_one = " << (st_nums_two < st_nums_one) << std::endl;
	std::cout << "st_nums_one <= st_nums_one = " << (st_nums_one <= st_nums_one) << std::endl;
	std::cout << "st_nums_one <= st_nums_two = " << (st_nums_one <= st_nums_two) << std::endl;
	std::cout << "st_nums_two <= st_nums_one = " << (st_nums_two <= st_nums_one) << std::endl << std::endl;

	std::cout << "#- INFERIOR & EQUAL-INFERIOR -#" << std::endl << std::endl;

	std::cout << "st_nums_one > st_nums_one = " << (st_nums_one > st_nums_one) << std::endl;
	std::cout << "st_nums_one > st_nums_two = " << (st_nums_one > st_nums_two) << std::endl;
	std::cout << "st_nums_two > st_nums_one = " << (st_nums_two > st_nums_one) << std::endl;
	std::cout << "st_nums_one >= st_nums_one = " << (st_nums_one >= st_nums_one) << std::endl;
	std::cout << "st_nums_one >= st_nums_two = " << (st_nums_one >= st_nums_two) << std::endl;
	std::cout << "st_nums_two >= st_nums_one = " << (st_nums_two >= st_nums_one) << std::endl << std::endl;
	next_test();
}

static void	test_non_member_ope()
{
	std::cout << ft_queue << std::endl;

	ft::queue<int>	st_nums_one;
	ft::queue<int>	st_nums_two;

	st_nums_one.push(0);
	st_nums_one.push(1);
	st_nums_one.push(10);
	st_nums_one.push(11);
	st_nums_one.push(100);
	st_nums_one.push(101);
	st_nums_one.push(110);
	st_nums_one.push(111);

	std::cout << "st_nums_one.push(0);" << std::endl;
	std::cout << "st_nums_one.push(1);" << std::endl;
	std::cout << "st_nums_one.push(10);" << std::endl;
	std::cout << "st_nums_one.push(11);" << std::endl;
	std::cout << "st_nums_one.push(100);" << std::endl;
	std::cout << "st_nums_one.push(101);" << std::endl;
	std::cout << "st_nums_one.push(110);" << std::endl;
	std::cout << "st_nums_one.push(111);" << std::endl << std::endl;

	st_nums_two.push(0);
	st_nums_two.push(1);
	st_nums_two.push(10);
	st_nums_two.push(11);
	st_nums_two.push(100);
	st_nums_two.push(101);
	st_nums_two.push(110);
	st_nums_two.push(111);
	st_nums_two.push(1000);

	std::cout << "st_nums_two.push(0);" << std::endl;
	std::cout << "st_nums_two.push(1);" << std::endl;
	std::cout << "st_nums_two.push(10);" << std::endl;
	std::cout << "st_nums_two.push(11);" << std::endl;
	std::cout << "st_nums_two.push(100);" << std::endl;
	std::cout << "st_nums_two.push(101);" << std::endl;
	std::cout << "st_nums_two.push(110);" << std::endl;
	std::cout << "st_nums_two.push(111);" << std::endl;
	std::cout << "st_nums_two.push(1000);" << std::endl << std::endl;

	std::cout << "#- TEST FRONT AND BACK -#" << std::endl;
	std::cout << "st_nums_one.front() = " << st_nums_one.front() << std::endl;
	std::cout << "st_nums_one.back() = " << st_nums_one.back() << std::endl << std::endl;

	std::cout << "#- EQUAL & NON-EQUAL -#" << std::endl << std::endl;
	std::cout << "st_nums_one == st_nums_one : " << std::boolalpha << (st_nums_one == st_nums_one) << std::endl;
	std::cout << "st_nums_one == st_nums_two : " << std::boolalpha << (st_nums_one == st_nums_two) << std::endl << std::endl;

	std::cout << "st_nums_one != st_nums_one : " << std::boolalpha << (st_nums_one != st_nums_one) << std::endl;
	std::cout << "st_nums_one != st_nums_two : " << std::boolalpha << (st_nums_one != st_nums_two) << std::endl << std::endl;

	std::cout << "#- SUPERIOR & EQUAL-SUPERIOR -#" << std::endl << std::endl;

	std::cout << "st_nums_one < st_nums_one = " << (st_nums_one < st_nums_one) << std::endl;
	std::cout << "st_nums_one < st_nums_two = " << (st_nums_one < st_nums_two) << std::endl;
	std::cout << "st_nums_two < st_nums_one = " << (st_nums_two < st_nums_one) << std::endl;
	std::cout << "st_nums_one <= st_nums_one = " << (st_nums_one <= st_nums_one) << std::endl;
	std::cout << "st_nums_one <= st_nums_two = " << (st_nums_one <= st_nums_two) << std::endl;
	std::cout << "st_nums_two <= st_nums_one = " << (st_nums_two <= st_nums_one) << std::endl << std::endl;

	std::cout << "#- INFERIOR & EQUAL-INFERIOR -#" << std::endl << std::endl;

	std::cout << "st_nums_one > st_nums_one = " << (st_nums_one > st_nums_one) << std::endl;
	std::cout << "st_nums_one > st_nums_two = " << (st_nums_one > st_nums_two) << std::endl;
	std::cout << "st_nums_two > st_nums_one = " << (st_nums_two > st_nums_one) << std::endl;
	std::cout << "st_nums_one >= st_nums_one = " << (st_nums_one >= st_nums_one) << std::endl;
	std::cout << "st_nums_one >= st_nums_two = " << (st_nums_one >= st_nums_two) << std::endl;
	std::cout << "st_nums_two >= st_nums_one = " << (st_nums_two >= st_nums_one) << std::endl << std::endl;

	test_non_member_ope_std();
}

static void	test_push_std()
{
	std::cout << std_queue << std::endl;

	std::queue<int>	st_nums;
	std::cout << "ft::queue<int> st_nums;" << std::endl << std::endl;

	// TEST EMPTY FUNCTION
	std::cout << "st_nums.empty() = " << std::boolalpha << st_nums.empty() << std::endl << std::endl;

	// TEST PUSH ONE ITEM
	st_nums.push(42);
	std::cout << "st_nums.push(42);" << std::endl << std::endl;

	std::cout << "st_nums.back() = " << st_nums.back() << std::endl << std::endl;

	std::cout << "st_nums.empty() = " << std::boolalpha << st_nums.empty() << std::endl << std::endl;

	std::cout << "st_nums.size() = " << std::boolalpha << st_nums.size() << std::endl << std::endl;

	// TEST PUSH MANY ITEMS
	st_nums.push(56);
	std::cout << "st_nums.push(56);" << std::endl << std::endl;

	std::cout << "st_nums.back() = " << st_nums.back() << std::endl << std::endl;

	std::cout << "st_nums.size() = " << std::boolalpha << st_nums.size() << std::endl << std::endl;

	// TEST FRONT AND BACK
	std::cout << "st_nums.front() = " << st_nums.front() << std::endl;
	std::cout << "st_nums.back() = " << st_nums.back() << std::endl << std::endl;

	// TEST POP FUNCTION
	st_nums.pop();
	std::cout << "st_nums.pop();" << std::endl << std::endl;

	std::cout << "st_nums.back() = " << st_nums.back() << std::endl << std::endl;

	std::cout << "st_nums.size() = " << std::boolalpha << st_nums.size() << std::endl << std::endl;

	st_nums.pop();
	std::cout << "st_nums.pop();" << std::endl << std::endl;

	std::cout << "st_nums.size() = " << std::boolalpha << st_nums.size() << std::endl << std::endl;

	std::cout << "st_nums.empty() = " << std::boolalpha << st_nums.empty() << std::endl << std::endl;
	next_test();
}

static void	test_push()
{
	std::cout << ft_queue << std::endl;

	ft::queue<int>	st_nums;
	std::cout << "ft::queue<int> st_nums;" << std::endl << std::endl;

	// TEST EMPTY FUNCTION
	std::cout << "st_nums.empty() = " << std::boolalpha << st_nums.empty() << std::endl << std::endl;

	// TEST PUSH ONE ITEM
	st_nums.push(42);
	std::cout << "st_nums.push(42);" << std::endl << std::endl;

	std::cout << "st_nums.back() = " << st_nums.back() << std::endl << std::endl;

	std::cout << "st_nums.empty() = " << std::boolalpha << st_nums.empty() << std::endl << std::endl;

	std::cout << "st_nums.size() = " << std::boolalpha << st_nums.size() << std::endl << std::endl;

	// TEST PUSH MANY ITEMS
	st_nums.push(56);
	std::cout << "st_nums.push(56);" << std::endl << std::endl;

	std::cout << "st_nums.back() = " << st_nums.back() << std::endl << std::endl;

	std::cout << "st_nums.size() = " << std::boolalpha << st_nums.size() << std::endl << std::endl;

	// TEST FRONT AND BACK
	std::cout << "st_nums.front() = " << st_nums.front() << std::endl;
	std::cout << "st_nums.back() = " << st_nums.back() << std::endl << std::endl;

	// TEST POP FUNCTION
	st_nums.pop();
	std::cout << "st_nums.pop();" << std::endl << std::endl;

	std::cout << "st_nums.back() = " << st_nums.back() << std::endl << std::endl;

	std::cout << "st_nums.size() = " << std::boolalpha << st_nums.size() << std::endl << std::endl;

	st_nums.pop();
	std::cout << "st_nums.pop();" << std::endl << std::endl;

	std::cout << "st_nums.size() = " << std::boolalpha << st_nums.size() << std::endl << std::endl;

	std::cout << "st_nums.empty() = " << std::boolalpha << st_nums.empty() << std::endl << std::endl;

	test_push_std();
}

int		main(void)
{
	test_push();
	test_non_member_ope();
}