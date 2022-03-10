/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaugale <emaugale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 06:07:51 by emaugale          #+#    #+#             */
/*   Updated: 2022/03/10 05:48:38 by emaugale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

# include "ClapTrap.hpp"
# include "ScavTrap.hpp"
# include "FragTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap
{
	private:
		std::string _name;
	public:
		DiamondTrap();
		DiamondTrap(std::string const &name);
		DiamondTrap(DiamondTrap &a);
		~DiamondTrap();
		void whoAmI();
		void attack(const std::string & target);
		DiamondTrap & operator = ( DiamondTrap const & value );

};

#endif
