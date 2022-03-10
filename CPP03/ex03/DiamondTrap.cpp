/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaugale <emaugale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 06:07:53 by emaugale          #+#    #+#             */
/*   Updated: 2022/03/10 04:44:30 by emaugale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"
#include "ClapTrap.hpp"

DiamondTrap::DiamondTrap()
{
    std::cout << "DiamontTrap default constructor called" << std::endl;
	this->_hitPoints = FragTrap::_hitPoints;
	this->_energyPoints = ScavTrap::_energyPoints;
	this->_attackDamage = FragTrap::_attackDamage;
}

DiamondTrap::~DiamondTrap()
{
    std::cout << "DiamontTrap destructor called" << std::endl;
}

DiamondTrap::DiamondTrap(std::string const &name)
{
    std::cout << "DiamontTrap constructor called" << std::endl;
	this->_name = name;
	this->_hitPoints = FragTrap::_hitPoints;
	this->_energyPoints = ScavTrap::_energyPoints;
	this->_attackDamage = FragTrap::_attackDamage;
}

DiamondTrap::DiamondTrap(DiamondTrap &a)
{
    std::cout << "DiamondTrap copy Constructor called" << std::endl;
	*this = a;
}

DiamondTrap & DiamondTrap::operator=( DiamondTrap const & value )
{
        std::cout << "Copy assignement operator called" << std::endl;
		this->_name = value.getName();
		this->_hitPoints = value.getHP();
		this->_energyPoints = value.getEnergy();
		this->_attackDamage = value.getAttack();
        return (*this);
}

void DiamondTrap::whoAmI()
{
	std::cout << " Name : " << _name;
	std::cout << " ClapTrap name :" << ClapTrap::_name << std::endl;
}
