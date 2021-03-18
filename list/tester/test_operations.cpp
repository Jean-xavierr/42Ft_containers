/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_operations.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jereligi <jereligi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/18 13:45:22 by jereligi          #+#    #+#             */
/*   Updated: 2021/03/18 16:19:56 by jereligi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "constant.hpp"
#include <tgmath.h>

bool mycomparison (double first, double second)
{ return ( int(first)<int(second) ); }

static void	test_operations_merge_std(void)
{
	std::cout << COLOR_BLUE << "----- std::list -----" << COLOR_RESET << std::endl << std::endl;
	std::cout << COLOR_YELLOW << "merge :" << COLOR_RESET << std::endl;

	std::list<double> lst_doubles_a;
	std::list<double> lst_doubles_b;

	lst_doubles_a.push_back(3.1);
	lst_doubles_a.push_back(2.2);
	lst_doubles_a.push_back(2.9);

	lst_doubles_b.push_back(3.7);
	lst_doubles_b.push_back(7.1);
	lst_doubles_b.push_back(1.4);

	lst_doubles_a.sort();
	lst_doubles_b.sort();

	std::cout << "lst_doubles_a :";
	std::cout << " { ";
	for (std::list<double>::iterator it = lst_doubles_a.begin(); it != lst_doubles_a.end(); it++)
		std::cout  << COLOR_CYAN << std::boolalpha << COLOR_RESET << *it << " ";
	std::cout << "}" << std::endl << std::endl;
	std::cout << "lst_doubles_b :";
	std::cout << " { ";
	for (std::list<double>::iterator it = lst_doubles_b.begin(); it != lst_doubles_b.end(); it++)
		std::cout  << COLOR_CYAN << std::boolalpha << COLOR_RESET << *it << " ";
	std::cout << "}" << std::endl << std::endl;

	std::cout << "lst_doubles_a.merge(lst_doubles_b);" << std::endl << std::endl;
	lst_doubles_a.merge(lst_doubles_b);

	std::cout << "lst_doubles_a :";
	std::cout << " { ";
	for (std::list<double>::iterator it = lst_doubles_a.begin(); it != lst_doubles_a.end(); it++)
		std::cout  << COLOR_CYAN << std::boolalpha << COLOR_RESET << *it << " ";
	std::cout << "}" << std::endl << std::endl;
	std::cout << "lst_doubles_b :";
	std::cout << " { ";
	for (std::list<double>::iterator it = lst_doubles_b.begin(); it != lst_doubles_b.end(); it++)
		std::cout  << COLOR_CYAN << std::boolalpha << COLOR_RESET << *it << " ";
	std::cout << "}" << std::endl << std::endl;

	std::cout << "lst_doubles_b.push_back(2.1);" << std::endl;
	lst_doubles_b.push_back(2.1);

	std::cout << "lst_doubles_a.merge(lst_doubles_b, mycomparison);" << std::endl << std::endl;
	lst_doubles_a.merge(lst_doubles_b, mycomparison);

	std::cout << "lst_doubles_a :";
	std::cout << " { ";
	for (std::list<double>::iterator it = lst_doubles_a.begin(); it != lst_doubles_a.end(); it++)
		std::cout  << COLOR_CYAN << std::boolalpha << COLOR_RESET << *it << " ";
	std::cout << "}" << std::endl << std::endl;
	std::cout << "lst_doubles_b :";
	std::cout << " { ";
	for (std::list<double>::iterator it = lst_doubles_b.begin(); it != lst_doubles_b.end(); it++)
		std::cout  << COLOR_CYAN << std::boolalpha << COLOR_RESET << *it << " ";
	std::cout << "}" << std::endl << std::endl;

	std::list<int> lst_int_a;
	std::list<int> lst_int_b;

	lst_int_a.push_back(10);
	lst_int_a.push_back(20);
	lst_int_a.push_back(30);
	lst_int_a.push_back(40);
	lst_int_a.push_back(50);
	lst_int_a.push_back(60);

	lst_int_b.push_back(40);
	lst_int_b.push_back(41);
	lst_int_b.push_back(42);
	lst_int_b.push_back(43);
	lst_int_b.push_back(44);
	lst_int_b.push_back(45);

	std::cout << "lst_int_a :";
	std::cout << " { ";
	for (std::list<int>::iterator it = lst_int_a.begin(); it != lst_int_a.end(); it++)
		std::cout  << COLOR_CYAN << std::boolalpha << COLOR_RESET << *it << " ";
	std::cout << "}" << std::endl << std::endl;
	std::cout << "lst_int_b :";
	std::cout << " { ";
	for (std::list<int>::iterator it = lst_int_b.begin(); it != lst_int_b.end(); it++)
		std::cout  << COLOR_CYAN << std::boolalpha << COLOR_RESET << *it << " ";
	std::cout << "}" << std::endl << std::endl;

	std::cout << "lst_int_a.merge(lst_int_b);" << std::endl << std::endl;
	lst_int_a.merge(lst_int_b);

		std::cout << "lst_int_a :";
	std::cout << " { ";
	for (std::list<int>::iterator it = lst_int_a.begin(); it != lst_int_a.end(); it++)
		std::cout  << COLOR_CYAN << std::boolalpha << COLOR_RESET << *it << " ";
	std::cout << "}" << std::endl << std::endl;
	std::cout << "lst_int_b :";
	std::cout << " { ";
	for (std::list<int>::iterator it = lst_int_b.begin(); it != lst_int_b.end(); it++)
		std::cout  << COLOR_CYAN << std::boolalpha << COLOR_RESET << *it << " ";
	std::cout << "}" << std::endl << std::endl;
	next_test();
}

void	test_operations_merge(void)
{
	std::cout << ft_list << std::endl;
	std::cout << COLOR_CYAN <<  "Test merge" << std::endl << std::endl;
	std::cout << COLOR_YELLOW << "merge :" << COLOR_RESET << std::endl;

	ft::list<double> lst_doubles_a;
	ft::list<double> lst_doubles_b;

	lst_doubles_a.push_back(3.1);
	lst_doubles_a.push_back(2.2);
	lst_doubles_a.push_back(2.9);

	lst_doubles_b.push_back(3.7);
	lst_doubles_b.push_back(7.1);
	lst_doubles_b.push_back(1.4);

	lst_doubles_a.sort();
	lst_doubles_b.sort();

	std::cout << "lst_doubles_a :" << lst_doubles_a << std::endl;
	std::cout << "lst_doubles_b :" << lst_doubles_b << std::endl << std::endl;

	std::cout << "lst_doubles_a.merge(lst_doubles_b);" << std::endl << std::endl;
	lst_doubles_a.merge(lst_doubles_b);

	std::cout << "lst_doubles_a = " << lst_doubles_a << std::endl;
	std::cout << "lst_doubles_b = " << lst_doubles_b << std::endl << std::endl;

	std::cout << "lst_doubles_b.push_back(2.1);" << std::endl;
	lst_doubles_b.push_back(2.1);

	std::cout << "lst_doubles_a.merge(lst_doubles_b, mycomparison);" << std::endl << std::endl;
	lst_doubles_a.merge(lst_doubles_b, mycomparison);

	std::cout << "lst_doubles_a = " << lst_doubles_a << std::endl;
	std::cout << "lst_doubles_b = " << lst_doubles_b << std::endl << std::endl;

	ft::list<int> lst_int_a;
	ft::list<int> lst_int_b;

	lst_int_a.push_back(10);
	lst_int_a.push_back(20);
	lst_int_a.push_back(30);
	lst_int_a.push_back(40);
	lst_int_a.push_back(50);
	lst_int_a.push_back(60);

	lst_int_b.push_back(40);
	lst_int_b.push_back(41);
	lst_int_b.push_back(42);
	lst_int_b.push_back(43);
	lst_int_b.push_back(44);
	lst_int_b.push_back(45);

	std::cout << "lst_int_a : " << lst_int_a << std::endl;
	std::cout << "lst_int_b : " << lst_int_b << std::endl << std::endl;

	std::cout << "lst_int_a.merge(lst_int_b);" << std::endl << std::endl;
	lst_int_a.merge(lst_int_b);

	std::cout << "lst_int_a : " << lst_int_a << std::endl;
	std::cout << "lst_int_b : " << lst_int_b << std::endl << std::endl;

	test_operations_merge_std();
}

static void	test_operations_reverse_std(void)
{
	std::cout << COLOR_BLUE << "----- std::list -----" << COLOR_RESET << std::endl << std::endl;
	std::cout << COLOR_YELLOW << "reverse :" << COLOR_RESET << std::endl;

	std::list<int>	lst_numbers;

	lst_numbers.push_back(1);
	lst_numbers.push_back(2);
	lst_numbers.push_back(3);
	lst_numbers.push_back(4);
	lst_numbers.push_back(5);
	lst_numbers.push_back(6);
	lst_numbers.push_back(7);
	lst_numbers.push_back(8);
	lst_numbers.push_back(9);

	std::cout << "For a number list : ";
		std::cout << " { ";
	for (std::list<int>::iterator it = lst_numbers.begin(); it != lst_numbers.end(); it++)
		std::cout  << COLOR_CYAN << std::boolalpha << COLOR_RESET << *it << " ";
	std::cout << "}" << std::endl << std::endl;
	lst_numbers.reverse();
	std::cout << "lst_numbers.reverse();" << std::endl;
	std::cout << "lst_numbers : ";
		std::cout << std::endl << "lst_numbers = { ";
	for (std::list<int>::iterator it = lst_numbers.begin(); it != lst_numbers.end(); it++)
		std::cout  << COLOR_CYAN << std::boolalpha << COLOR_RESET << *it << " ";
	std::cout << "}" << std::endl << std::endl;

	std::list<std::string>	lst_potatos;

	lst_potatos.push_back("🥔");
	lst_potatos.push_back("🥔");
	lst_potatos.push_back("🥔");
	lst_potatos.push_back("🥔");
	lst_potatos.push_back("🥔");
	lst_potatos.push_back("🥔");
	lst_potatos.push_back("🥔");
	lst_potatos.push_back("🥔");
	lst_potatos.push_back("potatos");

	std::cout << "For a potato list (constructor test) : ";
	std::cout << std::endl << "lst_potatos = { ";
	for (std::list<std::string>::iterator it = lst_potatos.begin(); it != lst_potatos.end(); it++)
		std::cout  << COLOR_CYAN << std::boolalpha << COLOR_RESET << *it << " ";
	std::cout << "}" << std::endl << std::endl;
	lst_potatos.reverse();
	std::cout << "lst_potatos.reverse();" << std::endl;
	std::cout << "lst_potatos : ";
		std::cout << std::endl << "lst_potatos = { ";
	for (std::list<std::string>::iterator it = lst_potatos.begin(); it != lst_potatos.end(); it++)
		std::cout  << COLOR_CYAN << std::boolalpha << COLOR_RESET << *it << " ";
	std::cout << "}" << std::endl << std::endl;

	std::list<std::string>	lst_alone;

	lst_alone.push_back("Simone");

	std::cout << "For a string alone list (crash test) : ";
	std::cout << std::endl << "lst_alone = { ";
	for (std::list<std::string>::iterator it = lst_alone.begin(); it != lst_alone.end(); it++)
		std::cout  << COLOR_CYAN << std::boolalpha << COLOR_RESET << *it << " ";
	std::cout << "}" << std::endl << std::endl;
	lst_alone.reverse();
	std::cout << "lst_alone.reverse();" << std::endl;
	std::cout << "lst_alone : ";
		std::cout << std::endl << "lst_alone = { ";
	for (std::list<std::string>::iterator it = lst_alone.begin(); it != lst_alone.end(); it++)
		std::cout  << COLOR_CYAN << std::boolalpha << COLOR_RESET << *it << " ";
	std::cout << "}" << std::endl << std::endl;

	std::list<std::string>	lst_empty;

	std::cout << "For a empty string list (crash test) : ";
	std::cout << std::endl << "lst_empty = { ";
	for (std::list<std::string>::iterator it = lst_empty.begin(); it != lst_empty.end(); it++)
		std::cout  << COLOR_CYAN << std::boolalpha << COLOR_RESET << *it << " ";
	std::cout << "}" << std::endl << std::endl;
	lst_empty.reverse();
	std::cout << "lst_empty.reverse();" << std::endl;
	std::cout << "lst_empty : ";
		std::cout << std::endl << "lst_empty = { ";
	for (std::list<std::string>::iterator it = lst_empty.begin(); it != lst_empty.end(); it++)
		std::cout  << COLOR_CYAN << std::boolalpha << COLOR_RESET << *it << " ";
	std::cout << "}" << std::endl << std::endl;
	next_test();
}

static void	test_operations_reverse(void)
{
	std::cout << ft_list << std::endl;
	std::cout << COLOR_CYAN <<  "Test reverse" << std::endl << std::endl;
	std::cout << COLOR_YELLOW << "reverse :" << COLOR_RESET << std::endl;

	ft::list<int>	lst_numbers;

	lst_numbers.push_back(1);
	lst_numbers.push_back(2);
	lst_numbers.push_back(3);
	lst_numbers.push_back(4);
	lst_numbers.push_back(5);
	lst_numbers.push_back(6);
	lst_numbers.push_back(7);
	lst_numbers.push_back(8);
	lst_numbers.push_back(9);

	std::cout << "For a number list : " << lst_numbers << std::endl;
	lst_numbers.reverse();
	std::cout << "lst_numbers.reverse();" << std::endl;
	std::cout << "lst_numbers : " << lst_numbers << std::endl << std::endl;

	ft::list<std::string>	lst_potatos;

	lst_potatos.push_back("🥔");
	lst_potatos.push_back("🥔");
	lst_potatos.push_back("🥔");
	lst_potatos.push_back("🥔");
	lst_potatos.push_back("🥔");
	lst_potatos.push_back("🥔");
	lst_potatos.push_back("🥔");
	lst_potatos.push_back("🥔");
	lst_potatos.push_back("potatos");

	std::cout << "For a potato list (constructor test) : " << lst_potatos << std::endl;
	lst_potatos.reverse();
	std::cout << "lst_potatos.reverse();" << std::endl;
	std::cout << "lst_potatos : " << lst_potatos << std::endl << std::endl;

	ft::list<std::string>	lst_alone;

	lst_alone.push_back("Simone");

	std::cout << "For a string alone list (crash test) : " << lst_alone << std::endl;
	lst_alone.reverse();
	std::cout << "lst_alone.reverse();" << std::endl;
	std::cout << "lst_alone : " << lst_alone << std::endl << std::endl;

	ft::list<std::string>	lst_empty;

	std::cout << "For a empty string list (crash test) : " << lst_empty << std::endl;
	lst_empty.reverse();
	std::cout << "lst_empty.reverse();" << std::endl;
	std::cout << "lst_empty : " << lst_empty << std::endl << std::endl;

	test_operations_reverse_std();
}

template <typename T>
static bool	superior_comp(T &lvalue, T &rvalue) { return (lvalue > rvalue); };

void	test_operations_sort_std(void)
{
	std::cout << COLOR_BLUE << "----- std::list -----" << COLOR_RESET << std::endl << std::endl;
	std::cout << COLOR_YELLOW << "sort without condition :" << COLOR_RESET << std::endl;

	std::list<int>			lst_int;

	lst_int.push_back(4);
	lst_int.push_back(-8392454);
	lst_int.push_back(3849);
	lst_int.push_back(-9000);
	lst_int.push_back(-2147483648);
	lst_int.push_back(2147483647);
	lst_int.push_back(0);

	std::cout << "For a int list lst_int : ";
	std::cout << std::endl << "lst_int = { ";
	for (std::list<int>::iterator it = lst_int.begin(); it != lst_int.end(); it++)
		std::cout  << COLOR_CYAN << std::boolalpha << COLOR_RESET << *it << " ";
	std::cout << "}" << std::endl << std::endl;

	lst_int.sort();
	std::cout << "lst_int.sort();" << std::endl;

	std::cout << "Now lst_int : ";
		std::cout << std::endl << "lst_int = { ";
	for (std::list<int>::iterator it = lst_int.begin(); it != lst_int.end(); it++)
		std::cout  << COLOR_CYAN << std::boolalpha << COLOR_RESET << *it << " ";
	std::cout << "}" << std::endl << std::endl;

 	std::list<double>		lst_double;

	lst_double.push_back(2.2);
	lst_double.push_back(INFINITY);
	lst_double.push_back(42.42);
	lst_double.push_back(420.024);
	lst_double.push_back(3.14);
	lst_double.push_back(-233.141);
	lst_double.push_back(-INFINITY);
	lst_double.push_back(0);
	lst_double.push_back(347589.19454);

	std::cout << "For a double list lst_double : ";
		std::cout << std::endl << "lst_double = { ";
	for (std::list<double>::iterator it = lst_double.begin(); it != lst_double.end(); it++)
		std::cout  << COLOR_CYAN << std::boolalpha << COLOR_RESET << *it << " ";
	std::cout << "}" << std::endl << std::endl;

	lst_double.sort();
	std::cout << "lst_double.sort();" << std::endl;

	std::cout << "Now lst_double : ";
			std::cout << std::endl << "lst_double = { ";
	for (std::list<double>::iterator it = lst_double.begin(); it != lst_double.end(); it++)
		std::cout  << COLOR_CYAN << std::boolalpha << COLOR_RESET << *it << " ";
	std::cout << "}" << std::endl << std::endl;

	std::list<std::string>	lst_string;

	lst_string.push_back("coucou8");
	lst_string.push_back("coucou1");
	lst_string.push_back("coucou4");
	lst_string.push_back("coucou4");
	lst_string.push_back("coucou2");
	lst_string.push_back("coucou1");
	lst_string.push_back("coucou9");
	lst_string.push_back("coucou0");
	lst_string.push_back("coucou6");

	std::cout << "For a std::string list lst_string : ";
		std::cout << std::endl << "lst_string = { ";
	for (std::list<std::string>::iterator it = lst_string.begin(); it != lst_string.end(); it++)
		std::cout  << COLOR_CYAN << std::boolalpha << COLOR_RESET << *it << " ";
	std::cout << "}" << std::endl << std::endl;


	lst_string.sort();
	std::cout << "lst_string.sort();" << std::endl;

	std::cout << "Now lst_string : ";
			std::cout << std::endl << "lst_string = { ";
	for (std::list<std::string>::iterator it = lst_string.begin(); it != lst_string.end(); it++)
		std::cout  << COLOR_CYAN << std::boolalpha << COLOR_RESET << *it << " ";
	std::cout << "}" << std::endl << std::endl;


	std::cout << COLOR_YELLOW << "sort with condition :" << COLOR_RESET << std::endl;
	std::cout << "Conditition superior_comp = return (lvalue > rvalue);" << std::endl;

		std::list<int>			lst_int_condition;

	lst_int_condition.push_back(4);
	lst_int_condition.push_back(-8392454);
	lst_int_condition.push_back(3849);
	lst_int_condition.push_back(-9000);
	lst_int_condition.push_back(-2147483648);
	lst_int_condition.push_back(2147483647);
	lst_int_condition.push_back(0);

	std::cout << "For a int list lst_int_condition : ";
			std::cout << std::endl << "lst_int_condition = { ";
	for (std::list<int>::iterator it = lst_int_condition.begin(); it != lst_int_condition.end(); it++)
		std::cout  << COLOR_CYAN << std::boolalpha << COLOR_RESET << *it << " ";
	std::cout << "}" << std::endl << std::endl;

	lst_int_condition.sort(superior_comp<int>);
	std::cout << "lst_int_condition.sort(superior_comp);" << std::endl;

	std::cout << "Now lst_int_condition : ";
			std::cout << std::endl << "lst_int_condition = { ";
	for (std::list<int>::iterator it = lst_int_condition.begin(); it != lst_int_condition.end(); it++)
		std::cout  << COLOR_CYAN << std::boolalpha << COLOR_RESET << *it << " ";
	std::cout << "}" << std::endl << std::endl;


	std::list<std::string>	lst_string_condition;

	lst_string_condition.push_back("coucou8");
	lst_string_condition.push_back("coucou1");
	lst_string_condition.push_back("coucou4");
	lst_string_condition.push_back("coucou4");
	lst_string_condition.push_back("coucou2");
	lst_string_condition.push_back("coucou1");
	lst_string_condition.push_back("coucou9");
	lst_string_condition.push_back("coucou0");
	lst_string_condition.push_back("coucou6");

	std::cout << "For a std::string list lst_string_condition : " << std::endl;

	lst_string_condition.sort(superior_comp<std::string>);
	std::cout << "lst_string_condition.sort(superior_comp);" << std::endl;

	std::cout << "Now lst_string_condition : ";
	std::cout << std::endl << "lst_string_condition = { ";
	for (std::list<std::string>::iterator it = lst_string_condition.begin(); it != lst_string_condition.end(); it++)
		std::cout  << COLOR_CYAN << std::boolalpha << COLOR_RESET << *it << " ";
	std::cout << "}" << std::endl << std::endl;
	next_test();

}

void	test_operations_sort(void)
{
	std::cout << ft_list << std::endl;
	std::cout << COLOR_CYAN <<  "Test sort " << std::endl << std::endl;
	std::cout << COLOR_YELLOW << "sort without condition :" << COLOR_RESET << std::endl;

	ft::list<int>			lst_int;

	lst_int.push_back(4);
	lst_int.push_back(-8392454);
	lst_int.push_back(3849);
	lst_int.push_back(-9000);
	lst_int.push_back(-2147483648);
	lst_int.push_back(2147483647);
	lst_int.push_back(0);

	std::cout << "For a int list lst_int : ";
	std::cout << std::endl << "lst_int = { ";
	for (ft::list<int>::iterator it = lst_int.begin(); it != lst_int.end(); it++)
		std::cout  << COLOR_CYAN << std::boolalpha << COLOR_RESET << *it << " ";
	std::cout << "}" << std::endl << std::endl;

	lst_int.sort();
	std::cout << "lst_int.sort();" << std::endl;

	std::cout << "Now lst_int : ";
		std::cout << std::endl << "lst_int = { ";
	for (ft::list<int>::iterator it = lst_int.begin(); it != lst_int.end(); it++)
		std::cout  << COLOR_CYAN << std::boolalpha << COLOR_RESET << *it << " ";
	std::cout << "}" << std::endl << std::endl;

 	ft::list<double>		lst_double;

	lst_double.push_back(2.2);
	lst_double.push_back(INFINITY);
	lst_double.push_back(42.42);
	lst_double.push_back(420.024);
	lst_double.push_back(3.14);
	lst_double.push_back(-233.141);
	lst_double.push_back(-INFINITY);
	lst_double.push_back(0);
	lst_double.push_back(347589.19454);

	std::cout << "For a double list lst_double : ";
		std::cout << std::endl << "lst_double = { ";
	for (ft::list<double>::iterator it = lst_double.begin(); it != lst_double.end(); it++)
		std::cout  << COLOR_CYAN << std::boolalpha << COLOR_RESET << *it << " ";
	std::cout << "}" << std::endl << std::endl;

	lst_double.sort();
	std::cout << "lst_double.sort();" << std::endl;

	std::cout << "Now lst_double : ";
			std::cout << std::endl << "lst_double = { ";
	for (ft::list<double>::iterator it = lst_double.begin(); it != lst_double.end(); it++)
		std::cout  << COLOR_CYAN << std::boolalpha << COLOR_RESET << *it << " ";
	std::cout << "}" << std::endl << std::endl;

	ft::list<std::string>	lst_string;

	lst_string.push_back("coucou8");
	lst_string.push_back("coucou1");
	lst_string.push_back("coucou4");
	lst_string.push_back("coucou4");
	lst_string.push_back("coucou2");
	lst_string.push_back("coucou1");
	lst_string.push_back("coucou9");
	lst_string.push_back("coucou0");
	lst_string.push_back("coucou6");

	std::cout << "For a std::string list lst_string : ";
		std::cout << std::endl << "lst_string = { ";
	for (ft::list<std::string>::iterator it = lst_string.begin(); it != lst_string.end(); it++)
		std::cout  << COLOR_CYAN << std::boolalpha << COLOR_RESET << *it << " ";
	std::cout << "}" << std::endl << std::endl;


	lst_string.sort();
	std::cout << "lst_string.sort();" << std::endl;

	std::cout << "Now lst_string : ";
			std::cout << std::endl << "lst_string = { ";
	for (ft::list<std::string>::iterator it = lst_string.begin(); it != lst_string.end(); it++)
		std::cout  << COLOR_CYAN << std::boolalpha << COLOR_RESET << *it << " ";
	std::cout << "}" << std::endl << std::endl;


	std::cout << COLOR_YELLOW << "sort with condition :" << COLOR_RESET << std::endl;
	std::cout << "Conditition superior_comp = return (lvalue > rvalue);" << std::endl;

		ft::list<int>			lst_int_condition;

	lst_int_condition.push_back(4);
	lst_int_condition.push_back(-8392454);
	lst_int_condition.push_back(3849);
	lst_int_condition.push_back(-9000);
	lst_int_condition.push_back(-2147483648);
	lst_int_condition.push_back(2147483647);
	lst_int_condition.push_back(0);

	std::cout << "For a int list lst_int_condition : ";
			std::cout << std::endl << "lst_int_condition = { ";
	for (ft::list<int>::iterator it = lst_int_condition.begin(); it != lst_int_condition.end(); it++)
		std::cout  << COLOR_CYAN << std::boolalpha << COLOR_RESET << *it << " ";
	std::cout << "}" << std::endl << std::endl;

	lst_int_condition.sort(superior_comp<int>);
	std::cout << "lst_int_condition.sort(superior_comp);" << std::endl;

	std::cout << "Now lst_int_condition : ";
			std::cout << std::endl << "lst_int_condition = { ";
	for (ft::list<int>::iterator it = lst_int_condition.begin(); it != lst_int_condition.end(); it++)
		std::cout  << COLOR_CYAN << std::boolalpha << COLOR_RESET << *it << " ";
	std::cout << "}" << std::endl << std::endl;


	ft::list<std::string>	lst_string_condition;

	lst_string_condition.push_back("coucou8");
	lst_string_condition.push_back("coucou1");
	lst_string_condition.push_back("coucou4");
	lst_string_condition.push_back("coucou4");
	lst_string_condition.push_back("coucou2");
	lst_string_condition.push_back("coucou1");
	lst_string_condition.push_back("coucou9");
	lst_string_condition.push_back("coucou0");
	lst_string_condition.push_back("coucou6");

	std::cout << "For a std::string list lst_string_condition : " << std::endl;

	lst_string_condition.sort(superior_comp<std::string>);
	std::cout << "lst_string_condition.sort(superior_comp);" << std::endl;

	std::cout << "Now lst_string_condition : ";
	std::cout << std::endl << "lst_string_condition = { ";
	for (ft::list<std::string>::iterator it = lst_string_condition.begin(); it != lst_string_condition.end(); it++)
		std::cout  << COLOR_CYAN << std::boolalpha << COLOR_RESET << *it << " ";
	std::cout << "}" << std::endl << std::endl;

	test_operations_sort_std();
}

// a binary predicate implemented as a function:
bool same_integral_part (double first, double second)
{ return ( int(first)==int(second) ); }

// a binary predicate implemented as a class:
struct is_near {
  bool operator() (double first, double second)
  { return (fabs(first-second)<5.0); }
};

static void	test_operations_unique_std(void)
{

	std::cout << COLOR_BLUE << "----- std::list -----" << COLOR_RESET << std::endl << std::endl;
	std::cout << COLOR_CYAN <<  "Test unique " << std::endl << std::endl;
	std::cout << COLOR_YELLOW << "unique without condition :" << COLOR_RESET << std::endl;

	std::list<int> lst_nums;

	lst_nums.push_back(1);
	lst_nums.push_back(1);
	lst_nums.push_back(2);
	lst_nums.push_back(3);
	lst_nums.push_back(3);
	lst_nums.push_back(3);
	lst_nums.push_back(3);
	lst_nums.push_back(4);
	lst_nums.push_back(5);
	lst_nums.push_back(6);
	lst_nums.push_back(6);
	lst_nums.push_back(7);
	lst_nums.push_back(8);
	lst_nums.push_back(9);
	lst_nums.push_back(9);

	std::cout << "For a int list lst_nums : ";
	std::cout << std::endl << "lst_nums = { ";
	for (std::list<int>::iterator it = lst_nums.begin(); it != lst_nums.end(); it++)
		std::cout  << COLOR_CYAN << std::boolalpha << COLOR_RESET << *it << " ";
	std::cout << "}" << std::endl << std::endl;

	lst_nums.unique();
	std::cout << "lst_nums.unique();" << std::endl << std::endl;

	std::cout << "Now lst_nums = ";
	std::cout << std::endl << "lst_nums = { ";
	for (std::list<int>::iterator it = lst_nums.begin(); it != lst_nums.end(); it++)
		std::cout  << COLOR_CYAN << std::boolalpha << COLOR_RESET << *it << " ";
	std::cout << "}" << std::endl << std::endl;

	std::list<int> lst_nums2;

	lst_nums2.push_back(1);
	lst_nums2.push_back(1);
	lst_nums2.push_back(1);
	lst_nums2.push_back(1);
	lst_nums2.push_back(1);
	lst_nums2.push_back(1);
	lst_nums2.push_back(1);

	std::cout << "For a int list lst_nums2 : ";
	std::cout << std::endl << "lst_nums2 = { ";
	for (std::list<int>::iterator it = lst_nums2.begin(); it != lst_nums2.end(); it++)
		std::cout  << COLOR_CYAN << std::boolalpha << COLOR_RESET << *it << " ";
	std::cout << "}" << std::endl << std::endl;

	lst_nums2.unique();
	std::cout << "lst_nums2.unique();" << std::endl << std::endl;

	std::cout << "Now lst_nums2 = ";
	std::cout << std::endl << "lst_nums2 = { ";
	for (std::list<int>::iterator it = lst_nums2.begin(); it != lst_nums2.end(); it++)
		std::cout  << COLOR_CYAN << std::boolalpha << COLOR_RESET << *it << " ";
	std::cout << "}" << std::endl << std::endl;

	std::cout << COLOR_YELLOW << "unique with condition :" << COLOR_RESET << std::endl;

	std::list<float>	lst_floats;

	lst_floats.push_back(2.72);
	lst_floats.push_back(3.14);
	lst_floats.push_back(12.15);
	lst_floats.push_back(12.77);
	lst_floats.push_back(15.3);
	lst_floats.push_back(72.25);
	lst_floats.push_back(73.0);
	lst_floats.push_back(73.35);

	std::cout << "For a float list lst_floats : ";
	std::cout << std::endl << "lst_floats = { ";
	for (std::list<float>::iterator it = lst_floats.begin(); it != lst_floats.end(); it++)
		std::cout  << COLOR_CYAN << std::boolalpha << COLOR_RESET << *it << " ";
	std::cout << "}" << std::endl << std::endl;

	lst_floats.unique(same_integral_part);
	std::cout << "lst_floats.unique(same_integral_part);" << std::endl << std::endl;

	std::cout << "Now lst_floats : ";
		std::cout << std::endl << "lst_floats = { ";
	for (std::list<float>::iterator it = lst_floats.begin(); it != lst_floats.end(); it++)
		std::cout  << COLOR_CYAN << std::boolalpha << COLOR_RESET << *it << " ";
	std::cout << "}" << std::endl << std::endl;

	lst_floats.unique(is_near());
	std::cout << "lst_floats.unique(is_near());" << std::endl << std::endl;

	std::cout << "Now lst_floats : ";
	std::cout << std::endl << "lst_floats = { ";
	for (std::list<float>::iterator it = lst_floats.begin(); it != lst_floats.end(); it++)
		std::cout  << COLOR_CYAN << std::boolalpha << COLOR_RESET << *it << " ";
	std::cout << "}" << std::endl << std::endl;
	next_test();
}

static void	test_operations_unique(void)
{

	std::cout << ft_list << std::endl;
	std::cout << COLOR_CYAN <<  "Test unique " << std::endl << std::endl;
	std::cout << COLOR_YELLOW << "unique without condition :" << COLOR_RESET << std::endl;

	ft::list<int> lst_nums;

	lst_nums.push_back(1);
	lst_nums.push_back(1);
	lst_nums.push_back(2);
	lst_nums.push_back(3);
	lst_nums.push_back(3);
	lst_nums.push_back(3);
	lst_nums.push_back(3);
	lst_nums.push_back(4);
	lst_nums.push_back(5);
	lst_nums.push_back(6);
	lst_nums.push_back(6);
	lst_nums.push_back(7);
	lst_nums.push_back(8);
	lst_nums.push_back(9);
	lst_nums.push_back(9);

	std::cout << "For a int list lst_nums : ";
	std::cout << std::endl << "lst_nums = { ";
	for (ft::list<int>::iterator it = lst_nums.begin(); it != lst_nums.end(); it++)
		std::cout  << COLOR_CYAN << std::boolalpha << COLOR_RESET << *it << " ";
	std::cout << "}" << std::endl << std::endl;

	lst_nums.unique();
	std::cout << "lst_nums.unique();" << std::endl << std::endl;

	std::cout << "Now lst_nums = ";
	std::cout << std::endl << "lst_nums = { ";
	for (ft::list<int>::iterator it = lst_nums.begin(); it != lst_nums.end(); it++)
		std::cout  << COLOR_CYAN << std::boolalpha << COLOR_RESET << *it << " ";
	std::cout << "}" << std::endl << std::endl;

	ft::list<int> lst_nums2;

	lst_nums2.push_back(1);
	lst_nums2.push_back(1);
	lst_nums2.push_back(1);
	lst_nums2.push_back(1);
	lst_nums2.push_back(1);
	lst_nums2.push_back(1);
	lst_nums2.push_back(1);

	std::cout << "For a int list lst_nums2 : ";
	std::cout << std::endl << "lst_nums2 = { ";
	for (ft::list<int>::iterator it = lst_nums2.begin(); it != lst_nums2.end(); it++)
		std::cout  << COLOR_CYAN << std::boolalpha << COLOR_RESET << *it << " ";
	std::cout << "}" << std::endl << std::endl;

	lst_nums2.unique();
	std::cout << "lst_nums2.unique();" << std::endl << std::endl;

	std::cout << "Now lst_nums2 = ";
	std::cout << std::endl << "lst_nums2 = { ";
	for (ft::list<int>::iterator it = lst_nums2.begin(); it != lst_nums2.end(); it++)
		std::cout  << COLOR_CYAN << std::boolalpha << COLOR_RESET << *it << " ";
	std::cout << "}" << std::endl << std::endl;

	std::cout << COLOR_YELLOW << "unique with condition :" << COLOR_RESET << std::endl;

	ft::list<float>	lst_floats;

	lst_floats.push_back(2.72);
	lst_floats.push_back(3.14);
	lst_floats.push_back(12.15);
	lst_floats.push_back(12.77);
	lst_floats.push_back(15.3);
	lst_floats.push_back(72.25);
	lst_floats.push_back(73.0);
	lst_floats.push_back(73.35);

	std::cout << "For a float list lst_floats : ";
	std::cout << std::endl << "lst_floats = { ";
	for (ft::list<float>::iterator it = lst_floats.begin(); it != lst_floats.end(); it++)
		std::cout  << COLOR_CYAN << std::boolalpha << COLOR_RESET << *it << " ";
	std::cout << "}" << std::endl << std::endl;

	lst_floats.unique(same_integral_part);
	std::cout << "lst_floats.unique(same_integral_part);" << std::endl << std::endl;

	std::cout << "Now lst_floats : ";
		std::cout << std::endl << "lst_floats = { ";
	for (ft::list<float>::iterator it = lst_floats.begin(); it != lst_floats.end(); it++)
		std::cout  << COLOR_CYAN << std::boolalpha << COLOR_RESET << *it << " ";
	std::cout << "}" << std::endl << std::endl;

	lst_floats.unique(is_near());
	std::cout << "lst_floats.unique(is_near());" << std::endl << std::endl;

	std::cout << "Now lst_floats : ";
	std::cout << std::endl << "lst_floats = { ";
	for (ft::list<float>::iterator it = lst_floats.begin(); it != lst_floats.end(); it++)
		std::cout  << COLOR_CYAN << std::boolalpha << COLOR_RESET << *it << " ";
	std::cout << "}" << std::endl << std::endl;

	test_operations_unique_std();
}


bool	is_odd(int n) { return ((n % 2) != 0); };

bool	is_neg(int n) { return (n < 0); };

void test_operations_remove_std()
{
	std::cout << COLOR_BLUE << "----- std::list -----" << COLOR_RESET << std::endl << std::endl;
	std::cout << COLOR_YELLOW <<"remove :" << COLOR_RESET << std::endl << std::endl;

	std::list<int>	lst_numbers;

	lst_numbers.push_back(69);
	lst_numbers.push_back(69);
	lst_numbers.push_back(42);
	lst_numbers.push_back(42);
	lst_numbers.push_back(69);
	lst_numbers.push_back(69);
	lst_numbers.push_back(69);
	lst_numbers.push_back(42);
	lst_numbers.push_back(42);
	lst_numbers.push_back(69);
	lst_numbers.push_back(42);
	lst_numbers.push_back(69);

	std::cout << "For a int list : ";
	std::cout << std::endl << "lst_numbers = { ";
	for (std::list<int>::iterator it = lst_numbers.begin(); it != lst_numbers.end(); it++)
		std::cout  << COLOR_CYAN << std::boolalpha << COLOR_RESET << *it << " ";
	std::cout << "}" << std::endl << std::endl;

	lst_numbers.remove(42);
	std::cout << "lst_numbers.remove(42);" << std::endl << std::endl;

	std::cout << "Now int list : ";
	std::cout << std::endl << "lst_numbers = { ";
	for (std::list<int>::iterator it = lst_numbers.begin(); it != lst_numbers.end(); it++)
		std::cout  << COLOR_CYAN << std::boolalpha << COLOR_RESET << *it << " ";
	std::cout << "}" << std::endl << std::endl;


	lst_numbers.remove(69);
	std::cout << "lst_numbers.remove(69);" << std::endl << std::endl;

	std::cout << "Now int list : ";
	std::cout << std::endl << "lst_numbers = { ";
	for (std::list<int>::iterator it = lst_numbers.begin(); it != lst_numbers.end(); it++)
		std::cout  << COLOR_CYAN << std::boolalpha << COLOR_RESET << *it << " ";
	std::cout << "}" << std::endl << std::endl;

	std::cout << COLOR_YELLOW <<"remove_if :" << COLOR_RESET << std::endl << std::endl;

	std::list<int>	lst_nums;

	lst_nums.push_back(-4355);
	lst_nums.push_back(4573);
	lst_nums.push_back(-2267);
	lst_nums.push_back(3468);
	lst_nums.push_back(2351);
	lst_nums.push_back(-1112);
	lst_nums.push_back(-6356);
	lst_nums.push_back(6832);
	lst_nums.push_back(4548);
	lst_nums.push_back(-3252);
	lst_nums.push_back(-5420);
	lst_nums.push_back(2232);

	std::cout << "For a int list : ";
	std::cout << std::endl << "lst_nums = { ";
	for (std::list<int>::iterator it = lst_nums.begin(); it != lst_nums.end(); it++)
		std::cout  << COLOR_CYAN << std::boolalpha << COLOR_RESET << *it << " ";
	std::cout << "}" << std::endl << std::endl;

	lst_nums.remove_if(is_odd);
	std::cout << "lst_nums.remove_if(is_odd);" << std::endl << std::endl;

	std::cout << "Now int list : ";
	std::cout << std::endl << "lst_nums = { ";
	for (std::list<int>::iterator it = lst_nums.begin(); it != lst_nums.end(); it++)
		std::cout  << COLOR_CYAN << std::boolalpha << COLOR_RESET << *it << " ";
	std::cout << "}" << std::endl << std::endl;

	lst_nums.remove_if(is_neg);
	std::cout << "lst_nums.remove_if(is_neg);" << std::endl << std::endl;

	std::cout << "Now int list : ";
	std::cout << std::endl << "lst_nums = { ";
	for (std::list<int>::iterator it = lst_nums.begin(); it != lst_nums.end(); it++)
		std::cout  << COLOR_CYAN << std::boolalpha << COLOR_RESET << *it << " ";
	std::cout << "}" << std::endl << std::endl;
	next_test();
}

void test_operations_remove()
{
	std::cout << ft_list << std::endl;
	std::cout << COLOR_CYAN <<  "Test operation remove | remove_if " << std::endl << std::endl;
	std::cout << COLOR_YELLOW <<"remove :" << COLOR_RESET << std::endl << std::endl;

	ft::list<int>	lst_numbers;

	lst_numbers.push_back(69);
	lst_numbers.push_back(69);
	lst_numbers.push_back(42);
	lst_numbers.push_back(42);
	lst_numbers.push_back(69);
	lst_numbers.push_back(69);
	lst_numbers.push_back(69);
	lst_numbers.push_back(42);
	lst_numbers.push_back(42);
	lst_numbers.push_back(69);
	lst_numbers.push_back(42);
	lst_numbers.push_back(69);

	std::cout << "For a int list : ";
	std::cout << std::endl << "lst_numbers = { ";
	for (ft::list<int>::iterator it = lst_numbers.begin(); it != lst_numbers.end(); it++)
		std::cout  << COLOR_CYAN << std::boolalpha << COLOR_RESET << *it << " ";
	std::cout << "}" << std::endl << std::endl;

	lst_numbers.remove(42);
	std::cout << "lst_numbers.remove(42);" << std::endl << std::endl;

	std::cout << "Now int list : ";
	std::cout << std::endl << "lst_numbers = { ";
	for (ft::list<int>::iterator it = lst_numbers.begin(); it != lst_numbers.end(); it++)
		std::cout  << COLOR_CYAN << std::boolalpha << COLOR_RESET << *it << " ";
	std::cout << "}" << std::endl << std::endl;


	lst_numbers.remove(69);
	std::cout << "lst_numbers.remove(69);" << std::endl << std::endl;

	std::cout << "Now int list : ";
	std::cout << std::endl << "lst_numbers = { ";
	for (ft::list<int>::iterator it = lst_numbers.begin(); it != lst_numbers.end(); it++)
		std::cout  << COLOR_CYAN << std::boolalpha << COLOR_RESET << *it << " ";
	std::cout << "}" << std::endl << std::endl;

	std::cout << COLOR_YELLOW <<"remove_if :" << COLOR_RESET << std::endl << std::endl;

	ft::list<int>	lst_nums;

	lst_nums.push_back(-4355);
	lst_nums.push_back(4573);
	lst_nums.push_back(-2267);
	lst_nums.push_back(3468);
	lst_nums.push_back(2351);
	lst_nums.push_back(-1112);
	lst_nums.push_back(-6356);
	lst_nums.push_back(6832);
	lst_nums.push_back(4548);
	lst_nums.push_back(-3252);
	lst_nums.push_back(-5420);
	lst_nums.push_back(2232);

	std::cout << "For a int list : ";
	std::cout << std::endl << "lst_nums = { ";
	for (ft::list<int>::iterator it = lst_nums.begin(); it != lst_nums.end(); it++)
		std::cout  << COLOR_CYAN << std::boolalpha << COLOR_RESET << *it << " ";
	std::cout << "}" << std::endl << std::endl;

	lst_nums.remove_if(is_odd);
	std::cout << "lst_nums.remove_if(is_odd);" << std::endl << std::endl;

	std::cout << "Now int list : ";
	std::cout << std::endl << "lst_nums = { ";
	for (ft::list<int>::iterator it = lst_nums.begin(); it != lst_nums.end(); it++)
		std::cout  << COLOR_CYAN << std::boolalpha << COLOR_RESET << *it << " ";
	std::cout << "}" << std::endl << std::endl;

	lst_nums.remove_if(is_neg);
	std::cout << "lst_nums.remove_if(is_neg);" << std::endl << std::endl;

	std::cout << "Now int list : ";
	std::cout << std::endl << "lst_nums = { ";
	for (ft::list<int>::iterator it = lst_nums.begin(); it != lst_nums.end(); it++)
		std::cout  << COLOR_CYAN << std::boolalpha << COLOR_RESET << *it << " ";
	std::cout << "}" << std::endl << std::endl;

	test_operations_remove_std();
}

static void	test_operations_splice_std(void)
{
	std::cout << COLOR_BLUE << "----- std::list -----" << COLOR_RESET << std::endl << std::endl;
	std::cout << COLOR_YELLOW << "splice" << COLOR_RESET << std::endl;
	  std::list<int> mylist1, mylist2;
  std::list<int>::iterator it;

  // set some initial values:
  for (int i=1; i<=4; ++i)
     mylist1.push_back(i);      // mylist1: 1 2 3 4

  for (int i=1; i<=3; ++i)
     mylist2.push_back(i*10);   // mylist2: 10 20 30

  it = mylist1.begin();
  ++it;                         // points to 2

  mylist1.splice (it, mylist2); // mylist1: 1 10 20 30 2 3 4
                                // mylist2 (empty)
                                // "it" still points to 2 (the 5th element)
                                          
  mylist2.splice (mylist2.begin(),mylist1, it);
                                // mylist1: 1 10 20 30 3 4
                                // mylist2: 2
                                // "it" is now invalid.
  it = mylist1.begin();
  std::advance(it,3);           // "it" points now to 30

  mylist1.splice ( mylist1.begin(), mylist1, it, mylist1.end());
                                // mylist1: 30 3 4 1 10 20

  std::cout << "mylist1 contains:";
  for (it=mylist1.begin(); it!=mylist1.end(); ++it)
    std::cout << ' ' << *it;
  std::cout << '\n';

  std::cout << "mylist2 contains:";
  for (it=mylist2.begin(); it!=mylist2.end(); ++it)
    std::cout << ' ' << *it;
  std::cout << '\n';
	next_test();
}

void	test_operations_splice(void)
{
	std::cout << ft_list << std::endl;
	std::cout << COLOR_CYAN <<  "Test operations splice" << std::endl << std::endl;
	std::cout << COLOR_YELLOW << "splice | single" << COLOR_RESET << std::endl;
	ft::list<int> mylist1, mylist2;
	
  	ft::list<int>::iterator it;

  	// set some initial values:
  	for (int i=1; i<=4; ++i)
  	   mylist1.push_back(i);      // mylist1: 1 2 3 4

  	for (int i=1; i<=3; ++i)
  	   mylist2.push_back(i*10);   // mylist2: 10 20 30

  	it = mylist1.begin();
  	++it;                         // points to 2

  	mylist1.splice (it, mylist2); // mylist1: 1 10 20 30 2 3 4
                                // mylist2 (empty)
                                // "it" still points to 2 (the 5th element)
                                          
  	mylist2.splice (mylist2.begin(),mylist1, it);
                                // mylist1: 1 10 20 30 3 4
                                // mylist2: 2
                                // "it" is now invalid.
  	it = mylist1.begin();
  	it++;
	it++;
	it++;

  	mylist1.splice ( mylist1.begin(), mylist1, it, mylist1.end());
  	                              // mylist1: 30 3 4 1 10 20

  	std::cout << "mylist1 contains:";
  	for (it=mylist1.begin(); it!=mylist1.end(); ++it)
  	  std::cout << ' ' << *it;
  	std::cout << '\n';

  	std::cout << "mylist2 contains:";
  	for (it=mylist2.begin(); it!=mylist2.end(); ++it)
  	  std::cout << ' ' << *it;
  	std::cout << '\n';
	test_operations_splice_std();
}