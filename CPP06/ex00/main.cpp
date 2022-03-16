/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaugale <emaugale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 23:45:00 by emaugale          #+#    #+#             */
/*   Updated: 2022/03/16 23:45:00 by emaugale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"
#include <stdio.h>

int	main(void)
{
	std::string str;

	std::getline(std::cin, str);
	// std::cout << "======TEST VALUE=======" << std::endl;
	// std::cout << " Int : " << checkInt(str) << std::endl;
	// std::cout << " Char : " << checkChar(str) << std::endl;
	// std::cout << " Float : " << checkFloat(str) << std::endl;
	// std::cout << " Double : " << checkDouble(str) << std::endl;
	if (checkException(str) == true)
		isExcept(str);
	 if (checkChar(str) == true)
		isChar(str);
	else if (checkInt(str) == true)
		isInt(str);
	else if (checkFloat(str) == true)
		isFloat(str);
	else if (checkDouble(str) == true)
		isDouble(str); 
}