/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Iterator.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jereligi <jereligi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/25 11:06:31 by jereligi          #+#    #+#             */
/*   Updated: 2021/02/25 13:48:15 by jereligi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef ITERATOR_HPP
#define ITERATOR_HPP

namespace ft
{
	template <typename T>
	class	Iterator
	{
	public:
		typedef typename std::ptrdiff_t difference_type;

		/*******************************************
		*****  Member Functions (Coplien Form) *****
		*******************************************/
		
		Iterator(void) {};
		Iterator(T* src) { _ptr = src; };
		Iterator(Iterator const &src) { *this = src; } ;
		virtual ~Iterator() {};

		Iterator &operator=(Iterator const &src) {
			_ptr = src.operator->(); 
			return (*this); 
		};

		/*******************************************
		*****         Operator Boolean         *****
		*****    == | != | > | >= | < | <=     *****
		*******************************************/

		bool	operator==(Iterator const& src) const { 
			return (_ptr == src._ptr);
		};
		bool	operator!=(Iterator const& src) const {
			return (_ptr != src._ptr); 
		};
		bool	operator>(Iterator const& src) const { 
			return (_ptr > src._ptr); 
		};
		bool	operator>=(Iterator const& src) const { 
			return (_ptr >= src._ptr); 
		};
		bool	operator<(Iterator const& src) const { 
			return (_ptr < src._ptr); 
		};
		bool	operator<=(Iterator const& src) const { 
			return (_ptr <= src._ptr); 
		};

		/*******************************************
		*****       Operator Arithmetics       *****
		*****     + | - | ++ | -- | += | -=    *****
		*******************************************/

		Iterator			operator+(difference_type src) {
			return (Iterator(_ptr + src));
		};
		Iterator			operator-(difference_type src) {
			return (Iterator(_ptr - src));
		};
		difference_type		operator+(Iterator src) {
			return (_ptr + src._ptr);
		};
		difference_type		operator-(Iterator src) {
			return (_ptr - src._ptr);
		};

		Iterator			operator++() {
			_ptr++;
			return (*this);
		};
		Iterator			operator++(int) {
			_ptr++; 
			return (Iterator(_ptr - 1));
		};
		Iterator			operator--() {
			_ptr--;
			return (*this);
		};
		Iterator			operator--(int) {
			_ptr--;
			return (Iterator(_ptr + 1));
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
		T&			operator*() {
			return (*_ptr);
		};
		T* const	operator*() const {
			return (*_ptr); 
		};
		T*			operator[](difference_type src) {
			return (*(_ptr + src));
		};
		T* const	operator[](difference_type src) const {
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
