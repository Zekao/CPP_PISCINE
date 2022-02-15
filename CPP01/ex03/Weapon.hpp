/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaugale <emaugale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 09:22:05 by emaugale          #+#    #+#             */
/*   Updated: 2022/02/15 10:24:41 by emaugale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <iostream>

class Weapon
{
private:
	std::string _type;
public:
	Weapon(std::string weapon);
	~Weapon();
	std::string & getType();
	void setType(std::string newType);
};

std::string & Weapon::getType()
{
	return (this->_type);
}

void	Weapon::setType(std::string newType)
{
	_type = newType;
}
Weapon::Weapon(std::string weapon)
{
	this->_type = weapon;
}

Weapon::~Weapon()
{
}


#endif
