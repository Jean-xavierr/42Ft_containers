/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Iterator.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jereligi <jereligi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/22 11:03:37 by jereligi          #+#    #+#             */
/*   Updated: 2021/02/22 11:35:07 by jereligi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITERATOR_CPP
# define ITERATOR_CPP

namespace ft
{
	template <class T>
	class	Iterator
	{
	public:
	
		Iterator(void);
		Iterator(const &src) { _ptr = src; }
		Iterator &operator=(Iterator const &src) { *this = src; }
		virtual 	Iterator();

		bool operator==(T* b)	{ return _ptr == b };
		bool operator!=(T* b)	{ return _ptr != b };
		bool operator<(T* b)	{ return _ptr < b };
		bool operator>(T* b)	{ return _ptr > b };
		bool operator>=(T* b)	{ return _ptr >= b };
		bool operator<=(T* b)	{ return _ptr <= b };

		Iterator operator++(void) {_ptr++; return this };
		Iterator operator--(void) {_ptr--; return this };

	
	private:
	
		T*	_ptr;
	
	};
}

#endif