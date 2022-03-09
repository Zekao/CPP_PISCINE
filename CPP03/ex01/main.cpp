/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaugale <emaugale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 23:45:50 by emaugale          #+#    #+#             */
/*   Updated: 2022/03/09 05:02:56 by emaugale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int	main(void)
{
	ScavTrap test("yo");
	ScavTrap yo("test");
	// yo = test;
	std::cout << "Amount of life of ScavTrap : " << test.getHP() << std::endl;
	std::cout << "\033[1;31mEnergy level of my ScavTrap : \033[m" << test.getEnergy() << std::endl;
	test.attack("michel");
	std::cout << "\033[1;31mEnergy level of my ScavTrap : \033[m" << test.getEnergy() << std::endl;
	test.guardGate();
	test.attack("test2");
	test.beRepaired(35);
	std::cout << "Changing the energy level of my ScavTrap to 1" << std::endl;
	test.setEnergy(1);
	test.beRepaired(600);
	test.beRepaired(785);
	std::cout << "\033[1;31mEnergy level of my claptrap : \033[m" << test.getEnergy() << std::endl;
	std::cout << "Amount of life of ScavTrap : " << test.getHP() << std::endl;
	std::cout << "Amount of life of ScavTrap : " << yo.getHP() << std::endl;
	yo = test;
	std::cout << "Amount of life of ScavTrap : " << yo.getHP() << std::endl;
}