/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaugale <emaugale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 16:46:01 by emaugale          #+#    #+#             */
/*   Updated: 2022/02/25 10:25:25 by emaugale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string const &name)
{
	std::cout << "ScavTrap constructor called" << std::endl;
	this->_name = name;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap destructor called" << std::endl;
}

void	ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << getName() << " entered in Gate keeper mode." << std::endl;
}

void	ScavTrap::attack(const std::string &target)
{
	std::cout << "\033[0;36mScavTrap " << getName() << " attacked " << target << "\033[m" <<std::endl;
}
