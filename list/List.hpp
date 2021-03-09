/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   List.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jereligi <jereligi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/04 11:46:10 by jereligi          #+#    #+#             */
/*   Updated: 2021/03/09 15:48:32 by jereligi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIST_HPP
#define LIST_HPP

#include "../utils.hpp"
#include <iostream>
#include <list>

template <typename T>
struct Node
{
	Node	*prev;
	Node	*next;
	T		val;
};

namespace ft
{
	template <class T, class Allocator = std::allocator<T> >
	class	list
	{
	public:

		typedef T											value_type;
		typedef Allocator									allocator_type;
		typedef typename std::size_t						size_type;
		typedef typename std::ptrdiff_t						difference_type;
		typedef typename allocator_type::pointer			pointer;
		typedef typename allocator_type::const_pointer		const_pointer;
		typedef typename allocator_type::reference			reference;
		typedef typename allocator_type::const_reference	const_reference;

		// Node<T>			*get_prev() { return (_node->prev); };
		// Node<T>			*get_next() { return (_node->next); };
		// T				get_val(Node<T> *) { return (_node->val); };

		void				print_list()
		{
			Node<T>		*tmp = _node;

			for (size_type i = 0; i < _size; i++)
			{
				tmp = tmp->next;
				std::cout << tmp->val << std::endl;
			}
		}

		/*******************************************
		*****  Member Functions (Coplien Form) *****
		*******************************************/


		//default
		explicit list (const allocator_type& alloc = allocator_type())
		{
			_node = new Node<T>;
			_node->next = _node;
			_node->prev = _node;
			_node->val = 0;
			_size = 0;
			_alloc = alloc;
		}
		
		//fill	
		// explicit list (size_type n, const value_type& val = value_type(),
		//                 const allocator_type& alloc = allocator_type())
		// {
		// 	_node = new Node<T>
		// 	_size = n;
		// 	_alloc = alloc;
		// }
		
		//range	
		// template <class InputIterator>
		// list (InputIterator first, InputIterator last,
		//          const allocator_type& alloc = allocator_type());
		
		//copy	
		// list (const list& x);

		/*******************************************
		*****             Iterators            *****
		*******************************************/

		// iterator begin();
		// const_iterator begin() const;
	    
		// iterator end();
		// const_iterator end() const;

		// reverse_iterator rend();
		// const_reverse_iterator rend() const;

		/*******************************************
		*****            Capacity              *****
		*******************************************/

		bool empty() const
		{
			if (_size > 0)
				return (0);
			return (1);
		}
		
		size_type size() const {
			return (_size);
		}

		size_type max_size() const {
			return (std::numeric_limits<difference_type>::max() / (sizeof(Node<T>) / 2 ?: 1));
		}
		// void resize (size_type n, value_type val = value_type());

		/*******************************************
		*****         Element access           *****
		*******************************************/

		reference front() {
			return (_node->next->val);
		}
		const_reference front() const {
			return (front());
		}

		reference back() {
			return (_node->prev->val);
		}
		const_reference back() const {
			return (back());
		}

		/*******************************************
		*****            Modifiers             *****
		*******************************************/

		// template <class InputIterator>
		// void assign (InputIterator first, InputIterator last);
		// void assign (size_type n, const value_type& val);

		// iterator insert (iterator position, const value_type& val);	
    	// void insert (iterator position, size_type n, const value_type& val);	
		// template <class InputIterator>
    	// void insert (iterator position, InputIterator first, InputIterator last);

		// iterator erase (iterator position);
		// iterator erase (iterator first, iterator last);

		void push_back (const value_type& val)
		{
			Node<T>		*new_node = new Node<T>;
		
			new_node->next = _node;
			new_node->prev = _node->prev;
			new_node->val = val;

			_node->prev->next = new_node;
			_node->prev = new_node;
			_size++;
		}

		void pop_back()
		{
			Node<T>		*tmp = _node->prev;
			
			_node->prev->prev->next = _node;
			_node->prev = _node->prev->prev;
			delete tmp;
			_size--;
		}

		void push_front (const value_type& val)
		{
			Node<T>		*new_node = new Node<T>;
		
			new_node->next = _node->next;
			new_node->prev = _node;
			new_node->val = val;

			_node->next = new_node;
			_size++;
		}

		void pop_front()
		{
			Node<T>		*tmp = _node->next;
			
			_node->next = _node->next->next;
			delete tmp;
			_size--;
		}

		void clear()
		{
			while (_size > 0)
				pop_back();
		}
		
		void swap (list& x)
		{
			Node<T>			*tmp = _node;
			size_type		tmp_size = _size;

			_node = x._node;
			x._node = tmp;

			_size = x._size;
			x._size = tmp_size;
		}
		
		/*******************************************
		*****       List operations            *****
		*******************************************/

		// void splice (iterator position, list& x);	
		// void splice (iterator position, list& x, iterator i);	
		// void splice (iterator position, list& x, iterator first, iterator last);
		
		// void remove (const value_type& val);
		
		// template <class Predicate>
  		// void remove_if (Predicate pred);

		// void unique();
		// template <class BinaryPredicate>
  		// void unique (BinaryPredicate binary_pred);

		// void merge (list& x);
		// template <class Compare>
		// void merge (list& x, Compare comp);

		// void sort();
		// template <class Compare>
		// void sort (Compare comp);

		// void reverse();

	private:

		Node<T>			*_node; 
		size_type		_size;
		allocator_type	_alloc;	

	};
}

#endif
