/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaugale <emaugale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 09:35:35 by emaugale          #+#    #+#             */
/*   Updated: 2022/02/15 10:31:36 by emaugale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

# include "Weapon.hpp"

class HumanA
{
	private:
		std::string	_name;
		std::string _weaponType;
	public:
		HumanA(std::string name, Weapon weapon);
		~HumanA();
		void attack() const;
};

HumanA::HumanA(std::string name, Weapon wp)
{
	_name = name;
}

HumanA::~HumanA()
{
}

void	HumanA::attack(void) const
{
	std::cout << _name << "attacks with their " << _weaponType << std::endl;
}


#endif
