/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jereligi <jereligi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/17 10:49:10 by jereligi          #+#    #+#             */
/*   Updated: 2021/03/17 14:21:19 by jereligi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STACK_HPP
#define STACK_HPP

#include "../list/list.hpp"

namespace ft
{
	template <class T, class Container = list<T> >
	class stack
	{
		public:

		typedef	typename list<T>::value_type	value_type;
		typedef	typename list<T>::size_type		size_type;
		typedef	Container						container_type;

		explicit stack (const container_type& ctrn = container_type()) : _container(ctrn) {};
		stack(stack const &src) : _container(src._container) {};
		stack &operator=(stack const &src) {
			_container = src._container;
			return (*this);
		}
		virtual ~stack() {};

		bool empty() const {
			return (_container.empty());
		}

		size_type size() const {
			return (_container.size());
		}

		value_type& top() {
			return (_container.back());
		}
		const value_type& top() const {
			return (_container.back());
		}

		void push (const value_type& val) {
			_container.push_back(val);
		}

		void pop() {
			_container.pop_back();
		}

		template <class Tx, class Container_x>
		friend bool operator== (const stack<Tx,Container_x>& lhs, const stack<Tx,Container_x>& rhs);
		template <class Tx, class Container_x>
		friend bool operator!= (const stack<Tx,Container_x>& lhs, const stack<Tx,Container_x>& rhs);
		template <class Tx, class Container_x>
		friend bool operator< (const stack<Tx,Container_x>& lhs, const stack<Tx,Container_x>& rhs);
		template <class Tx, class Container_x>
		friend bool operator<= (const stack<Tx,Container_x>& lhs, const stack<Tx,Container_x>& rhs);
		template <class Tx, class Container_x>
		friend bool operator>  (const stack<Tx,Container_x>& lhs, const stack<Tx,Container_x>& rhs);
		template <class Tx, class Container_x>
  		friend bool operator>= (const stack<Tx,Container_x>& lhs, const stack<Tx,Container_x>& rhs);

		private:
		
		container_type	_container;
			
	};

	template <class T, class Container>
	bool operator== (const stack<T,Container>& lhs, const stack<T,Container>& rhs)	{
		return (lhs._container == rhs._container);
	}
	
	template <class T, class Container>
	bool operator!= (const stack<T,Container>& lhs, const stack<T,Container>& rhs) {
		return (lhs._container != rhs._container);
	}
	
	template <class T, class Container>
	bool operator<  (const stack<T,Container>& lhs, const stack<T,Container>& rhs) {
		return (lhs._container < rhs._container);
	}
	
	template <class T, class Container>
	bool operator<= (const stack<T,Container>& lhs, const stack<T,Container>& rhs) {
		return (lhs._container <= rhs._container);
	}
	
	template <class T, class Container>
	bool operator>  (const stack<T,Container>& lhs, const stack<T,Container>& rhs) {
		return (lhs._container > rhs._container);
	}
	
	template <class T, class Container>
  	bool operator>= (const stack<T,Container>& lhs, const stack<T,Container>& rhs) {
		  return (lhs._container >= rhs._container);
	  }
}

#endif