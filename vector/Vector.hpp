/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Vector.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jereligi <jereligi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/04 12:05:06 by jereligi          #+#    #+#             */
/*   Updated: 2021/01/04 17:18:45 by jereligi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VECTOR_HPP
#define VECTOR_HPP

namespace ft
{
	template <typename T>
	class	vector
	{
	public:

		vector(void) {} ;
		vector(size_t n, const T &val)
		{
			this->tab = new T[n];
			for (size_t i = 0; i < n; i++)
				tab[i] = val;
			return ;
		}
		vector(vector const &src);
		vector &operator=(vector const &src);
		virtual ~vector(){
			delete [] tab;
			return ;
		}

		// iterator begin();
		// const_iterator begin() const;

		// iterator end();
		// const_iterator end() const;

		// reverse_iterator rbegin();
		// const_reverse_iterator rbegin() const;

		// reverse_iterator rend();
		// const_reverse_iterator rend() const;

	private:
		T		*tab;

	};
}

#endif