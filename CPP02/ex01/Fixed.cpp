/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaugale <emaugale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 16:26:09 by emaugale          #+#    #+#             */
/*   Updated: 2022/02/19 14:17:45 by emaugale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	this->_value = 0;
	this->_bits = 8;
}

Fixed::Fixed(const float value)
{
	std::cout << "Float constructor called" << std::endl;
	this->_value = (int)(roundf(value * (1 << _bits)));
}

Fixed::Fixed(const int value)
{
	std::cout << "Int constructor called" << std::endl;
	this->_value = value << _bits;
}

Fixed::Fixed(const Fixed &a)
{
	std::cout << "Copy constructor called" << std::endl;
	this->_value = a.getRawBits();
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

int	Fixed::toInt( void ) const
{
	return (this->_value >> this->_bits);
}

float	Fixed::toFloat( void ) const
{
	return ((float)this->_value / (float)this->_bits);
}

int	Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (_value);
}

void	Fixed::setRawBits( int const raw)
{
		this->_value = raw;
}

Fixed & Fixed::operator=( Fixed const & value )
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &value)
		this->_value = value.getRawBits();

	return *this;
}

std::ostream & operator<<( std::ostream & out, Fixed const & value)
{
	out << value.toFloat();
	return (out);
}
