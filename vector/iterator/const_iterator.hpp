/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   const_iterator.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jereligi <jereligi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/01 16:07:03 by jereligi          #+#    #+#             */
/*   Updated: 2021/03/16 15:24:29 by jereligi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONST_ITERATOR_HPP
#define CONST_ITERATOR_HPP

#include "iterator.hpp"

namespace ft
{
	template <typename T>
	class	const_iterator
	{
	public:
		static const bool				is_iterator = true;
		typedef typename std::ptrdiff_t difference_type;

		/*******************************************
		*****  Member Functions (Coplien Form) *****
		*******************************************/
		
		const_iterator(void) {};
		const_iterator(const T* src) { _ptr = src; };
		const_iterator(Iterator<T> const &src) { _ptr = src.operator->(); };
		const_iterator(const_iterator const &src) { *this = src; } ;
		virtual ~const_iterator() {};

		const_iterator &operator=(const_iterator const &src) {
			_ptr = src.operator->(); 
			return (*this); 
		};

		/*******************************************
		*****         Operator Boolean         *****
		*****    == | != | > | >= | < | <=     *****
		*******************************************/

		bool	operator==(const_iterator const& src) const { 
			return (_ptr == src._ptr);
		};
		bool	operator!=(const_iterator const& src) const {
			return (_ptr != src._ptr); 
		};
		bool	operator>(const_iterator const& src) const { 
			return (_ptr > src._ptr); 
		};
		bool	operator>=(const_iterator const& src) const { 
			return (_ptr >= src._ptr); 
		};
		bool	operator<(const_iterator const& src) const { 
			return (_ptr < src._ptr); 
		};
		bool	operator<=(const_iterator const& src) const { 
			return (_ptr <= src._ptr); 
		};

		/*******************************************
		*****       Operator Arithmetics       *****
		*****     + | - | ++ | -- | += | -=    *****
		*******************************************/

		const_iterator			operator+(difference_type src) {
			return (const_iterator(_ptr + src));
		};
		const_iterator			operator-(difference_type src) {
			return (const_iterator(_ptr - src));
		};
		difference_type		operator+(const_iterator src) {
			return (_ptr + src._ptr);
		};
		difference_type		operator-(const_iterator src) {
			return (_ptr - src._ptr);
		};

		const_iterator			operator++() {
			_ptr++;
			return (*this);
		};
		const_iterator			operator++(int) {
			_ptr++; 
			return (const_iterator(_ptr - 1));
		};
		const_iterator			operator--() {
			_ptr--;
			return (*this);
		};
		const_iterator			operator--(int) {
			_ptr--;
			return (const_iterator(_ptr + 1));
		};

		void				operator+=(difference_type src) {
			_ptr += src;
		};
		void				operator-=(difference_type src)	{
			_ptr -= src;
		};

		/*******************************************
		*****       Operator deferencing       *****
		*****          * | [] | ->       	   *****
		*******************************************/

		const T&	operator*() const {
			return (*_ptr); 
		};
		const T&	operator[](difference_type src) const {
			return (*(_ptr + src));
		};
		const T*	operator->() {
			return (_ptr);
		};
		const T*	operator->() const {
			return (_ptr); 
		};											

	private:
		const T*	_ptr;
		
	};
}

#endif
