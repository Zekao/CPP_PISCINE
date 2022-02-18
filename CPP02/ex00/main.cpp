/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaugale <emaugale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 15:20:04 by emaugale          #+#    #+#             */
/*   Updated: 2022/02/18 19:18:10 by emaugale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>

int main( void )
{
	std::cout << "\033[1;34m------------------------\033[m" << std::endl;
	std::cout << "\033[1;34mCreating 1 Fixed class\033[m" << std::endl;
	std::cout << "\033[1;34m------------------------\033[m" << std::endl;
	Fixed a;
	std::cout << a.getRawBits() << std::endl;
	std::cout << "\033[1;34mChanging value of it to 42\033[m" << std::endl;
	a.setRawBits(42);
	std::cout << a.getRawBits() << std::endl;
	std::cout << "\033[1;32m------------------------------------------\033[m" << std::endl;
	std::cout << "\033[1;32mCreating a copy of first class in a new one \033[m" << std::endl;
	Fixed b (a);
	std::cout << b.getRawBits() << std::endl;
	std::cout << "\033[1;32m------------------------------------------\033[m" << std::endl;
	std::cout << "\033[1;34m------------------------\033[m" << std::endl;
	std::cout << "\033[1;34mCreating a 3rd class\033[m" << std::endl;
	Fixed c;
	std::cout << "\033[1;34mSet his content on b with overload operator = \033[m" << std::endl;
	std::cout << "\033[1;34m------------------------\033[m" << std::endl;
	c = b;
	std::cout << c.getRawBits() << std::endl;
	std::cout << "\033[1;31m------------------------\033[m" << std::endl;
	std::cout << "\033[1;31mEnd of the program\033[m" << std::endl;

}

/* SUBJECT MAIN */

// int main( void ) {
// Fixed a;
// Fixed b( a );
// Fixed c;
// c = b;
// std::cout << a.getRawBits() << std::endl;
// std::cout << b.getRawBits() << std::endl;
// std::cout << c.getRawBits() << std::endl;
// return 0;
// }
