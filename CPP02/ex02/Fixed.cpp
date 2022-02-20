/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaugale <emaugale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 16:26:09 by emaugale          #+#    #+#             */
/*   Updated: 2022/02/20 04:12:14 by emaugale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
	this->_rawBits = 0;
}

Fixed::~Fixed()
{
}

Fixed::Fixed(const float value)
{
	this->_rawBits = (int)(roundf(value * (1 << this->_bits)));
}

Fixed::Fixed(const int value)
{
	this->_rawBits = value << _bits;
}

Fixed::Fixed(const Fixed &a)
{
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
	this->_rawBits = value.getRawBits();
	return (*this);
}

/* Arithmetic operators */

Fixed Fixed::operator+( Fixed const & value )
{
	Fixed res;
	res.setRawBits(this->_rawBits + value.getRawBits());
	return (res);
}

Fixed Fixed::operator-( Fixed const & value )
{
	Fixed res;
	res.setRawBits(this->_rawBits - value.getRawBits());
	return (res);
}

Fixed Fixed::operator*( Fixed const & value )
{
	Fixed res;
	res.setRawBits(this->_rawBits * value.getRawBits() >> this->_bits);
	return (res);
}

Fixed Fixed::operator/( Fixed const & value )
{
	Fixed res;
	res.setRawBits(this->_rawBits << this->_bits / value.getRawBits());
	return (res);
}

/* Arithmetic operators */

/* Comparaison operators */
bool	Fixed::operator>(Fixed const &value)
{
	if (this->_rawBits > value.getRawBits())
		return (1);
	return (0);
}

bool	Fixed::operator>=(Fixed const &value)
{
	if (this->_rawBits >= value.getRawBits())
		return (1);
	return (0);
}

bool	Fixed::operator<(Fixed const &value)
{
	if (this->_rawBits < value.getRawBits())
		return (1);
	return (0);
}

bool	Fixed::operator<=(Fixed const &value)
{
	if (this->_rawBits <= value.getRawBits())
		return (1);
	return (0);
}

bool	Fixed::operator==(Fixed const &value)
{
	if (this->_rawBits == value.getRawBits())
		return (1);
	return (0);
}

bool	Fixed::operator!=(Fixed const &value)
{
	if (this->_rawBits != value.getRawBits())
		return (1);
	return (0);
}

/* Comparaison operators */

/* incrementation operators */

Fixed	&Fixed::operator++(void)
{
	this->_rawBits++;
	return (*this);
}

Fixed	Fixed::operator++(int)
{
	Fixed res(*this);
	operator++();
	return (res);
}

Fixed	&Fixed::operator--(void)
{
	this->_rawBits--;
	return (*this);
}

Fixed	Fixed::operator--(int)
{
	Fixed res(*this);
	operator--();
	return (res);
}

/* incrementation operators */

/* Min/Max functions */

Fixed	&Fixed::max(Fixed  &a, Fixed  &b)
{
	if (a > b)
		return (a);
	return (b);
}

Fixed &max(Fixed &a, Fixed &b)
{
	return (Fixed::max(a, b));
}

Fixed const &Fixed::max(Fixed const &a, Fixed const &b)
{
	if (a.getRawBits() > b.getRawBits())
		return (a);
	return (b);
}

Fixed const &max(Fixed const &a, Fixed const &b)
{
	return (Fixed::max(a, b));
}

Fixed	&Fixed::min(Fixed  &a, Fixed  &b)
{
	if (a < b)
		return (a);
	return (b);
}

Fixed &min(Fixed &a, Fixed &b)
{
	return (Fixed::min(a, b));
}

Fixed const &Fixed::min(Fixed const &a, Fixed const &b)
{
	if (a.getRawBits() < b.getRawBits())
		return (a);
	return (b);
}

Fixed const &min(Fixed const &a, Fixed const &b)
{
	return (Fixed::min(a, b));
}

/* Min/Max functions */

std::ostream & operator<<( std::ostream & out, Fixed const & value)
{
	out << value.toFloat();
	return (out);
}