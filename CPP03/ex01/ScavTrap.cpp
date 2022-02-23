/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaugale <emaugale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 16:46:01 by emaugale          #+#    #+#             */
/*   Updated: 2022/02/23 17:09:44 by emaugale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name)
{
	this->_name = name;
	this->_attackDamage = 100;
	this->_energyPoints = 50;
	this ->_attackDamage = 20;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap destructor called" << std::endl;
}

void	ScavTrap::attack(const std::string &target)
{
	std::cout << "\033[0;36mScavTrap " << getName() << " attacked " << target << "\033[m" <<std::endl;
}

void	ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << getName() << " entered in Gate keeper mode." << std::endl;
}

std::string	ScavTrap::getName()
{
	return(this->_name);
}
int		ScavTrap::getAttack()
{
	return(this->_attackDamage);
}

int		ScavTrap::getEnergy()
{
	return(this->_energyPoints);
}

int		ScavTrap::getHP()
{
	return(this->_hitPoints);
}
