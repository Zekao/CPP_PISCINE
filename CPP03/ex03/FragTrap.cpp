/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaugale <emaugale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 04:13:56 by emaugale          #+#    #+#             */
/*   Updated: 2022/03/10 15:57:02 by emaugale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
    std::cout << "FragTrap Constructor called" << std::endl;
    this->_attackDamage = 30;
    if (!_energyPoints)
        this->_energyPoints = 100;
    this->_hitPoints = 100;
}

FragTrap::FragTrap(std::string const &name)
{
    std::cout << "FragTrap Constructor called" << std::endl;
	this->_name = name;
    this->_attackDamage = 30;
    if (!_energyPoints)
        this->_energyPoints = 100;
    this->_hitPoints = 100;
}

FragTrap::FragTrap(FragTrap &a)
{
    std::cout << "FragTrap copy Constructor called" << std::endl;
	this->_name = a.getName();
	this->_hitPoints = a.getEnergy();
    if (!_energyPoints)
	    this->_energyPoints = a.getAttack();
	this->_attackDamage = a.getHP();
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap destructor called" << std::endl;
}

void    FragTrap::highFivesGuys(void) const
{
    std::cout << _name << ": Wanna high five ?" << std::endl;
}

FragTrap & FragTrap::operator=( FragTrap const & value )
{
        std::cout << "Copy assignement operator called" << std::endl;
		this->_name = value.getName();
		this->_hitPoints = value.getHP();
		this->_energyPoints = value.getEnergy();
		this->_attackDamage = value.getAttack();
        return (*this);
}
