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

int	main(int argc, char **argv)
{

	if (argc != 2)
	{
		std::cout << "\033[1;31m invalid usage, please test with : [./convert {argument}] \033[m" << std::endl;
		return (1);
	}
	std::string str;
	str = argv[1];
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
	else
		std::cout << "\033[1;31m Invalid input, please enter a char or an int or a float or a double. \033[m" << std::endl;
	return (0);
}