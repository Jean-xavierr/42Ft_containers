/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jereligi <jereligi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/04 11:46:10 by jereligi          #+#    #+#             */
/*   Updated: 2021/03/24 16:28:47 by jereligi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MAP_HPP
#define MAP_HPP

#include "../utils.hpp"
#include "./iterator/mapIterator.hpp"

template <typename Tpair>
struct mapNode
{
	Tpair		data;
	mapNode		*parent;
	mapNode		*left;
	mapNode		*right;
};

template <typename T>
mapNode<T>	*get_right(mapNode<T> *node) {
	return (node->right);
}

template <typename T>
mapNode<T>	*get_left(mapNode<T> *node) {
	return (node->left);
}

template <typename T>
mapNode<T>	*get_parent(mapNode<T> *node) {
	return (node->parent);
}

template <typename T>
mapNode<T>	*far_right(mapNode<T> *node) {
	while (node->right != NULL)
		node = node->right;
	return (node);
}

template <typename T>
mapNode<T>	*far_left(mapNode<T> *node) {
	while (node->left != NULL)
		node = node->left;
	return (node);
}


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
		pair (const pair<U,V>& src)
		{
			this->first = src.first;
			this->second = src.second;
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
		typedef mapIterator<value_type, node_type>				iterator;
		// typedef mapConstIterator<>			const_iterator;
		// typedef mapReverseIterator<>		reverse_iterator;
		// typedef mapConstReverseIterator<>	const_reverse_iterator;
		typedef size_t											size_type;
		typedef ptrdiff_t										difference_type;


		/*******************************************
		*****  Member Functions (Coplien Form) *****
		*******************************************/

		// // empty	
		explicit map (const key_compare& comp = key_compare(), const allocator_type& alloc = allocator_type())
		{
			_map = new node_type();
			
			_size = 0;
			_alloc = alloc;
			_key_comp = comp;
		}
		
		// // range	
		// template <class InputIterator>
		// map (InputIterator first, InputIterator last, const key_compare& comp = key_compare(),
       	// const allocator_type& alloc = allocator_type());

		// copy / assign
		// map& operator= (const map& x);
		// {

		// }
		
		// // copy	
		map (const map& x){
			*this = x;
		}

		// virtual		~map();

		/*******************************************
		*****             Iterators            *****
		*******************************************/

		iterator begin()
		{
			iterator	tmp(far_left(_map));

			return (tmp);
		}

		//const_iterator begin() const;
		
		iterator end()
		{
			iterator	tmp(far_right(_map));

			return (tmp);
		}
		//const_iterator end() const;

      	//reverse_iterator rbegin();
		//const_reverse_iterator rbegin() const;

		// reverse_iterator rend();
		// const_reverse_iterator rend() const;

		/*******************************************
		*****            Capacity              *****
		*******************************************/

		bool empty() const {
			if (_size > 0)
				return (0);
			return (1);
		}
		
		size_type size() const {
			return (_size);
		}

		size_type max_size() const {
			return (std::numeric_limits<difference_type>::max() / (sizeof(node_type) / 2 ?: 1));
		}

		/*******************************************
		*****         Element access           *****
		*******************************************/

		mapped_type& operator[] (const key_type& k)
		{
			value_type		new_pair(k, mapped_type());
			node_type		*new_node = new node_type();

			value_type		new_pair2('x', mapped_type());
			node_type		*new_node2 = new node_type();
			
			node_type		*tmp = _map;
			
			new_node->data = new_pair;
			new_node->left = NULL;
			new_node->parent = NULL;
			new_node->right = tmp;

			_map = new_node;
			tmp->parent = new_node;


			new_node2->data = new_pair2;
			new_node2->left = NULL;
			new_node2->parent = _map;
			new_node2->right = far_right(_map);

			_map->right = new_node2;

			
			return(new_node->data.second);
		}

		/*******************************************
		*****            Modifiers             *****
		*******************************************/

		//single element	
		pair<iterator,bool> insert (const value_type& val)
		{
			// if (_size > 0 && _find_node(val)->data == val)
			// 	return (pair<iterator, bool>(this->end(), false));
			
			value_type		new_pair(val);
			node_type		*new_node = new node_type();

			new_node->data = new_pair;
			new_node->left = NULL;
			new_node->right = NULL;
			new_node->parent = NULL;

			std::cout << "new_pair : " << new_node->data.first << std::endl;

			_bthree_add(new_node);
			return (pair<iterator, bool>(this->end(), false));
		}
		
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

		// node_type	_find_node(const value_type& val)
		// {
		// 	iterator	it;

		// 	for (it = begin(); it != end(); it++)
		// 	{
		// 		if ((*it).first == val.first)
		// 			break;
		// 	}
		// 	return (it.operator->());
		// }

		// void		_bthree_add(node_type *new_node)
		// {

		// }

	};

}

#endif
