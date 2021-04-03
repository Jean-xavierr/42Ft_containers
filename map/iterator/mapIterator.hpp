/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mapIterator.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Jeanxavier <Jeanxavier@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/22 15:52:21 by jereligi          #+#    #+#             */
/*   Updated: 2021/04/02 21:56:49 by Jeanxavier       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef MAPITERATOR_HPP
#define MAPITERATOR_HPP

#include "../../utils.hpp"
#include "../map.hpp"

namespace ft
{
	template <typename T, typename node_type>
	class	mapIterator
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

			mapIterator(void) : _map(NULL) {
			};

			mapIterator(node_type *src) {
				_map = src;
			};

			mapIterator(const mapIterator &src) {
				_map = src._map;
			};

			virtual ~mapIterator() {};

			mapIterator &operator=(mapIterator const &src) {
				_map = src._map;
				return (*this);
			};

			/*******************************************
			*****         Operator Boolean         *****
			*****            == | !=               *****
			*******************************************/

			bool operator ==(mapIterator const& src) const {
				return (_map == src._map);
			};

			bool operator !=(mapIterator const& src) const {
				 return (_map != src._map); 
			};

			/*******************************************
			*****       Operator Arithmetics       *****
			*****             ++ | --              *****
			*******************************************/

			mapIterator operator ++() 
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

			mapIterator operator --() 
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

			mapIterator operator ++(int)	// a++
			{
				mapIterator temp = *this;
				++(*this);
				return (temp);
			};

			mapIterator operator --(int)	// a--
			{
				mapIterator temp = *this;
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

			/*******************************************
			*****    personnal getter function     *****
			*****                            	   *****
			*******************************************/

			// void	far_left(void)
			// {
			// 	while (get_left(_map))
			// 		_map = get_left(_map);
			// }

			// void	far_right(void)
			// {
			// 	while (get_right(_map))
			// 		_map = get_right(_map);
			// 	_map = _map->parent;
			// }

			node_type	*get_map(void) const {
				return (_map);
			};

		private:
		
			node_type		*_map;


	};
}

#endif