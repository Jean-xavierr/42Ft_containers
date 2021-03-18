/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tester_stack.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jereligi <jereligi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/03 16:12:08 by jereligi          #+#    #+#             */
/*   Updated: 2021/03/18 16:37:30 by jereligi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <stack>
#include "stack.hpp"

#define COLOR_RESET		"\033[0m"
#define COLOR_RED		"\033[1;31m"
#define COLOR_BLUE		"\033[1;34m"
#define COLOR_GREEN		"\033[1;32m"
#define COLOR_WHITE		"\033[1;37m"
#define COLOR_YELLOW	"\033[33m"
#define COLOR_CYAN		"\033[1;36m"
#define	clear_terminal "\x1B[2J\x1B[H"
#define ft_stack		COLOR_BLUE << "----- ft::stack -----" << COLOR_RESET << std::endl
#define std_stack	COLOR_BLUE << "----- std::stack -----" << COLOR_RESET << std::endl

void	next_test()
{
	std::string	buf;

	std::cout << COLOR_GREEN << "press enter for continu..." << COLOR_RESET;
	std::getline (std::cin, buf);
	std::cout << clear_terminal << std::endl;
}


static void	test_non_member_ope_std()
{
	std::cout << std_stack << std::endl;

	std::stack<int>	st_nums_one;
	std::stack<int>	st_nums_two;

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
	std::cout << ft_stack << std::endl;

	ft::stack<int>	st_nums_one;
	ft::stack<int>	st_nums_two;

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
	std::cout << std_stack << std::endl;

	std::stack<int>	st_nums;
	std::cout << "ft::stack<int> st_nums;" << std::endl << std::endl;

	// TEST EMPTY FUNCTION
	std::cout << "st_nums.empty() = " << std::boolalpha << st_nums.empty() << std::endl << std::endl;

	// TEST PUSH ONE ITEM
	st_nums.push(42);
	std::cout << "st_nums.push(42);" << std::endl << std::endl;

	std::cout << "st_nums.top() = " << st_nums.top() << std::endl << std::endl;

	std::cout << "st_nums.empty() = " << std::boolalpha << st_nums.empty() << std::endl << std::endl;

	std::cout << "st_nums.size() = " << std::boolalpha << st_nums.size() << std::endl << std::endl;

	// TEST PUSH MANY ITEMS
	st_nums.push(56);
	std::cout << "st_nums.push(56);" << std::endl << std::endl;

	std::cout << "st_nums.top() = " << st_nums.top() << std::endl << std::endl;

	std::cout << "st_nums.size() = " << std::boolalpha << st_nums.size() << std::endl << std::endl;

	// TEST POP FUNCTION
	st_nums.pop();
	std::cout << "st_nums.pop();" << std::endl << std::endl;

	std::cout << "st_nums.top() = " << st_nums.top() << std::endl << std::endl;

	std::cout << "st_nums.size() = " << std::boolalpha << st_nums.size() << std::endl << std::endl;

	st_nums.pop();
	std::cout << "st_nums.pop();" << std::endl << std::endl;

	std::cout << "st_nums.size() = " << std::boolalpha << st_nums.size() << std::endl << std::endl;

	std::cout << "st_nums.empty() = " << std::boolalpha << st_nums.empty() << std::endl << std::endl;
	next_test();
}

void	test_push()
{
	std::cout << ft_stack << std::endl;

	ft::stack<int>	st_nums;
	std::cout << "ft::stack<int> st_nums;" << std::endl << std::endl;

	// TEST EMPTY FUNCTION
	std::cout << "st_nums.empty() = " << std::boolalpha << st_nums.empty() << std::endl << std::endl;

	// TEST PUSH ONE ITEM
	st_nums.push(42);
	std::cout << "st_nums.push(42);" << std::endl << std::endl;

	std::cout << "st_nums.top() = " << st_nums.top() << std::endl << std::endl;

	std::cout << "st_nums.empty() = " << std::boolalpha << st_nums.empty() << std::endl << std::endl;

	std::cout << "st_nums.size() = " << std::boolalpha << st_nums.size() << std::endl << std::endl;

	// TEST PUSH MANY ITEMS
	st_nums.push(56);
	std::cout << "st_nums.push(56);" << std::endl << std::endl;

	std::cout << "st_nums.top() = " << st_nums.top() << std::endl << std::endl;

	std::cout << "st_nums.size() = " << std::boolalpha << st_nums.size() << std::endl << std::endl;

	// TEST POP FUNCTION
	st_nums.pop();
	std::cout << "st_nums.pop();" << std::endl << std::endl;

	std::cout << "st_nums.top() = " << st_nums.top() << std::endl << std::endl;

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
	return 0;

}
