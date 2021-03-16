/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_iterator.hpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jereligi <jereligi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/25 11:06:31 by jereligi          #+#    #+#             */
/*   Updated: 2021/03/16 16:33:43 by jereligi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef REVERSE_ITERATOR_HPP
#define REVERSE_ITERATOR_HPP

#include "../../utils.hpp"
#include "iterator.hpp"

namespace ft
{
	template <typename T, typename Node>
	class	reverse_iterator
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
		
		reverse_iterator(void) {};
		reverse_iterator(Node* src) { _node = src; };
		reverse_iterator(Iterator<T, Node> const &src) { *this = src; } ;
		reverse_iterator(const reverse_iterator &src) { _node = src.operator->(); };
		virtual ~reverse_iterator() {};

		reverse_iterator &operator=(reverse_iterator const &src) {
			_node = src._node; 
			return (*this); 
		};

		/*******************************************
		*****         Operator Boolean         *****
		*****            == | !=               *****
		*******************************************/

		bool	operator==(reverse_iterator const& src) const { 
			return (_node == src._node);
		};
		bool	operator!=(reverse_iterator const& src) const {
			return (_node != src._node); 
		};

		/*******************************************
		*****       Operator Arithmetics       *****
		*****             ++ | --              *****
		*******************************************/

		reverse_iterator			operator++() {
			_node = _node->prev;
			return (*this);
		};
		reverse_iterator			operator++(int) {
			reverse_iterator	tmp = *this;

			--(*this); 
			return (tmp);
		};

		reverse_iterator			operator--() {
			_node = _node->next;
			return (*this);
		};
		reverse_iterator			operator--(int) {
			reverse_iterator	tmp = *this;

			++(*this); 
			return (tmp);
		};

		/*******************************************
		*****       Operator deferencing       *****
		*****             * | ->         	   *****
		*******************************************/

		const_reference		operator*() const {
			return (_node->val);
		};
		reference			operator*() {
			return (_node->val); 
		};						
		Node*			operator->() {
			return (_node);
		};
		Node*			operator->() const {
			return (_node); 
		};											

	private:
		Node		*_node;
		
	};
}

#endif
