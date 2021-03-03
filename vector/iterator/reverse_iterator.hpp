/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_iterator.hpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jereligi <jereligi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/25 11:06:31 by jereligi          #+#    #+#             */
/*   Updated: 2021/03/03 16:07:10 by jereligi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef REVERSE_ITERATOR_HPP
#define REVERSE_ITERATOR_HPP

#include "iterator.hpp"

namespace ft
{
	template <typename T>
	class	reverse_iterator
	{
	public:
		static const bool				is_iterator = true;
		typedef typename std::ptrdiff_t difference_type;

		/*******************************************
		*****  Member Functions (Coplien Form) *****
		*******************************************/
		
		reverse_iterator(void) {};
		reverse_iterator(T* src) { _ptr = src; };
		reverse_iterator(reverse_iterator const &src) { *this = src; } ;
		reverse_iterator(Iterator<T> const &src) { _ptr = src.operator->(); };
		virtual ~reverse_iterator() {};

		reverse_iterator &operator=(reverse_iterator const &src) {
			_ptr = src.operator->(); 
			return (*this); 
		};

		/*******************************************
		*****         Operator Boolean         *****
		*****    == | != | > | >= | < | <=     *****
		*******************************************/

		bool	operator==(reverse_iterator const& src) const { 
			return (_ptr == src._ptr);
		};
		bool	operator!=(reverse_iterator const& src) const {
			return (_ptr != src._ptr); 
		};
		bool	operator>(reverse_iterator const& src) const { 
			return (_ptr < src._ptr); 
		};
		bool	operator>=(reverse_iterator const& src) const { 
			return (_ptr <= src._ptr); 
		};
		bool	operator<(reverse_iterator const& src) const { 
			return (_ptr > src._ptr); 
		};
		bool	operator<=(reverse_iterator const& src) const { 
			return (_ptr >= src._ptr); 
		};

		/*******************************************
		*****       Operator Arithmetics       *****
		*****     + | - | ++ | -- | += | -=    *****
		*******************************************/

		reverse_iterator			operator+(difference_type src) {
			return (reverse_iterator(_ptr - src));
		};
		reverse_iterator			operator-(difference_type src) {
			return (reverse_iterator(_ptr + src));
		};
		difference_type		operator+(reverse_iterator src) {
			return (_ptr - src._ptr);
		};
		difference_type		operator-(reverse_iterator src) {
			return (_ptr + src._ptr);
		};

		reverse_iterator			operator++() {
			_ptr--;
			return (*this);
		};
		reverse_iterator			operator++(int) {
			_ptr--; 
			return (reverse_iterator(_ptr + 1));
		};
		reverse_iterator			operator--() {
			_ptr++;
			return (*this);
		};
		reverse_iterator			operator--(int) {
			_ptr++;
			return (reverse_iterator(_ptr - 1));
		};

		void				operator+=(difference_type src) {
			_ptr -= src;
		};
		void				operator-=(difference_type src)	{
			_ptr += src;
		};

		/*******************************************
		*****       Operator deferencing       *****
		*****          * | [] | ->       	   *****
		*******************************************/
		T&			operator*() {
			return (*_ptr);
		};
		const T*	operator*() const {
			return (*_ptr); 
		};
		T&			operator[](difference_type src) {
			return (*(_ptr + src));
		};
		const T&	operator[](difference_type src) const {
			return (*(_ptr + src));
		};
		T*			operator->() {
			return (_ptr);
		};
		T*			operator->() const {
			return (_ptr); 
		};											

	private:
		T*	_ptr;
		
	};
}

#endif
