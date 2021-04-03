/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mapConstIterator.hpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jereligi <jereligi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/24 16:31:36 by jereligi          #+#    #+#             */
/*   Updated: 2021/04/03 15:43:26 by jereligi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MAPCONSTITERATOR_HPP
#define MAPCONSTITERATOR_HPP

#include "../../utils.hpp"
#include "./mapIterator.hpp"
#include "../map.hpp"


namespace ft
{
	template <typename T, typename node_type>
	class	mapConstIterator
	{
		public:
			static const bool				is_iterator = true;

			typedef T						value_type;
			typedef const value_type&		const_reference;
			typedef value_type&				reference;
			typedef value_type*				pointer;
			typedef const pointer			const_pointer;
			typedef std::ptrdiff_t			difference_type;

			/*******************************************
			*****  Member Functions (Coplien Form) *****
			*******************************************/

			mapConstIterator(void) : _map(NULL) {
			};

			mapConstIterator(node_type *src) {
				_map = src;
			};

			mapConstIterator(const mapConstIterator &src) {
				_map = src._map;
			};

			mapConstIterator(const mapIterator<T, node_type> &src) { 
				_map = src.get_map();
			};	

			virtual ~mapConstIterator() {};

			mapConstIterator &operator=(mapConstIterator const &src) {
				_map = src._map;
				return (*this);
			};

			/*******************************************
			*****         Operator Boolean         *****
			*****            == | !=               *****
			*******************************************/

			bool operator ==(mapConstIterator const& src) const {
				return (_map == src.map);
			};

			bool operator !=(mapConstIterator const& src) const {
				 return (_map != src._map); 
			};

			/*******************************************
			*****       Operator Arithmetics       *****
			*****             ++ | --              *****
			*******************************************/

			mapConstIterator operator ++() 
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

			mapConstIterator operator --() 
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
					while (_map && child == _map->left)
					{
						child = _map;
						_map = _map->parent;
					}
				}
				return (*this);
			};

			mapConstIterator operator ++(int)	// a++
			{
				mapConstIterator temp = *this;
				++(*this);
				return (temp);
			};

			mapConstIterator operator --(int)	// a--
			{
				mapConstIterator temp = *this;
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
			// const_pointer operator ->() const {
			// 	return (&_map->data);
			// };

		private:
		
			node_type		*_map;
	};
}

#endif