/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaugale <emaugale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 02:49:12 by emaugale          #+#    #+#             */
/*   Updated: 2022/02/16 02:49:12 by emaugale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

int main()
{
	Karen karen;
	std::string	str;
	std::cout << "\033[1;32m Please select a complain mode (debug, info, warning, error): \033[m";
	if (!(std::getline(std::cin, str)))
		return (1);
	karen.complain(str);
}