/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaugale <emaugale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 23:45:50 by emaugale          #+#    #+#             */
/*   Updated: 2022/03/09 06:22:43 by emaugale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int	main(void)
{
	// ClapTrap	test0("bee");
	DiamondTrap test("roger");
	std::cout << "=========================" << std::endl;
	std::cout << "HP (from FragTrap): " << test.getHP() << std::endl;
	std::cout << "Energy (from ScavTrap): " << test.getEnergy() << std::endl;
	std::cout << "Attack (from FragTrap): " << test.getAttack() << std::endl;
	test.attack("michel");
	test.whoAmI();
}