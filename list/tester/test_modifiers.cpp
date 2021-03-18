/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_modifiers.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jereligi <jereligi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/18 11:11:52 by jereligi          #+#    #+#             */
/*   Updated: 2021/03/18 13:42:59 by jereligi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "constant.hpp"

void	test_modifiers_two_std(void)
{
	std::cout << COLOR_BLUE << "----- std::list -----" << COLOR_RESET << std::endl << std::endl;
	std::cout << COLOR_YELLOW << "erase | one element :" << COLOR_RESET << std::endl;

	std::list<std::string>	alien_hidden;

	alien_hidden.push_back("👽");
	alien_hidden.push_back("🎅");
	alien_hidden.push_back("🎅");
	alien_hidden.push_back("🎅");
	alien_hidden.push_back("👽");
	alien_hidden.push_back("👽");
	alien_hidden.push_back("👽");
	alien_hidden.push_back("👽");
	alien_hidden.push_back("🎅");
	alien_hidden.push_back("🎅");
	alien_hidden.push_back("🎅");
	alien_hidden.push_back("🎅");
	alien_hidden.push_back("🎅");
	alien_hidden.push_back("👽");

	std::cout << "For a string vector alien_hidden = ";
	std::cout << std::endl << "alien_hidden = { ";
	for (std::list<std::string>::iterator it = alien_hidden.begin(); it != alien_hidden.end(); it++)
		std::cout  << COLOR_CYAN << std::boolalpha << COLOR_RESET << *it << " ";
	std::cout << "}" << std::endl << std::endl;

	std::cout << "// Remove the begining alien" << std::endl;
	std::cout << "alien_hidden.erase(alien_hidden.begin());" << std::endl;
	alien_hidden.erase(alien_hidden.begin());
	std::cout << "Now alien_hidden = ";
	std::cout << std::endl << "alien_hidden = { ";
	for (std::list<std::string>::iterator it = alien_hidden.begin(); it != alien_hidden.end(); it++)
		std::cout  << COLOR_CYAN << std::boolalpha << COLOR_RESET << *it << " ";
	std::cout << "}" << std::endl << std::endl;

	std::cout << "// Remove the end alien" << std::endl;
	std::cout << "alien_hidden.erase(--alien_hidden.end());" << std::endl;
	alien_hidden.erase(--alien_hidden.end());
	std::cout << "Now alien_hidden = ";
	std::cout << std::endl << "alien_hidden = { ";
	for (std::list<std::string>::iterator it = alien_hidden.begin(); it != alien_hidden.end(); it++)
		std::cout  << COLOR_CYAN << std::boolalpha << COLOR_RESET << *it << " ";
	std::cout << "}" << std::endl << std::endl;

	std::cout << COLOR_YELLOW << "erase | range :" << COLOR_RESET << std::endl;

	std::cout << "// Remove the group of alien" << std::endl;
	std::list<std::string>::iterator it_first_alien_grp = alien_hidden.begin();
	std::list<std::string>::iterator it_last_alien_grp;
	it_first_alien_grp++;
	it_first_alien_grp++;
	it_first_alien_grp++;
	it_last_alien_grp = it_first_alien_grp;
	it_last_alien_grp++;
	it_last_alien_grp++;
	it_last_alien_grp++;

	std::cout << "alien_hidden.erase(it_first_alien_grp, ++it_last_alien_grp);" << std::endl;
	alien_hidden.erase(it_first_alien_grp, ++it_last_alien_grp);
	std::cout << "Now alien_hidden = ";
	std::cout << std::endl << "alien_hidden = { ";
	for (std::list<std::string>::iterator it = alien_hidden.begin(); it != alien_hidden.end(); it++)
		std::cout  << COLOR_CYAN << std::boolalpha << COLOR_RESET << *it << " ";
	std::cout << "}" << std::endl << std::endl;

	std::cout << COLOR_YELLOW << "rezise :" << COLOR_RESET << std::endl;

	std::cout << "// let's add some Santa girls with the resize function !" << std::endl;
	alien_hidden.resize(16, "🤶");
	std::cout << "alien_hidden.resize(16, \"🤶\")" << std::endl;
	std::cout << "Now alien_hidden = ";
	std::cout << std::endl << "alien_hidden = { ";
	for (std::list<std::string>::iterator it = alien_hidden.begin(); it != alien_hidden.end(); it++)
		std::cout  << COLOR_CYAN << std::boolalpha << COLOR_RESET << *it << " ";
	std::cout << "}" << std::endl << std::endl;

	std::cout << "As there is only one Santa claus and one Santa girl :" << std::endl;
	std::cout << "alien_hidden.resize(1, \"🎅\")" << std::endl;
	std::cout << "alien_hidden.resize(2, \"🤶\")" << std::endl;
	alien_hidden.resize(1, "🎅");
	alien_hidden.resize(2, "🤶");
	std::cout << "Now alien_hidden = ";
	std::cout << std::endl << "alien_hidden = { ";
	for (std::list<std::string>::iterator it = alien_hidden.begin(); it != alien_hidden.end(); it++)
		std::cout  << COLOR_CYAN << std::boolalpha << COLOR_RESET << *it << " ";
	std::cout << "}" << std::endl << std::endl;

	std::cout << COLOR_YELLOW << "swap :" << COLOR_RESET << std::endl;

	std::list<std::string> ticks(5, "✅");
	std::list<std::string> cross(5, "❌");

	std::cout << "For a string list of ticks : ";
	std::cout << std::endl << "ticks = { ";
	for (std::list<std::string>::iterator it = ticks.begin(); it != ticks.end(); it++)
		std::cout  << COLOR_CYAN << std::boolalpha << COLOR_RESET << *it << " ";
	std::cout << "}" << std::endl << std::endl;
	std::cout << "For a string list of cross : ";
		std::cout << std::endl << "cross = { ";
	for (std::list<std::string>::iterator it = cross.begin(); it != cross.end(); it++)
		std::cout  << COLOR_CYAN << std::boolalpha << COLOR_RESET << *it << " ";
	std::cout << "}" << std::endl << std::endl;

	std::cout << "// Now lets swap it" << std::endl;
	std::cout << "ticks.swap(cross);" << std::endl << std::endl;
	ticks.swap(cross);

	std::cout << "Now list of ticks : ";
	std::cout << std::endl << "ticks = { ";
	for (std::list<std::string>::iterator it = ticks.begin(); it != ticks.end(); it++)
		std::cout  << COLOR_CYAN << std::boolalpha << COLOR_RESET << *it << " ";
	std::cout << "}" << std::endl << std::endl;
	std::cout << "Now list of cross :  : ";
		std::cout << std::endl << "cross = { ";
	for (std::list<std::string>::iterator it = cross.begin(); it != cross.end(); it++)
		std::cout  << COLOR_CYAN << std::boolalpha << COLOR_RESET << *it << " ";
	std::cout << "}" << std::endl << std::endl;
	next_test();
}

void	test_modifiers_two(void)
{
	std::cout << ft_list << std::endl;
	std::cout << COLOR_CYAN <<  "Test modifiers two | erase | resize | swap " << std::endl << std::endl;
	std::cout << COLOR_YELLOW << "erase | one element :" << COLOR_RESET << std::endl;

	ft::list<std::string>	alien_hidden;

	alien_hidden.push_back("👽");
	alien_hidden.push_back("🎅");
	alien_hidden.push_back("🎅");
	alien_hidden.push_back("🎅");
	alien_hidden.push_back("👽");
	alien_hidden.push_back("👽");
	alien_hidden.push_back("👽");
	alien_hidden.push_back("👽");
	alien_hidden.push_back("🎅");
	alien_hidden.push_back("🎅");
	alien_hidden.push_back("🎅");
	alien_hidden.push_back("🎅");
	alien_hidden.push_back("🎅");
	alien_hidden.push_back("👽");

	std::cout << "For a string vector alien_hidden = ";
	std::cout << std::endl << "alien_hidden = { ";
	for (ft::list<std::string>::iterator it = alien_hidden.begin(); it != alien_hidden.end(); it++)
		std::cout  << COLOR_CYAN << std::boolalpha << COLOR_RESET << *it << " ";
	std::cout << "}" << std::endl << std::endl;

	std::cout << "// Remove the begining alien" << std::endl;
	std::cout << "alien_hidden.erase(alien_hidden.begin());" << std::endl;
	alien_hidden.erase(alien_hidden.begin());
	std::cout << "Now alien_hidden = ";
	std::cout << std::endl << "alien_hidden = { ";
	for (ft::list<std::string>::iterator it = alien_hidden.begin(); it != alien_hidden.end(); it++)
		std::cout  << COLOR_CYAN << std::boolalpha << COLOR_RESET << *it << " ";
	std::cout << "}" << std::endl << std::endl;

	std::cout << "// Remove the end alien" << std::endl;
	std::cout << "alien_hidden.erase(--alien_hidden.end());" << std::endl;
	alien_hidden.erase(--alien_hidden.end());
	std::cout << "Now alien_hidden = ";
	std::cout << std::endl << "alien_hidden = { ";
	for (ft::list<std::string>::iterator it = alien_hidden.begin(); it != alien_hidden.end(); it++)
		std::cout  << COLOR_CYAN << std::boolalpha << COLOR_RESET << *it << " ";
	std::cout << "}" << std::endl << std::endl;

	std::cout << COLOR_YELLOW << "erase | range :" << COLOR_RESET << std::endl;

	std::cout << "// Remove the group of alien" << std::endl;
	ft::list<std::string>::iterator it_first_alien_grp = alien_hidden.begin();
	ft::list<std::string>::iterator it_last_alien_grp;
	it_first_alien_grp++;
	it_first_alien_grp++;
	it_first_alien_grp++;
	it_last_alien_grp = it_first_alien_grp;
	it_last_alien_grp++;
	it_last_alien_grp++;
	it_last_alien_grp++;

	std::cout << "alien_hidden.erase(it_first_alien_grp, ++it_last_alien_grp);" << std::endl;
	alien_hidden.erase(it_first_alien_grp, ++it_last_alien_grp);
	std::cout << "Now alien_hidden = ";
	std::cout << std::endl << "alien_hidden = { ";
	for (ft::list<std::string>::iterator it = alien_hidden.begin(); it != alien_hidden.end(); it++)
		std::cout  << COLOR_CYAN << std::boolalpha << COLOR_RESET << *it << " ";
	std::cout << "}" << std::endl << std::endl;

	std::cout << COLOR_YELLOW << "rezise :" << COLOR_RESET << std::endl;

	std::cout << "// let's add some Santa girls with the resize function !" << std::endl;
	alien_hidden.resize(16, "🤶");
	std::cout << "alien_hidden.resize(16, \"🤶\")" << std::endl;
	std::cout << "Now alien_hidden = ";
	std::cout << std::endl << "alien_hidden = { ";
	for (ft::list<std::string>::iterator it = alien_hidden.begin(); it != alien_hidden.end(); it++)
		std::cout  << COLOR_CYAN << std::boolalpha << COLOR_RESET << *it << " ";
	std::cout << "}" << std::endl << std::endl;

	std::cout << "As there is only one Santa claus and one Santa girl :" << std::endl;
	std::cout << "alien_hidden.resize(1, \"🎅\")" << std::endl;
	std::cout << "alien_hidden.resize(2, \"🤶\")" << std::endl;
	alien_hidden.resize(1, "🎅");
	alien_hidden.resize(2, "🤶");
	std::cout << "Now alien_hidden = ";
	std::cout << std::endl << "alien_hidden = { ";
	for (ft::list<std::string>::iterator it = alien_hidden.begin(); it != alien_hidden.end(); it++)
		std::cout  << COLOR_CYAN << std::boolalpha << COLOR_RESET << *it << " ";
	std::cout << "}" << std::endl << std::endl;

	std::cout << COLOR_YELLOW << "swap :" << COLOR_RESET << std::endl;

	ft::list<std::string> ticks(5, "✅");
	ft::list<std::string> cross(5, "❌");

	std::cout << "For a string list of ticks : ";
	std::cout << std::endl << "ticks = { ";
	for (ft::list<std::string>::iterator it = ticks.begin(); it != ticks.end(); it++)
		std::cout  << COLOR_CYAN << std::boolalpha << COLOR_RESET << *it << " ";
	std::cout << "}" << std::endl << std::endl;
	std::cout << "For a string list of cross : ";
		std::cout << std::endl << "cross = { ";
	for (ft::list<std::string>::iterator it = cross.begin(); it != cross.end(); it++)
		std::cout  << COLOR_CYAN << std::boolalpha << COLOR_RESET << *it << " ";
	std::cout << "}" << std::endl << std::endl;

	std::cout << "// Now lets swap it" << std::endl;
	std::cout << "ticks.swap(cross);" << std::endl << std::endl;
	ticks.swap(cross);

	std::cout << "Now list of ticks : ";
	std::cout << std::endl << "ticks = { ";
	for (ft::list<std::string>::iterator it = ticks.begin(); it != ticks.end(); it++)
		std::cout  << COLOR_CYAN << std::boolalpha << COLOR_RESET << *it << " ";
	std::cout << "}" << std::endl << std::endl;
	std::cout << "Now list of cross :  : ";
		std::cout << std::endl << "cross = { ";
	for (ft::list<std::string>::iterator it = cross.begin(); it != cross.end(); it++)
		std::cout  << COLOR_CYAN << std::boolalpha << COLOR_RESET << *it << " ";
	std::cout << "}" << std::endl << std::endl;

	test_modifiers_two_std();
}


void	test_modifiers_one_std(void)
{
	std::cout << COLOR_BLUE << "----- std::list -----" << COLOR_RESET << std::endl << std::endl;
	std::cout << COLOR_YELLOW <<"clear :" << COLOR_RESET << std::endl << std::endl;

	std::list<std::string> lst;

	lst.push_back("mr");
	lst.push_back("robot");
	lst.push_back("is");
	lst.push_back("a");
	lst.push_back("very");
	lst.push_back("good");
	lst.push_back("series.");

	std::cout << "For a string list : ";
	std::cout << std::endl << "lst = { ";
	for (std::list<std::string>::iterator it = lst.begin(); it != lst.end(); it++)
		std::cout  << COLOR_CYAN << std::boolalpha << COLOR_RESET << *it << " ";
	std::cout << "}" << std::endl << std::endl;
	std::cout << "lst.size() = " << lst.size() << std::endl << std::endl;

	lst.clear();
	std::cout << "lst.clear();"<< std::endl << std::endl;

	std::cout << "For a string list : ";
	std::cout << std::endl << "lst = { ";
	for (std::list<std::string>::iterator it = lst.begin(); it != lst.end(); it++)
		std::cout  << COLOR_CYAN << std::boolalpha << COLOR_RESET << *it << " ";
	std::cout << "}" << std::endl << std::endl;
	std::cout << "lst.size() = " << lst.size() << std::endl << std::endl;

	lst.clear();
	std::cout << "lst.clear();"<< std::endl << std::endl;

	std::cout << "For a string list : ";
	std::cout << std::endl << "lst = { ";
	for (std::list<std::string>::iterator it = lst.begin(); it != lst.end(); it++)
		std::cout  << COLOR_CYAN << std::boolalpha << COLOR_RESET << *it << " ";
	std::cout << "}" << std::endl << std::endl;
	std::cout << "lst.size() = " << lst.size() << std::endl << std::endl;

	std::cout << COLOR_YELLOW <<"assign :" << COLOR_RESET << std::endl << std::endl;

	std::list<std::string> lst_empty;
	std::list<std::string> lst_watch_brands;

	lst_watch_brands.push_back("rolex");
	lst_watch_brands.push_back("lip");
	lst_watch_brands.push_back("montblanc");
	lst_watch_brands.push_back("cartier");
	lst_watch_brands.push_back("TAG_Heuer");

	std::cout << "For an empty string list : ";
	std::cout << std::endl << "lst_empty = { ";
	for (std::list<std::string>::iterator it = lst_empty.begin(); it != lst_empty.end(); it++)
		std::cout  << COLOR_CYAN << std::boolalpha << COLOR_RESET << *it << " ";
	std::cout << "}" << std::endl << std::endl;
	std::cout << "With an string list lst_watch_brands : ";
	std::cout << std::endl << "lst = { ";
	for (std::list<std::string>::iterator it = lst_watch_brands.begin(); it != lst_watch_brands.end(); it++)
		std::cout  << COLOR_CYAN << std::boolalpha << COLOR_RESET << *it << " ";
	std::cout << "}" << std::endl << std::endl;

	lst_empty.assign(10, "empty");
	std::cout << "lst_empty.assign(10, \"empty\");" << std::endl;
	std::cout << std::endl << "lst_empty = { ";
	for (std::list<std::string>::iterator it = lst_empty.begin(); it != lst_empty.end(); it++)
		std::cout  << COLOR_CYAN << std::boolalpha << COLOR_RESET << *it << " ";
	std::cout << "}" << std::endl << std::endl;

	lst_empty.assign(lst_watch_brands.begin(), lst_watch_brands.end());
	std::cout << "lst_empty.assign(lst_watch_brands.begin(), lst_watch_brands.end());" << std::endl;

	std::cout << std::endl << "lst_empty = { ";
	for (std::list<std::string>::iterator it = lst_empty.begin(); it != lst_empty.end(); it++)
		std::cout  << COLOR_CYAN << std::boolalpha << COLOR_RESET << *it << " ";
	std::cout << "}" << std::endl << std::endl;

	std::cout << COLOR_YELLOW <<"insert | single element :" << COLOR_RESET << std::endl << std::endl;

	std::list<std::string> red_apples(10, "🍎");

	std::cout << "For red apples list : ";
	std::cout << std::endl << "red_apples = { ";
	for (std::list<std::string>::iterator it = red_apples.begin(); it != red_apples.end(); it++)
		std::cout  << COLOR_CYAN << std::boolalpha << COLOR_RESET << *it << " ";
	std::cout << "}" << std::endl << std::endl;

	std::cout << "// Inserting green apple at the begining of the list" << std::endl;
	std::cout << "red_apples.insert(red_apples.begin(), \"🍏\")" << std::endl;
	red_apples.insert(red_apples.begin(), "🍏");

	std::cout << "red apples list : ";
	std::cout << std::endl << "red_apples = { ";
	for (std::list<std::string>::iterator it = red_apples.begin(); it != red_apples.end(); it++)
		std::cout  << COLOR_CYAN << std::boolalpha << COLOR_RESET << *it << " ";
	std::cout << "}" << std::endl << std::endl;

	std::cout << "// Inserting green apple at the end of the list" << std::endl;
	std::cout << "red_apples.insert(red_apples.end(), \"🍏\")" << std::endl;
	red_apples.insert(red_apples.end(), "🍏");

	std::cout << "red apples list : ";
	std::cout << std::endl << "red_apples = { ";
	for (std::list<std::string>::iterator it = red_apples.begin(); it != red_apples.end(); it++)
		std::cout  << COLOR_CYAN << std::boolalpha << COLOR_RESET << *it << " ";
	std::cout << "}" << std::endl << std::endl;


	std::list<std::string>::iterator	it_middle = red_apples.begin();

	it_middle++;
	it_middle++;
	it_middle++;
	it_middle++;
	it_middle++;
	it_middle++;

	std::cout << "// Inserting green apple at the middle of the list" << std::endl;
	std::cout << "red_apples.insert(it_middle, \"🍏\")" << std::endl;
	red_apples.insert(it_middle, "🍏");

	std::cout << "red apples list : ";
	std::cout << std::endl << "red_apples = { ";
	for (std::list<std::string>::iterator it = red_apples.begin(); it != red_apples.end(); it++)
		std::cout  << COLOR_CYAN << std::boolalpha << COLOR_RESET << *it << " ";
	std::cout << "}" << std::endl << std::endl;


	std::cout << COLOR_YELLOW <<"insert | range :" << COLOR_RESET << std::endl << std::endl;

	std::list<std::string> fruits;

	fruits.push_back("🍍");
	fruits.push_back("🍉");
	fruits.push_back("🍐");
	fruits.push_back("🍒");
	fruits.push_back("🍓");

	std::list<std::string> animals;

	animals.push_back("🐈");
	animals.push_back("🐊");
	animals.push_back("🐇");
	animals.push_back("🦖");
	animals.push_back("🐬");

	std::list<std::string>::iterator animalsIteMid = animals.begin();
	animalsIteMid++;
	animalsIteMid++;

	std::cout << "For fruit in string list : ";
	std::cout << std::endl << "fruits = { ";
	for (std::list<std::string>::iterator it = fruits.begin(); it != fruits.end(); it++)
		std::cout  << COLOR_CYAN << std::boolalpha << COLOR_RESET << *it << " ";
	std::cout << "}" << std::endl << std::endl;
	std::cout << "For animal in string list : ";
	std::cout << std::endl << "animals = { ";
	for (std::list<std::string>::iterator it = animals.begin(); it != animals.end(); it++)
		std::cout  << COLOR_CYAN << std::boolalpha << COLOR_RESET << *it << " ";
	std::cout << "}" << std::endl << std::endl;

	std::cout << "// Insert range of fruits in animals list" << std::endl;
	animals.insert(animalsIteMid, fruits.begin(), fruits.end());

	std::cout << "animal list after insert : ";
	std::cout << std::endl << "animals = { ";
	for (std::list<std::string>::iterator it = animals.begin(); it != animals.end(); it++)
		std::cout  << COLOR_CYAN << std::boolalpha << COLOR_RESET << *it << " ";
	std::cout << "}" << std::endl << std::endl;

	std::cout << COLOR_YELLOW <<"insert multiple same element :" << COLOR_RESET << std::endl << std::endl;

	std::cout << "// In the animal list, insert 5 bananas at the begining" << std::endl;
	animals.insert(animals.begin(), 5, "🍌");
	std::cout << "animals.insert(animals.begin(), 5, \"🍌\")" << std::endl;
	std::cout << "animal list after insert : ";
	std::cout << std::endl << "animals = { ";
	for (std::list<std::string>::iterator it = animals.begin(); it != animals.end(); it++)
		std::cout  << COLOR_CYAN << std::boolalpha << COLOR_RESET << *it << " ";
	std::cout << "}" << std::endl << std::endl;

	std::cout << "// In the animal list, insert 5 bananas at the end" << std::endl;
	animals.insert(animals.end(), 5, "🍌");
	std::cout << "animals.insert(animals.end(), 5, \"🍌\")" << std::endl;
	std::cout << "animal list after insert : ";
	std::cout << std::endl << "animals = { ";
	for (std::list<std::string>::iterator it = animals.begin(); it != animals.end(); it++)
		std::cout  << COLOR_CYAN << std::boolalpha << COLOR_RESET << *it << " ";
	std::cout << "}" << std::endl << std::endl;
	next_test();
}

void	test_modifiers_one(void)
{
	std::cout << ft_list << std::endl;
	std::cout << COLOR_CYAN <<  "Test Modifiers part one" << std::endl << std::endl;
	std::cout << COLOR_YELLOW <<"clear :" << COLOR_RESET << std::endl << std::endl;

	ft::list<std::string> lst;

	lst.push_back("mr");
	lst.push_back("robot");
	lst.push_back("is");
	lst.push_back("a");
	lst.push_back("very");
	lst.push_back("good");
	lst.push_back("series.");

	std::cout << "For a string list : ";
	std::cout << std::endl << "lst = { ";
	for (ft::list<std::string>::iterator it = lst.begin(); it != lst.end(); it++)
		std::cout  << COLOR_CYAN << std::boolalpha << COLOR_RESET << *it << " ";
	std::cout << "}" << std::endl << std::endl;
	std::cout << "lst.size() = " << lst.size() << std::endl << std::endl;

	lst.clear();
	std::cout << "lst.clear();"<< std::endl << std::endl;

	std::cout << "For a string list : ";
	std::cout << std::endl << "lst = { ";
	for (ft::list<std::string>::iterator it = lst.begin(); it != lst.end(); it++)
		std::cout  << COLOR_CYAN << std::boolalpha << COLOR_RESET << *it << " ";
	std::cout << "}" << std::endl << std::endl;
	std::cout << "lst.size() = " << lst.size() << std::endl << std::endl;

	lst.clear();
	std::cout << "lst.clear();"<< std::endl << std::endl;

	std::cout << "For a string list : ";
	std::cout << std::endl << "lst = { ";
	for (ft::list<std::string>::iterator it = lst.begin(); it != lst.end(); it++)
		std::cout  << COLOR_CYAN << std::boolalpha << COLOR_RESET << *it << " ";
	std::cout << "}" << std::endl << std::endl;
	std::cout << "lst.size() = " << lst.size() << std::endl << std::endl;

	std::cout << COLOR_YELLOW <<"assign :" << COLOR_RESET << std::endl << std::endl;

	ft::list<std::string> lst_empty;
	ft::list<std::string> lst_watch_brands;

	lst_watch_brands.push_back("rolex");
	lst_watch_brands.push_back("lip");
	lst_watch_brands.push_back("montblanc");
	lst_watch_brands.push_back("cartier");
	lst_watch_brands.push_back("TAG_Heuer");

	std::cout << "For an empty string list : ";
	std::cout << std::endl << "lst_empty = { ";
	for (ft::list<std::string>::iterator it = lst_empty.begin(); it != lst_empty.end(); it++)
		std::cout  << COLOR_CYAN << std::boolalpha << COLOR_RESET << *it << " ";
	std::cout << "}" << std::endl << std::endl;
	std::cout << "With an string list lst_watch_brands : ";
	std::cout << std::endl << "lst = { ";
	for (ft::list<std::string>::iterator it = lst_watch_brands.begin(); it != lst_watch_brands.end(); it++)
		std::cout  << COLOR_CYAN << std::boolalpha << COLOR_RESET << *it << " ";
	std::cout << "}" << std::endl << std::endl;

	lst_empty.assign(10, "empty");
	std::cout << "lst_empty.assign(10, \"empty\");" << std::endl;
	std::cout << std::endl << "lst_empty = { ";
	for (ft::list<std::string>::iterator it = lst_empty.begin(); it != lst_empty.end(); it++)
		std::cout  << COLOR_CYAN << std::boolalpha << COLOR_RESET << *it << " ";
	std::cout << "}" << std::endl << std::endl;

	lst_empty.assign(lst_watch_brands.begin(), lst_watch_brands.end());
	std::cout << "lst_empty.assign(lst_watch_brands.begin(), lst_watch_brands.end());" << std::endl;

	std::cout << std::endl << "lst_empty = { ";
	for (ft::list<std::string>::iterator it = lst_empty.begin(); it != lst_empty.end(); it++)
		std::cout  << COLOR_CYAN << std::boolalpha << COLOR_RESET << *it << " ";
	std::cout << "}" << std::endl << std::endl;

	std::cout << COLOR_YELLOW <<"insert | single element :" << COLOR_RESET << std::endl << std::endl;

	ft::list<std::string> red_apples(10, "🍎");

	std::cout << "For red apples list : ";
	std::cout << std::endl << "red_apples = { ";
	for (ft::list<std::string>::iterator it = red_apples.begin(); it != red_apples.end(); it++)
		std::cout  << COLOR_CYAN << std::boolalpha << COLOR_RESET << *it << " ";
	std::cout << "}" << std::endl << std::endl;

	std::cout << "// Inserting green apple at the begining of the list" << std::endl;
	std::cout << "red_apples.insert(red_apples.begin(), \"🍏\")" << std::endl;
	red_apples.insert(red_apples.begin(), "🍏");

	std::cout << "red apples list : ";
	std::cout << std::endl << "red_apples = { ";
	for (ft::list<std::string>::iterator it = red_apples.begin(); it != red_apples.end(); it++)
		std::cout  << COLOR_CYAN << std::boolalpha << COLOR_RESET << *it << " ";
	std::cout << "}" << std::endl << std::endl;

	std::cout << "// Inserting green apple at the end of the list" << std::endl;
	std::cout << "red_apples.insert(red_apples.end(), \"🍏\")" << std::endl;
	red_apples.insert(red_apples.end(), "🍏");

	std::cout << "red apples list : ";
	std::cout << std::endl << "red_apples = { ";
	for (ft::list<std::string>::iterator it = red_apples.begin(); it != red_apples.end(); it++)
		std::cout  << COLOR_CYAN << std::boolalpha << COLOR_RESET << *it << " ";
	std::cout << "}" << std::endl << std::endl;


	ft::list<std::string>::iterator	it_middle = red_apples.begin();

	it_middle++;
	it_middle++;
	it_middle++;
	it_middle++;
	it_middle++;
	it_middle++;

	std::cout << "// Inserting green apple at the middle of the list" << std::endl;
	std::cout << "red_apples.insert(it_middle, \"🍏\")" << std::endl;
	red_apples.insert(it_middle, "🍏");

	std::cout << "red apples list : ";
	std::cout << std::endl << "red_apples = { ";
	for (ft::list<std::string>::iterator it = red_apples.begin(); it != red_apples.end(); it++)
		std::cout  << COLOR_CYAN << std::boolalpha << COLOR_RESET << *it << " ";
	std::cout << "}" << std::endl << std::endl;


	std::cout << COLOR_YELLOW <<"insert | range :" << COLOR_RESET << std::endl << std::endl;

	ft::list<std::string> fruits;

	fruits.push_back("🍍");
	fruits.push_back("🍉");
	fruits.push_back("🍐");
	fruits.push_back("🍒");
	fruits.push_back("🍓");

	ft::list<std::string> animals;

	animals.push_back("🐈");
	animals.push_back("🐊");
	animals.push_back("🐇");
	animals.push_back("🦖");
	animals.push_back("🐬");

	ft::list<std::string>::iterator animalsIteMid = animals.begin();
	animalsIteMid++;
	animalsIteMid++;

	std::cout << "For fruit in string list : ";
	std::cout << std::endl << "fruits = { ";
	for (ft::list<std::string>::iterator it = fruits.begin(); it != fruits.end(); it++)
		std::cout  << COLOR_CYAN << std::boolalpha << COLOR_RESET << *it << " ";
	std::cout << "}" << std::endl << std::endl;
	std::cout << "For animal in string list : ";
	std::cout << std::endl << "animals = { ";
	for (ft::list<std::string>::iterator it = animals.begin(); it != animals.end(); it++)
		std::cout  << COLOR_CYAN << std::boolalpha << COLOR_RESET << *it << " ";
	std::cout << "}" << std::endl << std::endl;

	std::cout << "// Insert range of fruits in animals list" << std::endl;
	animals.insert(animalsIteMid, fruits.begin(), fruits.end());

	std::cout << "animal list after insert : ";
	std::cout << std::endl << "animals = { ";
	for (ft::list<std::string>::iterator it = animals.begin(); it != animals.end(); it++)
		std::cout  << COLOR_CYAN << std::boolalpha << COLOR_RESET << *it << " ";
	std::cout << "}" << std::endl << std::endl;

	std::cout << COLOR_YELLOW <<"insert multiple same element :" << COLOR_RESET << std::endl << std::endl;

	std::cout << "// In the animal list, insert 5 bananas at the begining" << std::endl;
	animals.insert(animals.begin(), 5, "🍌");
	std::cout << "animals.insert(animals.begin(), 5, \"🍌\")" << std::endl;
	std::cout << "animal list after insert : ";
	std::cout << std::endl << "animals = { ";
	for (ft::list<std::string>::iterator it = animals.begin(); it != animals.end(); it++)
		std::cout  << COLOR_CYAN << std::boolalpha << COLOR_RESET << *it << " ";
	std::cout << "}" << std::endl << std::endl;

	std::cout << "// In the animal list, insert 5 bananas at the end" << std::endl;
	animals.insert(animals.end(), 5, "🍌");
	std::cout << "animals.insert(animals.end(), 5, \"🍌\")" << std::endl;
	std::cout << "animal list after insert : ";
	std::cout << std::endl << "animals = { ";
	for (ft::list<std::string>::iterator it = animals.begin(); it != animals.end(); it++)
		std::cout  << COLOR_CYAN << std::boolalpha << COLOR_RESET << *it << " ";
	std::cout << "}" << std::endl << std::endl;

	test_modifiers_one_std();

}