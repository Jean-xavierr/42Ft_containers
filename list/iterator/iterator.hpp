/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iterator.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jereligi <jereligi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/25 11:06:31 by jereligi          #+#    #+#             */
/*   Updated: 2021/03/09 15:40:12 by jereligi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef ITERATOR_HPP
#define ITERATOR_HPP

#include "../../utils.hpp"

namespace ft
{
	template <typename T>
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

		/*******************************************
		*****       Operator Arithmetics       *****
		*****     + | - | ++ | -- | += | -=    *****
		*******************************************/

		// Iterator			operator++() {
		// 	// _ptr = _ptr.next();
		// 	return (*this);
		// };
		// Iterator			operator++(int) {
		// 	_ptr++; 
		// 	return (Iterator(_ptr - 1));
		// };

		// Iterator			operator--() {
		// 	//_ptr = _ptr.prev();
		// 	return (*this);
		// };
		// Iterator			operator--(int) {
		// 	_ptr--;
		// 	return (Iterator(_ptr + 1));
		// };

		/*******************************************
		*****       Operator deferencing       *****
		*****          * | [] | ->       	   *****
		*******************************************/

		const_reference		operator*() const {
			return (*(_ptr.get_val()));
		}

		pointer				operator->() {
			return (_ptr);
		}
		pointer				operator->() const {
			return (_ptr);
		}
									

	private:
		T*	_ptr;
		
	};
}

#endif
