/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   queue.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jereligi <jereligi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/17 10:49:10 by jereligi          #+#    #+#             */
/*   Updated: 2021/03/17 14:36:17 by jereligi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef QUEUE_HPP
#define QUEUE_HPP

#include "../list/list.hpp"

namespace ft
{
	template <class T, class Container = list<T> >
	class queue
	{
		public:

		typedef	typename list<T>::value_type	value_type;
		typedef	typename list<T>::size_type		size_type;
		typedef	Container						container_type;

		explicit queue (const container_type& ctrn = container_type()) : _container(ctrn) {};
		queue(queue const &src) : _container(src._container) {};
		queue &operator=(queue const &src) {
			_container = src._container;
			return (*this);
		}
		virtual ~queue() {};

		bool empty() const {
			return (_container.empty());
		}

		size_type size() const {
			return (_container.size());
		}

		value_type& front() {
			return (_container.front());
		}
		const value_type& front() const {
			return (_container.front());
		}

		value_type& back() {
			return (_container.back());
		}
		const value_type& back() const {
			return (_container.back());
		}

		void push (const value_type& val) {
			_container.push_back(val);
		}

		void pop() {
			_container.pop_front();
		}

		template <class Tx, class Container_x>
		friend bool operator== (const queue<Tx,Container_x>& lhs, const queue<Tx,Container_x>& rhs);
		template <class Tx, class Container_x>
		friend bool operator!= (const queue<Tx,Container_x>& lhs, const queue<Tx,Container_x>& rhs);
		template <class Tx, class Container_x>
		friend bool operator< (const queue<Tx,Container_x>& lhs, const queue<Tx,Container_x>& rhs);
		template <class Tx, class Container_x>
		friend bool operator<= (const queue<Tx,Container_x>& lhs, const queue<Tx,Container_x>& rhs);
		template <class Tx, class Container_x>
		friend bool operator>  (const queue<Tx,Container_x>& lhs, const queue<Tx,Container_x>& rhs);
		template <class Tx, class Container_x>
  		friend bool operator>= (const queue<Tx,Container_x>& lhs, const queue<Tx,Container_x>& rhs);

		private:
		
		container_type	_container;
			
	};

	template <class T, class Container>
	bool operator== (const queue<T,Container>& lhs, const queue<T,Container>& rhs)	{
		return (lhs._container == rhs._container);
	}
	
	template <class T, class Container>
	bool operator!= (const queue<T,Container>& lhs, const queue<T,Container>& rhs) {
		return (lhs._container != rhs._container);
	}
	
	template <class T, class Container>
	bool operator<  (const queue<T,Container>& lhs, const queue<T,Container>& rhs) {
		return (lhs._container < rhs._container);
	}
	
	template <class T, class Container>
	bool operator<= (const queue<T,Container>& lhs, const queue<T,Container>& rhs) {
		return (lhs._container <= rhs._container);
	}
	
	template <class T, class Container>
	bool operator>  (const queue<T,Container>& lhs, const queue<T,Container>& rhs) {
		return (lhs._container > rhs._container);
	}
	
	template <class T, class Container>
  	bool operator>= (const queue<T,Container>& lhs, const queue<T,Container>& rhs) {
		  return (lhs._container >= rhs._container);
	  }
}

#endif