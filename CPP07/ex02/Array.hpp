/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaugale <emaugale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/18 22:44:57 by emaugale          #+#    #+#             */
/*   Updated: 2022/03/20 23:03:07 by emaugale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <stdlib.h>

template <typename T>
class Array
{
	private:
		unsigned int	_size;
		T				*_array;
	public:
		Array<T>(const unsigned int size) : _size(size)
		{
			std::cout << "Size constructor called" << std::endl;        
			if (size <= 0)
				throw std::length_error("Invalid size");
			this->_array = new T[size];
		};
		Array<T>(void)
		{
			std::cout << "Default constructor called" << std::endl;
			this->_array = NULL;
			this->_size = 0;
		};
		unsigned int getSize(void)
		{
			return (this->_size);
		}
		T & operator [] (const unsigned int index) // operator overload
		{
			if (index < 0 || index >= this->_size)
				throw std::length_error("Invalid size");
			return (this->_array[index]);
		}
		Array<T> ( T &value)
		{
			std::cout << "Copy constructor called" << std::endl;
			*this = value;
			return (*this);
		}
		T & operator = ( T const & value ) // operator overload
		{
			std::cout << "Assignement = operator called" << std::endl;
			if (*this == value)
				return (*this);	// if i'm trying to reasign the same 
			if (this->_size > 0) // if i already have something, i free for re_init
				delete [] this->_array;
			this->_size = value.getSize();
			this->_array = new T[this->_size];
			for (int i = 0; i < this->_array; i++)
				this->_array[i] = value[i];
			return (*this);
		}
		~Array()
		{
			std::cout << "Array destructor called" << std::endl;
			// if (this->_size > 0)
				// delete [] this->_array;
		};
};


#endif