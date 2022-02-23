/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaugale <emaugale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 23:45:50 by emaugale          #+#    #+#             */
/*   Updated: 2022/02/23 01:44:39 by emaugale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap test("Le Bo Jack");
	std::cout << "\033[1;31mEnergy level of my claptrap : \033[m" << test.getEnergy() << std::endl;
	test.setEnergy(3);
	test.attack("Zer0");
	std::cout << "\033[1;31mEnergy level of my claptrap : \033[m" << test.getEnergy() << std::endl;
	std::cout << "\033[0;34mHP of my ClapTrap : " << test.getHP() << "\033[m" << std::endl;
	test.takeDamage(42);
	std::cout << "\033[0;34mHP of my ClapTrap : " << test.getHP() << "\033[m" << std::endl;
	test.beRepaired(31);
	std::cout << "\033[1;31mEnergy level of my claptrap : \033[m" << test.getEnergy() << std::endl;
	std::cout << "HP of my ClapTrap :" << test.getHP() << std::endl;

}
