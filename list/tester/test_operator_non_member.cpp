/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_operator_non_member.cpp                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jereligi <jereligi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/18 16:01:39 by jereligi          #+#    #+#             */
/*   Updated: 2021/03/18 16:08:50 by jereligi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "constant.hpp"

void	test_non_member_ope_std(void)
{
	std::cout << COLOR_BLUE << "----- std::list -----" << COLOR_RESET << std::endl << std::endl;
	std::cout << COLOR_YELLOW << "== | != :" << COLOR_RESET << std::endl;

	std::list<std::string>	lst_str1;

	lst_str1.push_back("Mulhouse");
	lst_str1.push_back("Niort");
	lst_str1.push_back("Locmaria grand-champ");
	lst_str1.push_back("Vatan");
	lst_str1.push_back("jouy-en-josasse");

	std::list<std::string>	lst_str2(lst_str1);

	std::list<std::string>	lst_str3;

	lst_str3.push_back("Paris");
	lst_str3.push_back("Lyon");
	lst_str3.push_back("Toulouse");
	lst_str3.push_back("Grenoble");
	lst_str3.push_back("Brest");

	std::cout << "For string list lst_str1 : ";
	std::cout << " { ";
	for (std::list<std::string>::iterator it = lst_str1.begin(); it != lst_str1.end(); it++)
		std::cout  << COLOR_CYAN << std::boolalpha << COLOR_RESET << *it << " ";
	std::cout << "}" << std::endl << std::endl;
	std::cout << "For string list lst_str2 : ";
	std::cout << " { ";
	for (std::list<std::string>::iterator it = lst_str2.begin(); it != lst_str2.end(); it++)
		std::cout  << COLOR_CYAN << std::boolalpha << COLOR_RESET << *it << " ";
	std::cout << "}" << std::endl << std::endl;
	std::cout << "For string list lst_str3 : ";
	std::cout << " { ";
	for (std::list<std::string>::iterator it = lst_str3.begin(); it != lst_str3.end(); it++)
		std::cout  << COLOR_CYAN << std::boolalpha << COLOR_RESET << *it << " ";
	std::cout << "}" << std::endl << std::endl;

	std::cout << "lst_str1 == lst_str1 : " << std::boolalpha << (lst_str1 == lst_str1) << std::endl << std::endl;

	std::cout << "lst_str1 == lst_str2 : " << std::boolalpha << (lst_str1 == lst_str2) << std::endl;
	std::cout << "lst_str1 != lst_str2 : " << std::boolalpha << (lst_str1 != lst_str2) << std::endl << std::endl;

	std::cout << "lst_str1 == lst_str3 : " << std::boolalpha << (lst_str1 == lst_str3) << std::endl;
	std::cout << "lst_str1 != lst_str3 : " << std::boolalpha << (lst_str1 != lst_str3) << std::endl << std::endl;

	std::cout << COLOR_YELLOW << "< | <= :" << COLOR_RESET << std::endl;
	std::list<int>	lst_nums1;

	lst_nums1.push_back(0);
	lst_nums1.push_back(1);
	lst_nums1.push_back(10);
	lst_nums1.push_back(11);
	lst_nums1.push_back(100);
	lst_nums1.push_back(101);
	lst_nums1.push_back(110);
	lst_nums1.push_back(111);

	std::list<int>	lst_nums2(lst_nums1);

	lst_nums2.push_back(1000);

	std::cout << "For int string list lst_nums1 : ";
	std::cout << " { ";
	for (std::list<int>::iterator it = lst_nums1.begin(); it != lst_nums1.end(); it++)
		std::cout  << COLOR_CYAN << std::boolalpha << COLOR_RESET << *it << " ";
	std::cout << "}" << std::endl << std::endl;
	std::cout << "For int string list lst_nums2 : ";
	std::cout << " { ";
	for (std::list<int>::iterator it = lst_nums2.begin(); it != lst_nums2.end(); it++)
		std::cout  << COLOR_CYAN << std::boolalpha << COLOR_RESET << *it << " ";
	std::cout << "}" << std::endl << std::endl;

	std::cout << "lst_nums1 < lst_nums1 = " << (lst_nums1 < lst_nums1) << std::endl;
	std::cout << "lst_nums1 < lst_nums2 = " << (lst_nums1 < lst_nums2) << std::endl;
	std::cout << "lst_nums2 < lst_nums1 = " << (lst_nums2 < lst_nums1) << std::endl;
	std::cout << "lst_nums1 <= lst_nums1 = " << (lst_nums1 <= lst_nums1) << std::endl;
	std::cout << "lst_nums1 <= lst_nums2 = " << (lst_nums1 <= lst_nums2) << std::endl;
	std::cout << "lst_nums2 <= lst_nums1 = " << (lst_nums2 <= lst_nums1) << std::endl << std::endl;

	std::cout << COLOR_YELLOW << "> | >= :" << COLOR_RESET << std::endl;

	std::cout << "lst_nums1 > lst_nums1 = " << (lst_nums1 > lst_nums1) << std::endl;
	std::cout << "lst_nums1 > lst_nums2 = " << (lst_nums1 > lst_nums2) << std::endl;
	std::cout << "lst_nums2 > lst_nums1 = " << (lst_nums2 > lst_nums1) << std::endl;
	std::cout << "lst_nums1 >= lst_nums1 = " << (lst_nums1 >= lst_nums1) << std::endl;
	std::cout << "lst_nums1 >= lst_nums2 = " << (lst_nums1 >= lst_nums2) << std::endl;
	std::cout << "lst_nums2 >= lst_nums1 = " << (lst_nums2 >= lst_nums1) << std::endl;
	next_test();
}

void	test_non_member_ope(void)
{
	std::cout << ft_list << std::endl;
	std::cout << COLOR_CYAN <<  "Test non-member operators" << std::endl << std::endl;
	std::cout << COLOR_YELLOW << "== | != :" << COLOR_RESET << std::endl;

	ft::list<std::string>	lst_str1;

	lst_str1.push_back("Mulhouse");
	lst_str1.push_back("Niort");
	lst_str1.push_back("Locmaria grand-champ");
	lst_str1.push_back("Vatan");
	lst_str1.push_back("jouy-en-josasse");

	ft::list<std::string>	lst_str2(lst_str1);

	ft::list<std::string>	lst_str3;

	lst_str3.push_back("Paris");
	lst_str3.push_back("Lyon");
	lst_str3.push_back("Toulouse");
	lst_str3.push_back("Grenoble");
	lst_str3.push_back("Brest");

	std::cout << "For string list lst_str1 : " << lst_str1 << std::endl;
	std::cout << "For string list lst_str2 : " << lst_str2 << std::endl;
	std::cout << "For string list lst_str3 : " << lst_str3 << std::endl << std::endl;

	std::cout << "lst_str1 == lst_str1 : " << std::boolalpha << (lst_str1 == lst_str1) << std::endl << std::endl;

	std::cout << "lst_str1 == lst_str2 : " << std::boolalpha << (lst_str1 == lst_str2) << std::endl;
	std::cout << "lst_str1 != lst_str2 : " << std::boolalpha << (lst_str1 != lst_str2) << std::endl << std::endl;

	std::cout << "lst_str1 == lst_str3 : " << std::boolalpha << (lst_str1 == lst_str3) << std::endl;
	std::cout << "lst_str1 != lst_str3 : " << std::boolalpha << (lst_str1 != lst_str3) << std::endl << std::endl;

	std::cout << COLOR_YELLOW << "< | <= :" << COLOR_RESET << std::endl;

	ft::list<int>	lst_nums1;

	lst_nums1.push_back(0);
	lst_nums1.push_back(1);
	lst_nums1.push_back(10);
	lst_nums1.push_back(11);
	lst_nums1.push_back(100);
	lst_nums1.push_back(101);
	lst_nums1.push_back(110);
	lst_nums1.push_back(111);

	ft::list<int>	lst_nums2(lst_nums1);

	lst_nums2.push_back(1000);

	std::cout << "For int string list lst_nums1 : " << lst_nums1 << std::endl;
	std::cout << "For int string list lst_nums2 : " << lst_nums2 << std::endl << std::endl;

	std::cout << "lst_nums1 < lst_nums1 = " << (lst_nums1 < lst_nums1) << std::endl;
	std::cout << "lst_nums1 < lst_nums2 = " << (lst_nums1 < lst_nums2) << std::endl;
	std::cout << "lst_nums2 < lst_nums1 = " << (lst_nums2 < lst_nums1) << std::endl;
	std::cout << "lst_nums1 <= lst_nums1 = " << (lst_nums1 <= lst_nums1) << std::endl;
	std::cout << "lst_nums1 <= lst_nums2 = " << (lst_nums1 <= lst_nums2) << std::endl;
	std::cout << "lst_nums2 <= lst_nums1 = " << (lst_nums2 <= lst_nums1) << std::endl << std::endl;

		std::cout << COLOR_YELLOW << "> | >= :" << COLOR_RESET << std::endl;


	std::cout << "lst_nums1 > lst_nums1 = " << (lst_nums1 > lst_nums1) << std::endl;
	std::cout << "lst_nums1 > lst_nums2 = " << (lst_nums1 > lst_nums2) << std::endl;
	std::cout << "lst_nums2 > lst_nums1 = " << (lst_nums2 > lst_nums1) << std::endl;
	std::cout << "lst_nums1 >= lst_nums1 = " << (lst_nums1 >= lst_nums1) << std::endl;
	std::cout << "lst_nums1 >= lst_nums2 = " << (lst_nums1 >= lst_nums2) << std::endl;
	std::cout << "lst_nums2 >= lst_nums1 = " << (lst_nums2 >= lst_nums1) << std::endl << std::endl;

	test_non_member_ope_std();
}