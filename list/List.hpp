/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   List.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jereligi <jereligi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/04 11:46:10 by jereligi          #+#    #+#             */
/*   Updated: 2021/02/25 14:37:55 by jereligi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIST_HPP
#define LIST_HPP

#include <iostream>

namespace ft
{
	template <typename T>
	class	list
	{
	public:

		/*******************************************
		*****             Iterators            *****
		*******************************************/

		iterator begin();
		const_iterator begin() const;
	    
		iterator end();
		const_iterator end() const;

		reverse_iterator rend();
		const_reverse_iterator rend() const;

		/*******************************************
		*****            Capacity              *****
		*******************************************/

		bool empty() const;
		size_type size() const;
		size_type max_size() const;
		void resize (size_type n, value_type val = value_type());

		/*******************************************
		*****         Element access           *****
		*******************************************/

		reference front();
		const_reference front() const;
		reference back();
		const_reference back() const;

		/*******************************************
		*****            Modifiers             *****
		*******************************************/

		template <class InputIterator>
		void assign (InputIterator first, InputIterator last);
		void assign (size_type n, const value_type& val);

		iterator insert (iterator position, const value_type& val);	
    	void insert (iterator position, size_type n, const value_type& val);	
		template <class InputIterator>
    	void insert (iterator position, InputIterator first, InputIterator last);

		iterator erase (iterator position);
		iterator erase (iterator first, iterator last);

		void push_back (const value_type& val);
		void pop_back();
		void push_front (const value_type& val);
		void clear();
		void swap (list& x);
		
		/*******************************************
		*****       List operations            *****
		*******************************************/

		void splice (iterator position, list& x);	
		void splice (iterator position, list& x, iterator i);	
		void splice (iterator position, list& x, iterator first, iterator last);
		
		void remove (const value_type& val);
		
		template <class Predicate>
  		void remove_if (Predicate pred);

		void unique();
		template <class BinaryPredicate>
  		void unique (BinaryPredicate binary_pred);

		void merge (list& x);
		template <class Compare>
		void merge (list& x, Compare comp);

		void sort();
		template <class Compare>
		void sort (Compare comp);

		void reverse();
		
	private:

		/*Data Here*/;

	};
}

#endif
