/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaugale <emaugale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 09:41:51 by emaugale          #+#    #+#             */
/*   Updated: 2022/02/15 10:36:10 by emaugale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

# include "Weapon.hpp"

class HumanB
{
	private:
		/* data */
		std::string	_name;
		std::string _weaponType;
	public:
		HumanB(std::string name);
		~HumanB();
		void attack() const;
		void setWeapon(Weapon weapon);
};

HumanB::HumanB(std::string name)
{
	_name = name;
}

HumanB::~HumanB()
{
}

void	HumanB::attack(void) const
{
	std::cout << _name << "attacks with their " << _weaponType << std::endl;
}

void	HumanB::setWeapon(Weapon weapon)
{
	this->_weaponType = weapon.getType();
}

#endif
