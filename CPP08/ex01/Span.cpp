/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaugale <emaugale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 05:12:39 by emaugale          #+#    #+#             */
/*   Updated: 2022/03/21 08:00:59 by emaugale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(void)
{
	std::cout << "Default constructor called" << std::endl;
	this->_N = 0;
	this->_size = 0;
}
Span::Span(unsigned int nbr)
{
	std::cout << "Default constructor called" << std::endl;
	this->_N = nbr;
	this->_size = 0;
}

Span::Span(Span const & copy)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = copy;
}

Span & Span::operator=( Span const & value )
{
	std::cout << "Copy assignement operator called" << std::endl;
	this->_N = value.getMax();
	this->_size = value.getSize();
	return (*this);
}

Span::~Span()
{
	std::cout << "Destructor called" << std::endl;
}

unsigned int		Span::getSize(void) const
{
	return (this->_size);
}

unsigned int		Span::getMax(void) const
{
	return (this->_N);
}


void	Span::addNumber(unsigned int nbr)
{
	this->_size++;
	if (getSize() > getMax())
	{
		this->_size--;
		throw std::length_error("Problem in size");
	}
	_array.push_back(nbr);
}

void	Span::addNumber(std::vector<int>::const_iterator t1, std::vector<int>::const_iterator t2) 
{
	while (t1 < t2)
	{
		this->_size++;
		if (getSize() > getMax())
		{
			this->_size--;
			throw std::length_error("Problem in size");
		}
		_array.push_back(*t1);
		t1++;
	}
}

unsigned int Span::shortestSpan(void) 
{
	 int				res = 0;
	 int				i = 0;
	
	std::sort(_array.begin(), _array.end());
	res = ::abs(_array[1] - _array[0]); 
	while (i < (int)_array.size())
	{
		if (res > ::abs(_array[i] - _array[i + 1]))
			res = ::abs(_array[i] - _array[i + 1]);
		i++;
	} 
	return (res);
}

unsigned int Span::longestSpan(void) 
{
	unsigned int	min;
	unsigned int	max;
	unsigned int	res;

	min = *std::min_element(_array.begin(), _array.end());
	max = *std::max_element(_array.begin(), _array.end());
	res = max - min;
	return (res);
}