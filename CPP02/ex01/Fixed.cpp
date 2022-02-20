/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaugale <emaugale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 16:26:09 by emaugale          #+#    #+#             */
/*   Updated: 2022/02/20 00:57:57 by emaugale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	this->_rawBits = 0;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const float value)
{
	std::cout << "Float constructor called" << std::endl;
	this->_rawBits = (int)(roundf(value * (1 << this->_bits)));
}

Fixed::Fixed(const int value)
{
	std::cout << "Int constructor called" << std::endl;
	this->_rawBits = value << _bits;
}

Fixed::Fixed(const Fixed &a)
{
	std::cout << "Copy constructor called" << std::endl;
	this->_rawBits = a.getRawBits();
}


int	Fixed::toInt( void ) const
{
	return ((int)this->_rawBits >> this->_bits);
}

float	Fixed::toFloat( void ) const
{
	return ((float)this->_rawBits / ( 1 << this->_bits));
}

int	Fixed::getRawBits(void) const
{
	return (this->_rawBits);
}

void	Fixed::setRawBits( int const raw)
{
		this->_rawBits = raw;
}

Fixed & Fixed::operator=( Fixed const & value )
{
	std::cout << "Copy assignement operator called" << std::endl;
	this->_rawBits = value.getRawBits();
	return (*this);
}

std::ostream & operator<<( std::ostream & out, Fixed const & value)
{
	out << value.toFloat();
	return (out);
}