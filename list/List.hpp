/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   List.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jereligi <jereligi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/04 11:46:10 by jereligi          #+#    #+#             */
/*   Updated: 2021/02/22 12:38:57 by jereligi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIST_HPP
#define LIST_HPP

#include <iostream>

namespace ft
{
	template <typename T>
	class	list
	{
	public:

		/*******************************************
		*****             Iterators            *****
		*******************************************/

		/*******************************************
		*****            Capacity              *****
		*******************************************/

		bool empty() const;
		size_type size() const;
		size_type max_size() const;

		/*******************************************
		*****         Element access           *****
		*******************************************/

		reference front();
		const_reference front() const;
		reference back();
		const_reference back() const;

		/*******************************************
		*****            Modifiers             *****
		*******************************************/

		template <class InputIterator>
		void assign (InputIterator first, InputIterator last);
		void assign (size_type n, const value_type& val);




	private:

		/*Data Here*/;

	};
}

#endif
