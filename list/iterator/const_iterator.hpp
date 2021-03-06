/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   const_iterator.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jereligi <jereligi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/01 16:07:03 by jereligi          #+#    #+#             */
/*   Updated: 2021/04/03 14:59:22 by jereligi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONST_ITERATOR_HPP
#define CONST_ITERATOR_HPP

#include "iterator.hpp"

namespace ft
{
	template <typename T, typename Node>
	class	const_iterator
	{
	public:
		static const bool				is_iterator = true;

		typedef const T					value_type;
		typedef value_type&				reference;
		typedef const value_type&		const_reference;
		typedef value_type*				pointer;
		typedef const value_type*		const_pointer;
		typedef typename std::ptrdiff_t difference_type;

		/*******************************************
		*****  Member Functions (Coplien Form) *****
		*******************************************/
		
		const_iterator(void) {};
		const_iterator(const Node* src) { _node = src; };
		const_iterator(Iterator<T, Node> const &src) { _node = src.operator->(); };
		const_iterator(const_iterator const &src) { _node = src._node; } ;
		virtual ~const_iterator() {};

		const_iterator &operator=(const_iterator const &src) {
			_node = src._node; 
			return (*this); 
		};

		/*******************************************
		*****         Operator Boolean         *****
		*****             == | !=              *****
		*******************************************/

		bool	operator==(const_iterator const& src) const { 
			return (_node == src._node);
		};
		bool	operator!=(const_iterator const& src) const {
			return (_node != src._node); 
		};

		/*******************************************
		*****       Operator Arithmetics       *****
		*****             ++ | --              *****
		*******************************************/

		const_iterator			operator++() {
			_node = _node->next;
			return (*this);
		};
		const_iterator			operator++(int) {
			const_iterator	tmp = *this;

			++(*this); 
			return (tmp);
		};
		const_iterator			operator--() {
			_node = _node->prev;
			return (*this);
		};
		const_iterator			operator--(int) {
			const_iterator	tmp = *this;

			--(*this); 
			return (tmp);
		};

		/*******************************************
		*****       Operator deferencing       *****
		*****            * | ->          	   *****
		*******************************************/

		const_reference	operator*() const {
			return (_node->val); 
		};
		// Node* const	operator->() {
		// 	return (_node);
		// };
		const Node* 	operator->() const {
			return (_node); 
		};											

	private:
		const Node	*_node;
		
	};
}

#endif
