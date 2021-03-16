/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iterator.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jereligi <jereligi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/25 11:06:31 by jereligi          #+#    #+#             */
/*   Updated: 2021/03/16 15:24:54 by jereligi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef ITERATOR_HPP
#define ITERATOR_HPP

#include "../../utils.hpp"

namespace ft
{
	template <typename T, typename Node>
	class	Iterator
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
		
		Iterator(void) {};
		Iterator(Node* src) { _node = src; };
		Iterator(Iterator const &src) { *this = src; } ;
		virtual ~Iterator() {};

		Iterator &operator=(Iterator const &src) {
			_node = src._node; 
			return (*this); 
		};

		/*******************************************
		*****         Operator Boolean         *****
		*****            == | !=               *****
		*******************************************/

		bool	operator==(Iterator const& src) const { 
			return (_node == src._node);
		};
		bool	operator!=(Iterator const& src) const {
			return (_node != src._node); 
		};

		/*******************************************
		*****       Operator Arithmetics       *****
		*****             ++ | --              *****
		*******************************************/

		Iterator			operator++() {
			_node = _node->next;
			return (*this);
		};
		Iterator			operator++(int) {
			Iterator	tmp = *this;

			++(*this); 
			return (tmp);
		};

		Iterator			operator--() {
			_node = _node->prev;
			return (*this);
		};
		Iterator			operator--(int) {
			Iterator	tmp = *this;

			--(*this); 
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
