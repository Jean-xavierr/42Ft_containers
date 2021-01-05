/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Vector.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Jeanxavier <Jeanxavier@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/04 12:05:06 by jereligi          #+#    #+#             */
/*   Updated: 2021/01/05 16:26:58 by Jeanxavier       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VECTOR_HPP
#define VECTOR_HPP

#include <memory>

namespace ft
{
	template <class T, class Allocator = std::allocator<T> >
	class	vector
	{
	public:
		typedef T											value_type;
		typedef Allocator									allocator_type;
		typedef typename allocator_type::reference			reference;
		typedef typename allocator_type::const_reference	const_reference;
		typedef implementation-defined						iterator;
		typedef implementation-defined						const_iterator;
		typedef typename allocator_type::size_type			size_type;
		typedef typename allocator_type::difference_type	difference_type;
		typedef typename allocator_type::pointer			pointer;
		typedef typename allocator_type::const_pointer		const_pointer;
		typedef std::reverse_iterator<iterator>				reverse_iterator;
		typedef std::reverse_iterator<const_iterator>		const_reverse_iterator;

		/*******************************************
		*****  Member Functions (Coplien Form) *****
		*******************************************/

		// default
		explicit		vector (const allocator_type& alloc = allocator_type())
		{
			_array = NULL;
			_size = 0;
			_capacity = 0;
			_alloc = alloc;
		}
		
		// fill
		explicit		vector (size_type n, const value_type& val = value_type(), const allocator_type& alloc = allocator_type())
		{
			_array = NULL;
			_size = 0;
			_capacity = 0;
			_alloc = alloc;

		}
		
		// range
		template <class InputIterator>
		vector (InputIterator first, InputIterator last, const allocator_type& alloc = allocator_type())
		{
			_array = NULL;
			_size = 0;
			_capacity = 0;
			_alloc = alloc;
		}

		// copy
		vector (const vector& x);

		~vector();

		vector& operator= (const vector& x);

		/*******************************************
		*****             Iterators            *****
		*******************************************/

		// iterator begin();
		// const_iterator begin() const;

		// iterator end();
		// const_iterator end() const;

		// reverse_iterator rbegin();
		// const_reverse_iterator rbegin() const;

		// reverse_iterator rend();
		// const_reverse_iterator rend() const;

		/*******************************************
		*****            Capacity              *****
		*******************************************/

		// size_type size() const;

		// size_type max_size() const;

		// void resize (size_type n, value_type val = value_type());

		// size_type capacity() const;

		// bool empty() const;
		
		// void reserve (size_type n);

		/*******************************************
		*****         Element access           *****
		*******************************************/

		// reference operator[] (size_type n);
		// const_reference operator[] (size_type n) const;
		
		// reference at (size_type n);
		// const_reference at (size_type n) const;

		// reference front();
		// const_reference front() const;

		//reference back();
		//const_reference back() const;

		/*******************************************
		*****            Modifiers             *****
		*******************************************/

		template <class InputIterator>
  		void assign (InputIterator first, InputIterator last);
		void assign (size_type n, const value_type& val);

		// void push_back (const value_type& val);

		// void pop_back();

		//iterator insert (iterator position, const value_type& val);

    	//void insert (iterator position, size_type n, const value_type& val);

		// template <class InputIterator>
		// void insert (iterator position, InputIterator first, InputIterator last);

		// iterator erase (iterator position);
		// iterator erase (iterator first, iterator last);

		// void swap (vector& x);

		// void clear();

	private:
		T				*_array;
		size_type		_size;
		size_type		_capacity;
		allocator_type	_alloc;	

	};
}

#endif