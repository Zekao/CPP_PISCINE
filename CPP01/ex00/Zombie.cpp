/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaugale <emaugale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 06:30:38 by emaugale          #+#    #+#             */
/*   Updated: 2022/02/15 07:29:37 by emaugale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name)
{
	this->_name = name;
	announce();
}

Zombie::~Zombie()
{
	std::cout << _name << "\033[1;31m took a bullet in the head and died\033[m" << std::endl;
}

void	Zombie::announce (void)
{
	std::cout << _name << ": ";
	std::cout << "\033[1;32m BraiiiiiiinnnzzzZ...\033[m" << std::endl;
}

