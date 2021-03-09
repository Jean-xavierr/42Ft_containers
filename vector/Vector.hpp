/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Vector.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jereligi <jereligi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/04 12:05:06 by jereligi          #+#    #+#             */
/*   Updated: 2021/03/08 14:11:30 by jereligi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VECTOR_HPP
#define VECTOR_HPP

#include "./iterator/iterator.hpp"
#include "./iterator/const_iterator.hpp"
#include "./iterator/reverse_iterator.hpp"
#include "./iterator/const_reverse_iterator.hpp"
#include "../utils.hpp"

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
		typedef typename ft::Iterator<T>					iterator;
		typedef typename ft::const_iterator<T>				const_iterator;
		typedef typename allocator_type::size_type			size_type;
		typedef typename allocator_type::difference_type	difference_type;
		typedef typename allocator_type::pointer			pointer;
		typedef typename allocator_type::const_pointer		const_pointer;
		typedef typename ft::reverse_iterator<T>			reverse_iterator;
		typedef typename ft::const_reverse_iterator<T>		const_reverse_iterator;

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
			reserve(n);
			for (size_type i = 0; i < n; i++)
				push_back(val);
		}
		
		// range
		template <class InputIterator>
		vector (InputIterator first, InputIterator last, const allocator_type& alloc = allocator_type(),
		typename ft::enable_if<InputIterator::is_iterator, InputIterator>::type = NULL)
		{
			_array = NULL;
			_size = 0;
			_capacity = 0;
			_alloc = alloc;
			while (first != last)
			{
				push_back(*first);
				first++;
			}
		}

		// copy
		vector (vector& src)
		{
			_array = NULL;
			_size = 0;
			_capacity = 0;
			_alloc = allocator_type();
			*this = src;
		}

		~vector() {
			clear();
		}

		vector& operator=(vector& src)
		{
			clear();
			for (iterator it = src.begin(); it != src.end(); it++)
				push_back(*it);
			return (*this);
		}

		/*******************************************
		*****             Iterators            *****
		*******************************************/

		iterator begin() {
			return (iterator(_array));
		}
		const_iterator begin() const {
			return (const_iterator(_array));
		}

		iterator end() {
			return (iterator(_array + _size));
		}
		const_iterator end() const {
			return (const_iterator(_array + _size));
		}

		reverse_iterator rbegin()
		{
			return (reverse_iterator((end() - 1)));
		}
		const_reverse_iterator rbegin() const
		{
			return (const_reverse_iterator((end() - 1)));
		}

		reverse_iterator rend()
		{
			return (reverse_iterator((begin() - 1)));
		}
		const_reverse_iterator rend() const
		{
			return (const_reverse_iterator(begin() - 1));
		}

		/*******************************************
		*****            Capacity              *****
		*******************************************/

		size_type size() const {
			return (_size);
		}

		size_type max_size() const {
			return (_alloc.max_size());
		}

		void resize(size_type n, value_type val = value_type())
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
				return (0);
			return (1);
		}
		
		void reserve(size_type n)
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

		reference operator[](size_type n) {
			return (_array[n]);
		}

		const_reference operator[](size_type n) const {
			return (_array[n]);
		}
		
		reference at(size_type n)
		{
			if (n >= _size)
				throw std::out_of_range("Out of Range error");
			return (_array[n]);
		}

		const_reference at(size_type n) const
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

		template <class InputIterator>
  		void assign (InputIterator first, InputIterator last,
		typename ft::enable_if<InputIterator::is_iterator, InputIterator>::type = NULL)
		{
			if (empty() == 0)
				clear();
			while (first < last)
			{
				push_back(*first);
				first++;
			}
		}

		void assign(size_type n, const value_type& val)
		{
			if (empty() == 0)
				clear();
			for (size_type i = 0; i < n; i++)
				push_back(val);
		}

		void push_back(const value_type& val)
		{
			if (_size >= _capacity)
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

		iterator insert(iterator position, const value_type& val)
		{
			if (_size > + 1 >= _capacity)
			{
				if (_size == 0)
					reserve(1);
				else
					reserve(_capacity * 2);
			}
			ft::vector<T>	tmp(position, end());
			for (size_type i = 0; i < tmp.size(); i++)
				pop_back();
			push_back(val);
			iterator it = tmp.begin();
			for (size_type i = 0; i < tmp.size(); i++, it++)
				push_back(*it);
			return (position);
		}

    	void insert(iterator position, size_type n, const value_type& val)
		{
			if (_size > + 1 >= _capacity)
			{
				if (_size == 0)
					reserve(1);
				else
					reserve(_capacity * 2);
			}
			ft::vector<T>	tmp(position, end());
			for (size_type i = 0; i < tmp.size(); i++)
				pop_back();
			for (size_type i = 0; i < n; i++)
				push_back(val);
			iterator it = tmp.begin();
			for (size_type i = 0; i < tmp.size(); i++, it++)
				push_back(*it);
		}

		template <class InputIterator>
		void insert(iterator position, InputIterator first, InputIterator last,
		typename ft::enable_if<InputIterator::is_iterator, InputIterator>::type = NULL)
		{
			difference_type		int_pos = position - this->begin();
			size_type count = 0;
			while (first != last)
			{
				first++;
				count++;
			}
			first -= count;
			if (_capacity - _size <= count)
			{
				if (_size == 0)
					reserve(1);
				else
					reserve(_capacity * 2);
			}
			ft::vector<T>	tmp(begin() + int_pos, end());
			for (size_type i = 0; i < tmp.size(); i++)
				pop_back();
			while (first != last)
			{
				push_back(*first);
				first++;
			}
			iterator it = tmp.begin();
			for (size_type i = 0; i < tmp.size(); i++, it++)
				push_back(*it);
		}

		iterator erase(iterator position)
		{
			ft::vector<T>	tmp(position + 1, end());

			for (size_type i = 0; i < tmp._size; i++)
				pop_back();
			pop_back();
			for (iterator it = tmp.begin(); it != tmp.end(); it++)
				push_back(*it);
			return (position);
		}
		
		iterator erase(iterator first, iterator last)
		{
			iterator	tmp = first;
			while (tmp != last)
			{
				erase(first);
				tmp++;
			}
			return (first);
		}

		void swap(vector& src)
		{
			std::swap(_array, src._array);
			std::swap(_size, src._size);
			std::swap(_capacity, src._capacity);
		}

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