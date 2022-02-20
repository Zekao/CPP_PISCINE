/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaugale <emaugale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 15:20:04 by emaugale          #+#    #+#             */
/*   Updated: 2022/02/20 00:57:10 by emaugale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>

// int	main(void)
// {
// 	std::string value;
// 	std::cout << "\033[0;34mPlease enter a value\033[m\033[0;35m" << std::endl;
// 	Fixed a;
// 	while (42)
// 	{
// 		if (!std::getline(std::cin, value))
// 			exit (1);
// 		float val;
// 		val = atof(value.c_str());
// 		a = Fixed(val);
// 		std::cout << "\033[ma is " << a << std::endl;
// 		std::cout << "a is " << a.toInt() << " as integer" << std::endl;
// 		std::cout << "\033[0;34mPlease enter a new value or you can exit the program\033[m" << std::endl;
// 	}
// }

int main( void )
{
	Fixed a;
	Fixed const b( 10 );
	Fixed const c( 42.42f );
	Fixed const d( b );

	a = Fixed( 1234.4321f );
	
	std::cout << "a is " << a << std::endl;
	std::cout << "b is " << b << std::endl;
	std::cout << "c is " << c << std::endl;
	std::cout << "d is " << d << std::endl;

	std::cout << "a is " << a.toInt() << " as integer" << std::endl;
	std::cout << "b is " << b.toInt() << " as integer" << std::endl;
	std::cout << "c is " << c.toInt() << " as integer" << std::endl;
	std::cout << "d is " << d.toInt() << " as integer" << std::endl;

	return 0;
}
