/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaugale <emaugale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 06:46:36 by emaugale          #+#    #+#             */
/*   Updated: 2022/02/15 08:51:31 by emaugale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main()
{
	std::string nbr;

	std::string name;
	std::cout << "How many zombies do you want? : ";
	std::getline(std::cin, nbr);
	std::cout << "Ok, now what will be their name? (Yes they all have the same name) : ";
	std::getline(std::cin, name);
	std::cout << "Creating an Horde of " << nbr << " zombies named " << name << std::endl;
	Zombie *Horde = zombieHorde(atoi(nbr.c_str()), name);
	if (!Horde)
		return (1);
	std::cout << "\033[1;34m Watching the status of my dear Horde\033[m" << std::endl;
	std::cout << "\033[1;34m----------------------------------------------\033[m" << std::endl;
	/* ===================================================== */
	/* 				Initialisation of the horde				 */
	/* ===================================================== */
	int	i = 0;

	while (i < atoi(nbr.c_str()))
	{
		Horde[i].announce();
		i++;
	}
	std::cout << "\033[1;34m----------------------------------------------\033[m" << std::endl;
	std::cout << "\033[1;34m Now it's time to destroy my Horde\033[m" << std::endl;
	std::cout << "\033[1;34m----------------------------------------------\033[m" << std::endl;
	delete [] Horde;
	std::cout << "\033[1;34m----------------------------------------------\033[m" << std::endl;

}
