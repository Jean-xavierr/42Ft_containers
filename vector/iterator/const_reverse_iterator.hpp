/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   const_reverse_iterator.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jereligi <jereligi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/01 16:07:03 by jereligi          #+#    #+#             */
/*   Updated: 2021/03/03 16:08:13 by jereligi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONST_REVERSE_ITERATOR_HPP
#define CONST_REVERSE_ITERATOR_HPP

#include "iterator.hpp"
#include "reverse_iterator.hpp"

namespace ft
{
	template <typename T>
	class	const_reverse_iterator
	{
	public:
		static const bool				is_iterator = true;
		typedef typename std::ptrdiff_t difference_type;

		/*******************************************
		*****  Member Functions (Coplien Form) *****
		*******************************************/
		
		const_reverse_iterator(void) {};
		const_reverse_iterator(const T* src) { _ptr = src; };
		const_reverse_iterator(Iterator<T> const &src) { _ptr = src.operator->(); };
		const_reverse_iterator(reverse_iterator<T> const &src) { _ptr = src.operator->(); };
		const_reverse_iterator(const_reverse_iterator const &src) { *this = src; } ;
		virtual ~const_reverse_iterator() {};

		const_reverse_iterator &operator=(const_reverse_iterator const &src) {
			_ptr = src.operator->(); 
			return (*this); 
		};

		/*******************************************
		*****         Operator Boolean         *****
		*****    == | != | > | >= | < | <=     *****
		*******************************************/

		bool	operator==(const_reverse_iterator const& src) const { 
			return (_ptr == src._ptr);
		};
		bool	operator!=(const_reverse_iterator const& src) const {
			return (_ptr != src._ptr); 
		};
		bool	operator>(const_reverse_iterator const& src) const { 
			return (_ptr < src._ptr); 
		};
		bool	operator>=(const_reverse_iterator const& src) const { 
			return (_ptr <= src._ptr); 
		};
		bool	operator<(const_reverse_iterator const& src) const { 
			return (_ptr > src._ptr); 
		};
		bool	operator<=(const_reverse_iterator const& src) const { 
			return (_ptr >= src._ptr); 
		};

		/*******************************************
		*****       Operator Arithmetics       *****
		*****     + | - | ++ | -- | += | -=    *****
		*******************************************/

		const_reverse_iterator			operator+(difference_type src) {
			return (const_reverse_iterator(_ptr - src));
		};
		const_reverse_iterator			operator-(difference_type src) {
			return (const_reverse_iterator(_ptr + src));
		};
		difference_type		operator+(const_reverse_iterator src) {
			return (_ptr - src._ptr);
		};
		difference_type		operator-(const_reverse_iterator src) {
			return (_ptr + src._ptr);
		};

		const_reverse_iterator			operator++() {
			_ptr--;
			return (*this);
		};
		const_reverse_iterator			operator++(int) {
			_ptr--; 
			return (const_reverse_iterator(_ptr + 1));
		};
		const_reverse_iterator			operator--() {
			_ptr++;
			return (*this);
		};
		const_reverse_iterator			operator--(int) {
			_ptr++;
			return (const_reverse_iterator(_ptr - 1));
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
