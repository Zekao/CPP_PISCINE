/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaugale <emaugale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 23:28:40 by emaugale          #+#    #+#             */
/*   Updated: 2022/02/15 23:28:40 by emaugale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& wp)
{
	_name = name;
	this->_weapon = &wp;

}

HumanA::~HumanA()
{
}

void	HumanA::attack(void) const
{
	std::cout << "\033[1;32m" <<  _name << "\033[m \033[1;34mattacks with their \033[m" << "\033[1;31m" << _weapon->getType() << "\033[m" << std::endl;
}