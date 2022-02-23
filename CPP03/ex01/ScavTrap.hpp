/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaugale <emaugale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 13:42:56 by emaugale          #+#    #+#             */
/*   Updated: 2022/02/23 17:09:13 by emaugale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"
# include <iostream>
class ScavTrap : private ClapTrap
{
	private:
		std::string	_name;
		int			_attackDamage;
		int			_energyPoints;
		int			_hitPoints;
	public:
		ScavTrap(std::string name);
		~ScavTrap();
		std::string	getName();
		int			getEnergy();
		int			getAttack();
		int 		getHP();
		void	guardGate();
		void	attack(const std::string &target);

};

#endif
