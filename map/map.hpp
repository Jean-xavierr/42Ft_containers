/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jereligi <jereligi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/04 11:46:10 by jereligi          #+#    #+#             */
/*   Updated: 2021/03/19 14:27:28 by jereligi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MAP_HPP
#define MAP_HPP

#include "../utils.hpp"

template <typename T>
struct Node
{
	Node	*prev;
	Node	*next;
	T		val;
};

 
// typedef pair<const Key, T> value_type;

namespace ft
{
	// template < class Key,                                     // map::key_type
    //        class T,                                       // map::mapped_type
    //        class Compare = less<Key>,                     // map::key_compare
    //        class Alloc = allocator<pair<const Key,T> >    // map::allocator_type
	class	map
	{
	public:

		/*******************************************
		*****  Member Functions (Coplien Form) *****
		*******************************************/

		// // empty	
		// explicit map (const key_compare& comp = key_compare(), const allocator_type& alloc = allocator_type());
		
		// // range	
		// template <class InputIterator>
		// map (InputIterator first, InputIterator last, const key_compare& comp = key_compare(),
       	// const allocator_type& alloc = allocator_type());

		// copy / assign
		// map& operator= (const map& x);
		
		// // copy	
		// map (const map& x);

		// virtual		~map();

		/*******************************************
		*****             Iterators            *****
		*******************************************/

		//iterator begin();
		//const_iterator begin() const;
		
		//iterator end();
		//const_iterator end() const;

      	//reverse_iterator rbegin();
		//const_reverse_iterator rbegin() const;

		// reverse_iterator rend();
		// const_reverse_iterator rend() const;

		/*******************************************
		*****            Capacity              *****
		*******************************************/

		// bool empty() const;
		// size_type size() const;
		// size_type max_size() const;

		/*******************************************
		*****         Element access           *****
		*******************************************/

		// mapped_type& operator[] (const key_type& k);

		/*******************************************
		*****            Modifiers             *****
		*******************************************/

		// //single element	
		// pair<iterator,bool> insert (const value_type& val);
		
		// // with hint	
		// iterator insert (iterator position, const value_type& val);

		// //range	
		// template <class InputIterator>
  		// void insert (InputIterator first, InputIterator last);

	
		// void erase (iterator position);

		// size_type erase (const key_type& k);

		// void erase (iterator first, iterator last);

		// void swap (map& x);

		// void clear();

		/*******************************************
		*****           Observers              *****
		*******************************************/

		// key_compare key_comp() const;

		// value_compare value_comp() const;
		
		/*******************************************
		*****        Map operations            *****
		*******************************************/

		//iterator find (const key_type& k);
		
		//const_iterator find (const key_type& k) const;

		// size_type count (const key_type& k) const;

		// iterator lower_bound (const key_type& k);

		// const_iterator lower_bound (const key_type& k) const;

		// iterator upper_bound (const key_type& k);
		
		// const_iterator upper_bound (const key_type& k) const;

		// pair<const_iterator,const_iterator> equal_range (const key_type& k) const;
		
		// pair<iterator,iterator>             equal_range (const key_type& k);

}


#endif
