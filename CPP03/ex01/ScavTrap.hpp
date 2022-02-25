/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaugale <emaugale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 13:42:56 by emaugale          #+#    #+#             */
/*   Updated: 2022/02/25 10:25:37 by emaugale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"
# include <iostream>
class ScavTrap : public ClapTrap
{
	private:
		std::string	_name;
	// 	int			_attackDamage;
	// 	int			_energyPoints;
	// 	int			_hitPoints;
	public:
		ScavTrap(std::string const &name);
		void	attack(const std::string &target);
		~ScavTrap();
		void	guardGate();

};

#endif
