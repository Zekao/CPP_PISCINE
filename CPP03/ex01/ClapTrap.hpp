/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaugale <emaugale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 22:58:11 by emaugale          #+#    #+#             */
/*   Updated: 2022/02/25 10:27:56 by emaugale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>

class ClapTrap
{
	private:
		std::string		_name;
		int				_hitPoints;
		int				_energyPoints;
		int				_attackDamage;

	public:
		ClapTrap();
		ClapTrap(std::string const &name);
		ClapTrap(ClapTrap &a);
		~ClapTrap();
		void	attack(const std::string &target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
		std::string	getName() const;
		int			getEnergy() const;
		int			getAttack() const;
		int 		getHP() const;
		void		setDamage(int amount);
		void		setHP(int amount);
		void		setEnergy(int amount);

};

#endif