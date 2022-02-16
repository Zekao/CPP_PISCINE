/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaugale <emaugale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 09:21:49 by emaugale          #+#    #+#             */
/*   Updated: 2022/02/16 10:26:28 by emaugale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"
#include <unistd.h>
#include <stdlib.h>

int	main()
{
	std::string	name;
	std::string	weapon;
	std::cout << "Please enter a name Human A : ";
	if (!std::getline(std::cin, name))
		exit (1);
	std::cout << "Please enter a name for the weapon : ";
	if (!std::getline(std::cin, weapon))
		exit (1);
	Weapon weapon1 = Weapon(weapon);
	HumanA number1(name, weapon1);
	number1.attack();
	std::cout << "Please enter a name Human B: ";
	if (!std::getline(std::cin, name))
		exit (1);
	std::cout << "Please enter a name for the weapon : ";
	if (!std::getline(std::cin, weapon))
		exit (1);
	Weapon weapon2 = Weapon(weapon);
	HumanA number2(name, weapon2);
	number2.attack();
	std::cout << "Please enter a new name for the weapon : ";
	if (!std::getline(std::cin, weapon))
		exit (1);
	weapon2.setType(weapon);
	number2.attack();
	return (0);

}
