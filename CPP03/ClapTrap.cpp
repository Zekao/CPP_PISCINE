/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaugale <emaugale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 23:00:44 by emaugale          #+#    #+#             */
/*   Updated: 2022/02/23 01:41:07 by emaugale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name)
{
	std::cout << "Constructor called" << std::endl;
	this->_name = name;
	this->_hitPoints = 10;
	this->_energyPoints = 10;
	this->_attackDamage = 10;
}

ClapTrap::~ClapTrap()
{
	std::cout << "\033[0;31mDestructor called\033[m" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap &a)
{
	std::cout << "Copy constructor called" << std::endl;
	this->_name = a.getName();
	this->_hitPoints = a.getHP();
	this->_energyPoints = a.getEnergy();
	this->_attackDamage = a.getAttack();
}

std::string	ClapTrap::getName()
{
	return(this->_name);
}
int		ClapTrap::getAttack()
{
	return(this->_attackDamage);
}

int		ClapTrap::getEnergy()
{
	return(this->_energyPoints);
}

int		ClapTrap::getHP()
{
	return(this->_hitPoints);
}

void	ClapTrap::setDamage(int amount)
{
	this->_attackDamage = amount;
}

void	ClapTrap::setHP(int amount)
{
	this->_hitPoints = amount;
}

void	ClapTrap::setEnergy(int amount)
{
	this->_energyPoints = amount;
}

void	ClapTrap::attack(const std::string &target)
{
	if ( _energyPoints <= 0)
		return ;
	std::cout << "\033[0;36mClapTrap " << getName() << " attacked " << target << "\033[m" <<std::endl;
	setEnergy(_energyPoints - 1);
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	_hitPoints -= amount;
	std::cout << "ClapTrap " << getName() << " take " << amount << " hp of damages " << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if ( _energyPoints <= 0)
		return ;
	std::cout << "\033[1;32mClapTrap " << getName() << " regained " << amount << " hp \033[m" << std::endl;
	_hitPoints += amount;
	setEnergy(_energyPoints - 1);

}


