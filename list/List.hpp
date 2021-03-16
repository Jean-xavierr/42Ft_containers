/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   List.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jereligi <jereligi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/04 11:46:10 by jereligi          #+#    #+#             */
/*   Updated: 2021/03/16 16:42:32 by jereligi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIST_HPP
#define LIST_HPP

#include "../utils.hpp"
#include "./iterator/iterator.hpp"
#include "./iterator/const_iterator.hpp"
#include "./iterator/reverse_iterator.hpp"
#include "./iterator/const_reverse_iterator.hpp"

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

		typedef T													value_type;
		typedef Allocator											allocator_type;
		typedef typename std::size_t								size_type;
		typedef typename std::ptrdiff_t								difference_type;
		typedef typename allocator_type::pointer					pointer;
		typedef typename allocator_type::const_pointer				const_pointer;
		typedef typename allocator_type::reference					reference;
		typedef typename allocator_type::const_reference			const_reference;
		typedef Node<T>												node_type;
		typedef typename ft::Iterator<T, node_type>					iterator;
		typedef typename ft::const_iterator<T, node_type>			const_iterator;
		typedef typename ft::reverse_iterator<T, node_type>			reverse_iterator;
		typedef typename ft::const_reverse_iterator<T, node_type>	const_reverse_iterator;

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
		explicit list (size_type n, const value_type& val = value_type(),
		                const allocator_type& alloc = allocator_type())
		{
			_node = new Node<T>;
			_node->next = _node;
			_node->prev = _node;
			_node->val = 0;
			_size = 0;
			_alloc = alloc;
			for (size_type i = 0; i < n; i++)
				push_back(val);
		}
		
		//range	
		template <class InputIterator>
		list (InputIterator first, InputIterator last, const allocator_type& alloc = allocator_type(),
		typename ft::enable_if<InputIterator::is_iterator, InputIterator>::type = NULL) 
		{	
			_node = new Node<T>;
			_node->next = _node;
			_node->prev = _node;
			_node->val = 0;
			_size = 0;
			_alloc = alloc;
			while (first != last)
			{
				push_back(*first);
				first++;
			}
		}
		
		//copy	
		list (list& x)
		{	
			_node = new Node<T>;
			_node->next = _node;
			_node->prev = _node;
			_node->val = 0;
			_size = 0;
			_alloc = allocator_type();

			*this = x;
		}

		//destructor
		~list(){
			this->clear();
			delete _node;
		}

		list& operator=(list& x) 
		{
			clear();
			for (iterator it = x.begin(); it != x.end(); it++)
				push_back(*it);
			return (*this);
		}

		/*******************************************
		*****             Iterators            *****
		*******************************************/

		iterator begin() {
			return (iterator(_node->next));
		}
		const_iterator begin() const {
			return (const_iterator(_node->next));
		}
	    
		iterator end() {
			return (iterator(_node));
		}
		const_iterator end() const
		{
			return (const_iterator(_node));
		}

		reverse_iterator rbegin() {
			return (reverse_iterator(_node));
		}
		const_reverse_iterator rbegin() const {
			return (const_reverse_iterator(_node));
		}

		reverse_iterator rend() {
			return (reverse_iterator(_node->prev));
		}
		const_reverse_iterator rend() const {
			return (reverse_const_iterator(_node->prev));
		}

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

		void resize (size_type n, value_type val = value_type())
		{
			if (n < _size)
			{
				while (n < _size)
					pop_back();
			}
			else 
			{
				for (size_type i = _size; i < n; i++)
					push_back(val);
			}
		}

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

		template <class InputIterator>
		void assign (InputIterator first, InputIterator last,
		typename ft::enable_if<InputIterator::is_iterator, InputIterator>::type = NULL)
		{
			if (empty() == 0)
				clear();
			while (first != last)
			{
				push_back(*first);
				first++;
			}
		}

		void assign (size_type n, const value_type& val) 
		{
			if (empty() == 0)
				clear();
			for (size_type i = 0; i < n; i++)
				push_back(val);

		}

		iterator insert (iterator position, const value_type& val)
		{
			Node<T>		*new_elem = new Node<T>;
			Node<T>		*tmp = position.operator->();

			new_elem->val = val;
			new_elem->next = tmp->prev->next;
			new_elem->prev = tmp->prev;

			tmp->prev->next = new_elem;
			tmp->prev = new_elem;

			_size++;
			return (--position);
		}	
    	void insert(iterator position, size_type n, const value_type& val)
		{
			for (size_type i = 0; i < n; i++)
				insert(position, val);
		}	
		template <class InputIterator>
    	void insert (iterator position, InputIterator first, InputIterator last,
		typename ft::enable_if<InputIterator::is_iterator, InputIterator>::type = NULL)
		{			
			while (first != last)
			{
				insert(position, *first);
				first++;
			}
		}

		iterator erase (iterator position)
		{
			Node<T>		*tmp = position.operator->();

			tmp->prev->next = tmp->next;
			tmp->next->prev = tmp->prev;

			delete tmp;
			_size--;

			return (position);
		}

		iterator erase (iterator first, iterator last)
		{
			while (first != last)
				erase(first++);
			return (first);
		}

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

			_node->next->prev = new_node;
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

		void splice (iterator position, list& x)
		{
			splice(position, x, x.begin(), x.end());
		}

		void splice(iterator position, list& x, iterator i)
		{
			Node<T>		*node = i.operator->();
			Node<T>		*dest = position.operator->();

			// delete node from x
			node->next->prev = node->prev;
			node->prev->next = node->next;

			// init node
			node->next = dest;
			node->prev = dest->prev;

			// add node
			dest->prev->next = node;
			dest->prev = node;

			x._size--;
			_size++;
		}

		void	splice(iterator position, list& x, iterator first, iterator last) 
		{
			while (first != last)
				splice(position, x, first++);
		}
		
		void remove (const value_type& val)
		{	
			iterator tmp;

			for (iterator it = begin(); it != end(); it++)
			{
				if (*it == val)
				{
					tmp = ++it;
					erase(--it);
					it = --tmp;
				}
			}
		}
		
		template <class Predicate>
  		void remove_if (Predicate pred)
		{
			iterator tmp;

			for (iterator it = begin(); it != end(); it++)
			{
				if (pred(*it))
				{
					tmp = ++it;
					erase(--it);
					it = --tmp;
				}
			}
		}

		void unique()
		{
			iterator	elem = begin();
			iterator	next = ++begin();

			while (next != end())
			{
				if (*elem == *next)
				{
					erase(elem);
				}
				elem = next;
				++next;
			}
		}

		template <class BinaryPredicate>
  		void unique (BinaryPredicate binary_pred)
		{
			iterator	elem = begin();
			iterator	next = ++begin();

			while (next != end())
			{
				if (binary_pred(*next, *elem) == 1)
				{
					erase(next);
					elem = begin();
					next = ++begin();
				}
				else
				{
					elem = next;
					++next;
				}
			}
		}

		void merge (list& x) 
		{
			merge(x, _comp);
		}
		template <class Compare>
		void merge (list& x, Compare comp)
		{
			iterator 	it_x = x.begin();
			iterator 	it_this = begin();

			while (it_x != x.end() && it_this != end())
			{
				if (comp(*it_x, *it_this))
					splice(it_this, x, it_x++);
				else
					it_this++;
			}
			while (it_x != x.end())
				splice(end(), x, it_x++);
		}

		void sort()
		{
			sort(_comp);
		}

		template <class Compare>
		void sort(Compare comp)
		{
			iterator	elem = begin();
			iterator	next = ++begin();

			while (next != end())
			{
				if (*elem != *next && comp(*elem, *next) == 0)
				{
					splice(elem, *this, next);
					elem = begin();
					next = ++begin();
				}
				else
				{
					elem = next;
					next++;
				}
			}
		}

		void reverse()
		{
			Node<T>		*elem;
			Node<T>		*tmp;
			iterator	it = begin();

			while (it != --end())
			{
				std::cout << *it << std::endl;
				elem = it.operator->();
				tmp = elem->prev;
				elem->prev = elem->next;
				elem->next = tmp;
				it++;
			}
		}

	private:

		Node<T>			*_node; 
		size_type		_size;
		allocator_type	_alloc;	

		static bool	_comp(T &x, T &y) { 
			return (x < y); 
		}
	};

	template <class T, class Alloc>
	bool operator== (const list<T,Alloc>& lhs, const list<T,Alloc>& rhs)
	{
		typename ft::list<T>::const_iterator		it_r = rhs.begin();
		typename ft::list<T>::const_iterator		it_l = lhs.begin();

		if (lhs.size() != rhs.size())
			return (false);
		while (it_l != lhs.end() && it_r != rhs.end() && *it_l == *it_r)
		{
			it_l++;
			it_r++;
		}
		return (it_l == lhs.end() && it_r == rhs.end());
	}
	
	template <class T, class Alloc>
	bool operator!= (const list<T,Alloc>& lhs, const list<T,Alloc>& rhs)
	{
		return (!(lhs == rhs));
	}
	
	template <class T, class Alloc>
	bool operator<  (const list<T,Alloc>& lhs, const list<T,Alloc>& rhs)
	{
		typename ft::list<T>::const_iterator		it_r = rhs.begin();
		typename ft::list<T>::const_iterator		it_l = lhs.begin();

		if (lhs == rhs)
			return (false);
		while (it_l != lhs.end() && it_r != rhs.end() && *it_l == *it_r)
		{
			it_l++;
			it_r++;
		}
		if (*it_l < *it_r)
			return (true);
		return (false);
	}
	
	template <class T, class Alloc>
	bool operator<= (const list<T,Alloc>& lhs, const list<T,Alloc>& rhs)
	{
		if (lhs == rhs)
			return (true);
		return (lhs < rhs);
	}
	
	template <class T, class Alloc>
	bool operator>  (const list<T,Alloc>& lhs, const list<T,Alloc>& rhs)
	{
		typename ft::list<T>::const_iterator		it_r = rhs.begin();
		typename ft::list<T>::const_iterator		it_l = lhs.begin();

		if (lhs == rhs)
			return (false);
		while (it_l != lhs.end() && it_r != rhs.end() && *it_l == *it_r)
		{
			it_l++;
			it_r++;
		}
		if (*it_l > *it_r)
			return (true);
		return (false);
	}
	
	template <class T, class Alloc>
	bool operator>= (const list<T,Alloc>& lhs, const list<T,Alloc>& rhs)
	{
		if (lhs == rhs)
			return (true);
		return (lhs > rhs);
	}

	template <class T, class Alloc>
	void swap (list<T,Alloc>& x, list<T,Alloc>& y) { 
		x.swap(y); 
	}
}


#endif
