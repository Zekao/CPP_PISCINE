/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaugale <emaugale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 23:45:50 by emaugale          #+#    #+#             */
/*   Updated: 2022/03/10 15:34:01 by emaugale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int	main(void)
{
	DiamondTrap test("Zer0");
	std::cout << "=========================" << std::endl;
	std::cout << "HP (from FragTrap): " << test.getHP() << std::endl;
	std::cout << "Energy (from ScavTrap): " << test.getEnergy() << std::endl;
	std::cout << "Attack (from FragTrap): " << test.getAttack() << std::endl;

	FragTrap test2("Lili");
	std::cout << "=========================" << std::endl;
	std::cout << "Creating a FragTrap to compare stats" << std::endl;
	std::cout << "FragTrap life : " << test2.getHP() << std::endl;
	std::cout << "DiamondTrap Life : " << test.getHP() << std::endl;
	std::cout << "FragTrap attack : " << test2.getAttack() << std::endl;
	std::cout << "DiamondTrap attack : " << test.getAttack() << std::endl;
	std::cout << "=========================" << std::endl;
	
	ScavTrap test3("Roland");
	std::cout << "Creating a ScavTrap to compare stats" << std::endl;
	std::cout << "ScavTrap energy : " << test3.getEnergy() << std::endl;
	std::cout << "DiamondTrap energy : " << test.getEnergy() << std::endl;

	std::cout << "=========================" << std::endl;
	std::cout << "Testing whoami function" << std::endl;
	test.whoAmI();
	std::cout << "=========================" << std::endl;
	std::cout << "Testing attack function" << std::endl;
	test.attack("Jack");
}