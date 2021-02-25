/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Vector.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jereligi <jereligi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/04 12:05:06 by jereligi          #+#    #+#             */
/*   Updated: 2021/02/25 14:54:31 by jereligi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VECTOR_HPP
#define VECTOR_HPP

#include <memory>
#include <stdexcept>
#include "Iterator.hpp"

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
		// typedef implementation-defined						iterator;
		typedef typename ft::Iterator<T>						iterator;   
		// typedef implementation-defined						const_iterator;
		typedef typename allocator_type::size_type			size_type;
		typedef typename allocator_type::difference_type	difference_type;
		typedef typename allocator_type::pointer			pointer;
		typedef typename allocator_type::const_pointer		const_pointer;
		// typedef std::reverse_iterator<iterator>				reverse_iterator;
		// typedef std::reverse_iterator<const_iterator>		const_reverse_iterator;

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
			assign(n, val);
		}
		
		// range
		// template <class InputIterator>
		// vector (InputIterator first, InputIterator last, const allocator_type& alloc = allocator_type())
		// {
		// 	_array = NULL;
		// 	_size = 0;
		// 	_capacity = 0;
		// 	_alloc = alloc;
		// 	//assign
		// }

		// copy
		// vector (const vector& x);

		~vector() {
			clear();
		}

		// vector& operator= (const vector& x);

		/*******************************************
		*****             Iterators            *****
		*******************************************/

		iterator begin() {
			return (iterator(_array));
		}
		// const_iterator begin() const {
		// 	return (_array[0]);
		// }

		iterator end() {
			return (iterator(_array + (_size - 1)));
		}
		// const_iterator end() const;

		// reverse_iterator rbegin();
		// const_reverse_iterator rbegin() const;

		// reverse_iterator rend();
		// const_reverse_iterator rend() const;

		/*******************************************
		*****            Capacity              *****
		*******************************************/

		size_type size() const {
			return (_size);
		}

		size_type max_size() const {
			return (_alloc.max_size());
		}

		void resize (size_type n, value_type val = value_type())
		{
			if (n < _size)
			{
				for (size_type i = n + 1; i < _size; i++)
					_alloc.destroy(&_array[i]);
			}
			else if (n > _size)
			{
				for (size_type i = _size; i < n; i++)
					push_back(val);
			}
			_size = n;
		}

		size_type capacity() const {
			return (_capacity);
		}

		bool empty() const
		{
			if (_size > 0)
				return (1);
			return (0);
		}
		
		void reserve (size_type n)
		{
			if (n > _capacity)
			{
				T	*tmp;
				tmp = _alloc.allocate(n);
				if (_capacity > 0)
				{
					for (size_type i = 0; i < _size; i++)
					{
						_alloc.construct(&tmp[i], _array[i]);
						_alloc.destroy(&_array[i]);
					}
					_alloc.deallocate(_array, _capacity);
				}
				_array = tmp;
				_capacity = n;
			}
		}

		/*******************************************
		*****         Element access           *****
		*******************************************/

		reference operator[] (size_type n) {
			return (_array[n]);
		}

		const_reference operator[] (size_type n) const {
			return (_array[n]);
		}
		
		reference at (size_type n)
		{
			if (n >= _size)
				throw std::out_of_range("Out of Range error");
			return (_array[n]);
		}

		const_reference at (size_type n) const
		{
			if (n >= _size)
				throw std::out_of_range("Out of Range error");
			return (_array[n]);
		}

		reference front() {
			return (_array[0]);
		}

		const_reference front() const {
			return (_array[0]);
		}

		reference back() {
			return (_array[_size - 1]);
		}
		const_reference back() const {
			return (_array[_size - 1]);
		}

		/*******************************************
		*****            Modifiers             *****
		*******************************************/

		// template <class InputIterator>
  		// void assign (InputIterator first, InputIterator last)
		// {
		// 	if (empty())
		// 		clear();
		// 	while (first < last)
		// 	{
		// 		push_back(*first);
		// 		first++;
		// 	}
		// }

		void assign (size_type n, const value_type& val)
		{
			if (empty())
				clear();
			for (size_type i = 0; i < n; i++)
				push_back(val);
		}

		void push_back (const value_type& val)
		{
			if (_size + 1 >= _capacity)
			{
				if (_size == 0)
					reserve(1);
				else
					reserve(_capacity * 2);
			}
			_array[_size] = val;
			_size++;
		}

		void pop_back() 
		{
			_alloc.destroy(&_array[_size]);
			_size -= 1;
		}

		// iterator insert (iterator position, const value_type& val)
		// {
				
		// }

    	//void insert (iterator position, size_type n, const value_type& val);

		// template <class InputIterator>
		// void insert (iterator position, InputIterator first, InputIterator last);

		// iterator erase (iterator position);
		// iterator erase (iterator first, iterator last);

		// void swap (vector& x);

		void clear()
		{
			if (_size > 0)
			{
				for (size_type i = 0; i <= _size; i++)
					_alloc.destroy(&_array[i]);
				_alloc.deallocate(_array, _capacity);
				// _array = NULL;
				_size = 0;
				_capacity = 0;
			}
		}

	private:
		T				*_array;
		size_type		_size;
		size_type		_capacity;
		allocator_type	_alloc;	

	};
}

#endif