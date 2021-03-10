/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   const_reverse_iterator.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jereligi <jereligi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/01 16:07:03 by jereligi          #+#    #+#             */
/*   Updated: 2021/03/10 14:20:14 by jereligi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONST_REVERSE_ITERATOR_HPP
#define CONST_REVERSE_ITERATOR_HPP

#include "iterator.hpp"

namespace ft
{
	template <typename T, typename Node>
	class	const_reverse_iterator
	{
	public:
		static const bool				is_iterator = true;

		typedef T						value_type;
		typedef value_type&				reference;
		typedef const value_type&		const_reference;
		typedef value_type*				pointer;
		typedef const value_type*		const_pointer;
		typedef typename std::ptrdiff_t difference_type;

		/*******************************************
		*****  Member Functions (Coplien Form) *****
		*******************************************/
		
		const_reverse_iterator(void) {};
		const_reverse_iterator(const T* src) { _node = src; };
		const_reverse_iterator(Iterator<T, Node> const &src) { _node = src.operator->(); };
		const_reverse_iterator(const_reverse_iterator const &src) { *this = src; } ;
		virtual ~const_reverse_iterator() {};

		const_reverse_iterator &operator=(const_reverse_iterator const &src) {
			_node = src.operator->(); 
			return (*this); 
		};

		/*******************************************
		*****         Operator Boolean         *****
		*****             == | !=              *****
		*******************************************/

		bool	operator==(const_reverse_iterator const& src) const { 
			return (_node == src._node);
		};
		bool	operator!=(const_reverse_iterator const& src) const {
			return (_node != src._node); 
		};

		/*******************************************
		*****       Operator Arithmetics       *****
		*****             ++ | --              *****
		*******************************************/

		const_reverse_iterator			operator++() {
			_node = _node->prev;
			return (*this);
		};
		const_reverse_iterator			operator++(int) {
			const_reverse_iterator	tmp = *this;

			--(*this); 
			return (tmp);
		};
		const_reverse_iterator			operator--() {
			_node = _node->next;
			return (*this);
		};
		const_reverse_iterator			operator--(int) {
			const_reverse_iterator	tmp = *this;

			++(*this); 
			return (tmp);
		};

		/*******************************************
		*****       Operator deferencing       *****
		*****            * | ->          	   *****
		*******************************************/

		const_reference	operator*() const {
			return (*_node); 
		};
		const_pointer	operator->() {
			return (_node);
		};
		const_pointer	operator->() const {
			return (_node); 
		};											

	private:
		Node	*_node;
		
	};
}

#endif
