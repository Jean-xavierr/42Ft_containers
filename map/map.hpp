/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jereligi <jereligi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/04 11:46:10 by jereligi          #+#    #+#             */
/*   Updated: 2021/03/22 16:02:04 by jereligi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MAP_HPP
#define MAP_HPP

#include "../utils.hpp"

template <typename T>
struct mapNode
{
	T			data;
	mapNode		*parent;
	mapNode		*left;
	mapNode		*right;
};
 

namespace ft
{
	/*******************************************
	*****         Class Pair               *****
	*******************************************/	

	template <typename Tkey, typename Tvalue>
	class pair
	{
	public:

		// default
		pair(void) {};
	
		// copy
		template<class U, class V>
		pair (const pair<U,V>& pr)
		{
			this->first = pr.first;
			this->second = pr.second;
		};
	
		// initialization
		pair (const Tkey& a, const Tvalue& b) : first(a), second(b) {};
		~pair() {};
		
		pair &operator=(pair const &src)
		{
			this->first = src.first;
			this->second = src.second;
	
			return (*this);
		};

		Tkey		first;
		Tvalue		second;
	};


	/*******************************************
	*****          Class Map               *****
	*******************************************/

	template <	class Tkey,														// map::key_type
           		class Tvalue,													// map::mapped_type
           		class Compare = std::less<Tkey>,								// map::key_compare
           		class Alloc = std::allocator<pair<const Tkey,Tvalue> >			// map::allocator_type
			>
	class	map
	{
	public:

		// member type
		
		typedef Tkey											key_type;
		typedef Tvalue											mapped_type;
		typedef ft::pair<key_type, mapped_type>					value_type;
		typedef mapNode<value_type>								node_type;
		typedef Compare											key_compare;
		typedef std::allocator<value_type>						allocator_type;
		typedef value_type &									reference;
		typedef reference										const_reference;
		typedef value_type *									pointer;
		typedef const pointer									const_pointer;
		// typedef mapIterator<>				iterator;
		// typedef mapConstIterator<>			const_iterator;
		// typedef mapReverseIterator<>		reverse_iterator;
		// typedef mapConstReverseIterator<>	const_reverse_iterator;
		typedef size_t											size_type;
		typedef ptrdiff_t										difference_type;


		/*******************************************
		*****  Member Functions (Coplien Form) *****
		*******************************************/

		// // empty	
		// explicit map (const key_compare& comp = key_compare(), const allocator_type& alloc = allocator_type());
		
		// // range	
		// template <class InputIterator>
		// map (InputIterator first, InputIterator last, const key_compare& comp = key_compare(),
       	// const allocator_type& alloc = allocator_type());

		// copy / assign
		// map& operator= (const map& x);
		
		// // copy	
		// map (const map& x);

		// virtual		~map();

		/*******************************************
		*****             Iterators            *****
		*******************************************/

		//iterator begin();
		//const_iterator begin() const;
		
		//iterator end();
		//const_iterator end() const;

      	//reverse_iterator rbegin();
		//const_reverse_iterator rbegin() const;

		// reverse_iterator rend();
		// const_reverse_iterator rend() const;

		/*******************************************
		*****            Capacity              *****
		*******************************************/

		// bool empty() const;
		size_type size() const {
			return (_size);
		}
		// size_type max_size() const;

		/*******************************************
		*****         Element access           *****
		*******************************************/

		// mapped_type& operator[] (const key_type& k);

		/*******************************************
		*****            Modifiers             *****
		*******************************************/

		// //single element	
		// pair<iterator,bool> insert (const value_type& val);
		
		// // with hint	
		// iterator insert (iterator position, const value_type& val);

		// //range	
		// template <class InputIterator>
  		// void insert (InputIterator first, InputIterator last);

	
		// void erase (iterator position);

		// size_type erase (const key_type& k);

		// void erase (iterator first, iterator last);

		// void swap (map& x);

		// void clear();

		/*******************************************
		*****           Observers              *****
		*******************************************/

		// key_compare key_comp() const;

		// value_compare value_comp() const;
		
		/*******************************************
		*****        Map operations            *****
		*******************************************/

		//iterator find (const key_type& k);
		
		//const_iterator find (const key_type& k) const;

		// size_type count (const key_type& k) const;

		// iterator lower_bound (const key_type& k);

		// const_iterator lower_bound (const key_type& k) const;

		// iterator upper_bound (const key_type& k);
		
		// const_iterator upper_bound (const key_type& k) const;

		// pair<const_iterator,const_iterator> equal_range (const key_type& k) const;
		
		// pair<iterator,iterator>             equal_range (const key_type& k);
	
	private:
	
		mapNode<value_type>		*_map;
		size_type				_size;
		allocator_type			_alloc;
		key_compare				_key_comp;

	};

}

#endif
