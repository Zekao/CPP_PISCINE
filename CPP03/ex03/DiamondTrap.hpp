/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaugale <emaugale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 06:07:51 by emaugale          #+#    #+#             */
/*   Updated: 2022/03/09 06:52:12 by emaugale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

# include "ClapTrap.hpp"
# include "ScavTrap.hpp"
# include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{
private:
    std::string _name;
    DiamondTrap();
public:
    ~DiamondTrap();
    DiamondTrap(std::string const &name);
    DiamondTrap(DiamondTrap &a);
    void whoAmI();

	DiamondTrap & operator = ( DiamondTrap const & value );

};

#endif