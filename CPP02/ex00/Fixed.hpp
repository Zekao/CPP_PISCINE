/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaugale <emaugale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 16:25:48 by emaugale          #+#    #+#             */
/*   Updated: 2022/02/18 15:39:29 by emaugale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed
{
	private:
		int		_rawBits;
		int		_bits;
	public:
		Fixed();
		Fixed(const Fixed &a);
		~Fixed();
		Fixed & operator = ( Fixed const & value );
		int		getRawBits( void ) const;
		void	setRawBits( int const raw);
};

#endif
