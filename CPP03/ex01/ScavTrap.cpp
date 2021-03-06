/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaugale <emaugale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 16:46:01 by emaugale          #+#    #+#             */
/*   Updated: 2022/03/09 05:02:19 by emaugale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
	std::cout << "ScavTrap constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string const &name)
{
	this->_name = name;
}

ScavTrap::ScavTrap(ScavTrap &a)
{
	this->_name = a.getName();
	this->_hitPoints = a.getEnergy();
	this->_energyPoints = a.getAttack();
	this->_attackDamage = a.getHP();
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
	setEnergy(_energyPoints - 1);
}

ScavTrap & ScavTrap::operator=( ScavTrap const & value )
{
        std::cout << "Copy assignement operator called" << std::endl;
		this->_name = value.getName();
		this->_hitPoints = value.getHP();
		this->_energyPoints = value.getEnergy();
		this->_attackDamage = value.getAttack();
        return (*this);
}
