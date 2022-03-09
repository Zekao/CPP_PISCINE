/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaugale <emaugale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 23:45:50 by emaugale          #+#    #+#             */
/*   Updated: 2022/03/09 04:56:11 by emaugale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int	main(void)
{
	FragTrap test("Roland");
	std::cout << "Created a ScavTrap named : " << test.getName() << std::endl;
	FragTrap test2;
	std::cout << "Created a ScavTrap without name" << std::endl;
	std::cout << "Changing no_name stats to " << test.getName() << " ones" << std::endl;
	test2 = test;
	std::cout << "Different stats of my FragTrap : " <<std::endl;
	std::cout << "----------------------------------" << std::endl;
	std::cout << "Attack : " << test.getAttack() << std::endl;
	std::cout << "HP : " << test.getHP() << std::endl;
	std::cout << "Energy : " << test.getEnergy() << std::endl;
	std::cout << "----------------------------------" << std::endl;
	test.attack("Zer0");
	test.attack("Roland");
	test.attack("Lili");
	std::cout << "ScavTrap lost 42 hp" << std::endl;
	test.takeDamage(42);
	test.beRepaired(21);
	std::cout << "Different stats of my FragTrap : " <<std::endl;
	std::cout << "----------------------------------" << std::endl;
	std::cout << "Attack : " << test.getAttack() << std::endl;
	std::cout << "HP : " << test.getHP() << std::endl;
	std::cout << "Energy : " << test.getEnergy() << std::endl;
	std::cout << "----------------------------------" << std::endl;
	std::cout << "Different stats of my FragTrap 2 : " <<std::endl;
	std::cout << "----------------------------------" << std::endl;
	std::cout << "Attack : " << test2.getAttack() << std::endl;
	std::cout << "HP : " << test2.getHP() << std::endl;
	std::cout << "Energy : " << test2.getEnergy() << std::endl;
	std::cout << "----------------------------------" << std::endl;
	test.highFivesGuys();
}