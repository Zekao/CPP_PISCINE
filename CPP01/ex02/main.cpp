/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaugale <emaugale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 08:56:34 by emaugale          #+#    #+#             */
/*   Updated: 2022/02/15 09:16:03 by emaugale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(void)
{
	std::string str = "HI THIS IS BRAIN";
	std::string *ptr = &str;
	std::string &ref = str;

	std::cout << "\033[1;34m string address : \033[m" << &str << std::endl;
	std::cout << "\033[1;33m pointer address: \033[m" << &ptr << std::endl;
	std::cout << "\033[1;32m reference address : \033[m" << &ref << std::endl;

	std::cout << "\033[1;34m string : \033[m" << str << std::endl;
	std::cout << "\033[1;33m pointer : \033[m" << ptr << std::endl;
	std::cout << "\033[1;32m reference : \033[m" << ref << std::endl;
}
