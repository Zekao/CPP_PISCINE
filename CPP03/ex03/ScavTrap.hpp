/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaugale <emaugale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 13:42:56 by emaugale          #+#    #+#             */
/*   Updated: 2022/03/10 05:36:49 by emaugale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"
# include <iostream>

class ScavTrap : public virtual ClapTrap
{
	protected:
		ScavTrap();
	public:
		ScavTrap(std::string const &name);
		ScavTrap(ScavTrap &a);
		~ScavTrap();
		void	attack(const std::string &target);
		void	guardGate();
		ScavTrap & operator = ( ScavTrap const & value );

};

#endif