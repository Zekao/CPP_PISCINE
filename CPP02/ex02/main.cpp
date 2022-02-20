/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaugale <emaugale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 15:20:04 by emaugale          #+#    #+#             */
/*   Updated: 2022/02/20 04:10:43 by emaugale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>

int	main(void)
{
	std::string value;
	std::cout << "\033[0;34mPlease enter a value\033[m" << std::endl;
	while (42)
	{
		if (!std::getline(std::cin, value))
			exit (1);
		float val;
		val = atof(value.c_str());
		Fixed a(val);
		Fixed b(42);
		std::cout << "value of a : " << a << std::endl;
		std::cout << "\033[0;35mpre incrementing a \033[m: " << ++a << std::endl;
		std::cout << "value of a : " << a << std::endl;
		std::cout << "\033[0;35mpost incrementing a : \033[m" << a++ << std::endl;
		std::cout << "value of a : " << a << std::endl;
		std::cout << "Now doing a comparaison between a and 42" << std::endl;
		std::cout << "max value : " << Fixed::max(a, b) << std::endl;
		std::cout << "min value : " << Fixed::min(a, b) << std::endl;
		return (0);
	}
}

/* SUBJECT MAIN */

// int main( void ) {
// Fixed a;
// Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
// std::cout << a << std::endl;
// std::cout << ++a << std::endl;
// std::cout << a << std::endl;
// std::cout << a++ << std::endl;
// std::cout << a << std::endl;
// std::cout << b << std::endl;
// std::cout << Fixed::max( a, b ) << std::endl;
// return 0;
// }

