/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jereligi <jereligi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/04 11:46:10 by jereligi          #+#    #+#             */
/*   Updated: 2021/04/01 17:00:55 by jereligi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MAP_HPP
#define MAP_HPP

#include "../utils.hpp"
#include "./iterator/mapIterator.hpp"
#include "./iterator/mapConstIterator.hpp"
#include "./iterator/mapReverseIterator.hpp"
#include "./iterator/mapConstReverseIterator.hpp"

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
		typedef mapConstIterator<value_type, node_type>			const_iterator;
		typedef mapReverseIterator<value_type, node_type>		reverse_iterator;
		typedef mapConstReverseIterator<value_type, node_type>	const_reverse_iterator;
		typedef size_t											size_type;
		typedef ptrdiff_t										difference_type;


		/*******************************************
		*****  Member Functions (Coplien Form) *****
		*******************************************/

		// // empty	
		explicit map (const key_compare& comp = key_compare(), const allocator_type& alloc = allocator_type())
		{
			_map = new node_type();
			_map->left = NULL;
			_map->right = NULL;
			_map->parent = NULL;
			
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

		virtual		~map()
		{
			if (empty() == 0)
				clear();
		}

		/*******************************************
		*****             Iterators            *****
		*******************************************/

		iterator begin() {
			return (iterator(far_left(_map)));
		}

		const_iterator begin() const {
			return (const_iterator(far_left(_map)));	
		}
		
		iterator end() {
			return (iterator(far_right(_map)));
		}

		const_iterator end() const {
			return (const_iterator(far_right(_map)));
		}

      	reverse_iterator rbegin() {
			return (reverse_iterator(end()));
		}

		const_reverse_iterator rbegin() const {
			return (const_reverse_iterator(end()));
		}

		reverse_iterator rend() {
			return (reverse_iterator(begin()));
		}
		const_reverse_iterator rend() const {
			return (const_reverse_iterator(begin()));
		}

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
			return ((insert(value_type(k, mapped_type()))).first->second);
		}

		/*******************************************
		*****            Modifiers             *****
		*******************************************/

		//single element	
		pair<iterator,bool> insert (const value_type& val)
		{
			ft::pair<iterator, bool> ret;

			if (_size > 0 && (count(val.first)) == 1)
			{
				ret.second = false;
				return (ret);
			}
			
			value_type		new_pair(val);
			node_type		*new_node = new node_type();

			new_node->data = new_pair;
			new_node->left = NULL;
			new_node->right = NULL;
			new_node->parent = NULL;

			_btree_add(new_node);
			ret.first = find(val.first);
			return (ret);
		}
		
		// // with hint	
		iterator insert (iterator position, const value_type& val)
		{
			static_cast<void>(position);
			return (insert(val).first);
		}

		// //range	
		template <class InputIterator>
  		void insert (InputIterator first, InputIterator last,
		typename ft::enable_if<InputIterator::is_iterator, InputIterator>::type = NULL)
		{
			while (first != last)
			{
				insert(*first);
				first++;
			}
		}

	
		// void erase (iterator position);

		// size_type erase (const key_type& k);

		// void erase (iterator first, iterator last);

		// void swap (map& x);

		void clear() 
		{
			node_type *sentinel = far_right(_map);

			if (_size == 0)
				return ;
			sentinel->parent->right = NULL;
			_btree_clear(_map);
			_map = sentinel;
			_size = 0;
		}

		/*******************************************
		*****           Observers              *****
		*******************************************/

		// key_compare key_comp() const;

		// value_compare value_comp() const;
		
		/*******************************************
		*****        Map operations            *****
		*******************************************/

		iterator find (const key_type& k) 
		{
			iterator 	it = begin();
			iterator	ite = end();

			while (it != ite)
			{
				if (!_key_comp((*it).first, k) && !_key_comp(k, (*it).first))
					break ;
				it++;
			}
			return (it);
		}
		
		const_iterator find (const key_type& k) const 
		{
			const_iterator 	it = begin();
			const_iterator	ite = end();

			while (it != ite)
			{
				if (!_key_comp((*it).first, k) && !_key_comp(k, (*it).first))
					break ;
				it++;
			}
			return (it);
		}

		size_type count (const key_type& k) const 
		{
			size_t			ret = 0;
			const_iterator 	it = begin();
			const_iterator	ite = end();

			while (it != ite)
			{
				if (!_key_comp((*it).first, k) && !_key_comp(k, (*it).first))
				{
					ret++;
					break ;
				}
				it++;
			}
			return (ret);
		}

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

		void		_btree_add(node_type *new_node)
		{
			node_type	**parent = &_map;
			node_type	**node = &_map;
			node_type	*sentinel = far_right(_map);
			bool		side_left = -1;
			
			while (*node && *node != sentinel)
			{
				parent = node;
				side_left = _key_comp(new_node->data.first, (*node)->data.first);
				node = (side_left ? &(*node)->left : &(*node)->right);
			}
			if (*node == NULL) 
			{
				new_node->parent = (*parent);
				*node = new_node;
			}
			else // if (*node == sentinel)
			{
				*node = new_node;
				new_node->parent = sentinel->parent;
				sentinel->parent = far_right(new_node);
				far_right(new_node)->right = sentinel;
			}
			_size++;
		};

		void		_btree_clear(node_type	*node)
		{
			if (node == NULL)
				return ;
			_btree_clear(node->left);
			_btree_clear(node->right);
			delete node;
		};
		
	};
}

#endif
