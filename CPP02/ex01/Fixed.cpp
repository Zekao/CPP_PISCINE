/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaugale <emaugale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 16:26:09 by emaugale          #+#    #+#             */
/*   Updated: 2022/02/18 19:34:19 by emaugale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	this->_rawBits = 0;
	this->_bits = 8;
}

Fixed::Fixed(const float value)
{
	std::cout << "Default constructor called" << std::endl;
	this->_rawBits = 0;
	this->_bits = 8;
}

// Fixed::Fixed(const int value)
// {
// 	std::cout << "Default constructor called" << std::endl;
// 	this->_rawBits = 0;
// 	this->_bits = 8;
// }

Fixed::Fixed(const Fixed &a)
{
	std::cout << "Copy constructor called" << std::endl;
	this->_rawBits = a.getRawBits();
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

int	Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (_rawBits);
}

void	Fixed::setRawBits( int const raw)
{
		this->_rawBits = raw;
}

Fixed & Fixed::operator=( Fixed const & value )
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->_rawBits = value.getRawBits();

	return *this;
}

std::ostream & operator<<( std::ostream & o, Fixed const & value)
{
	o << value.getRawBits();
	return (o);
}
