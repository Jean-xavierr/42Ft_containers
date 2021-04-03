/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mapReverseIterator.hpp                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Jeanxavier <Jeanxavier@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/24 16:42:15 by jereligi          #+#    #+#             */
/*   Updated: 2021/04/02 22:08:19 by Jeanxavier       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MAPREVERSEITERATOR_HPP
#define MAPREVERSEITERATOR_HPP


#include "../../utils.hpp"
#include "./mapIterator.hpp"
#include "../map.hpp"

namespace ft
{
	template <typename T, typename node_type>
	class	mapReverseIterator
	{
		public:
			static const bool				is_iterator = true;

			typedef T						value_type;
			typedef const value_type&		const_reference;
			typedef value_type&				reference;
			typedef value_type*				pointer;
			typedef std::ptrdiff_t			difference_type;

			/*******************************************
			*****  Member Functions (Coplien Form) *****
			*******************************************/

			mapReverseIterator(void) : _map(NULL) {
			};

			mapReverseIterator(node_type *src) {
				_map = src;
			};

			mapReverseIterator(const mapReverseIterator &src) {
				_map = src._map;
			};

			mapReverseIterator(const mapIterator<T, node_type> &src) { 
				_map = src.get_map();
			};	

			virtual ~mapReverseIterator() {};

			mapReverseIterator &operator=(mapReverseIterator const &src) {
				_map = src._map;
				return (*this);
			};

			/*******************************************
			*****         Operator Boolean         *****
			*****            == | !=               *****
			*******************************************/

			bool operator ==(mapReverseIterator const& src) const {
				return (_map == src._map);
			};

			bool operator !=(mapReverseIterator const& src) const {
				 return (_map != src._map); 
			};

			/*******************************************
			*****       Operator Arithmetics       *****
			*****             ++ | --              *****
			*******************************************/

			mapReverseIterator operator ++() 
			{
				if (_map->left != NULL)
				{
					_map = _map->left;
					while (_map->right != NULL)
						_map = _map->right;
				}
				else
				{
					node_type	*child = _map;

					_map = _map->parent;
					while (_map->right == child)
					{
						child = _map;
						_map = _map->parent;
					}
				}
				return (*this);
			};

			mapReverseIterator operator --() 
			{
				if (_map->right != NULL)
				{
					_map = _map->right;
					while (_map->left != NULL)
						_map = _map->left;
				}
				else
				{
					node_type	*child = _map;

					_map = _map->parent;
					while (_map->right == child)
					{
						child = _map;
						_map = _map->parent;
					}
				}
				return (*this);
			};

			mapReverseIterator operator ++(int)	// a++
			{
				mapReverseIterator temp = *this;
				++(*this);
				return (temp);
			};

			mapReverseIterator operator --(int)	// a--
			{
				mapReverseIterator temp = *this;
				--(*this);
				return (temp);
			};

			/*******************************************
			*****       Operator deferencing       *****
			*****             * | ->         	   *****
			*******************************************/

			reference operator *() {
				return (_map->data);
			};											
			const_reference operator *() const {
				return (_map->data);
			};							
			pointer operator ->() {
				return (&_map->data);
			};									
			pointer operator ->() const {
				return (&_map->data);
			};

		private:
		
			node_type		*_map;

	};
}

#endif