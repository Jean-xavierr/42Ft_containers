/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mapConstReverseIterator.hpp                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jereligi <jereligi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/24 16:31:36 by jereligi          #+#    #+#             */
/*   Updated: 2021/04/01 16:53:32 by jereligi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MAPCONSTREVERSEITERATOR_HPP
#define MAPCONSTREVERSEITERATOR_HPP

#include "../../utils.hpp"
#include "./mapIterator.hpp"
#include "../map.hpp"


namespace ft
{
	template <typename T, typename node_type>
	class	mapConstReverseIterator
	{
		public:

			typedef T						value_type;
			typedef const value_type&		const_reference;
			typedef value_type&				reference;
			typedef value_type*				pointer;
			typedef const pointer			const_pointer;
			typedef std::ptrdiff_t			difference_type;

			/*******************************************
			*****  Member Functions (Coplien Form) *****
			*******************************************/

			mapConstReverseIterator(void) : _map(NULL) {
			};

			mapConstReverseIterator(node_type *src) {
				_map = src;
			};

			mapConstReverseIterator(const mapConstReverseIterator &src) {
				_map = src._map;
			};

			mapConstReverseIterator(const mapIterator<T, node_type> &src) { 
				_map = src.get_map();
			};	

			virtual ~mapConstReverseIterator() {};

			mapConstReverseIterator &operator=(mapConstReverseIterator const &src) {
				_map = src._map;
				return (*this);
			};

			/*******************************************
			*****         Operator Boolean         *****
			*****            == | !=               *****
			*******************************************/

			bool operator ==(mapConstReverseIterator const& src) const {
				return (_map == src.map);
			};

			bool operator !=(mapConstReverseIterator const& src) const {
				 return (_map != src._map); 
			};

			/*******************************************
			*****       Operator Arithmetics       *****
			*****             ++ | --              *****
			*******************************************/

			mapConstReverseIterator operator ++() 
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

			mapConstReverseIterator operator --() 
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

			mapConstReverseIterator operator ++(int)	// a++
			{
				mapConstReverseIterator temp = *this;
				++(*this);
				return (temp);
			};

			mapConstReverseIterator operator --(int)	// a--
			{
				mapConstReverseIterator temp = *this;
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
			const_pointer operator ->() const {
				return (&_map->data);
			};

		private:
		
			const node_type		*_map;
	};
}

#endif