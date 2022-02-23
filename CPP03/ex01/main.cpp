/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaugale <emaugale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 23:45:50 by emaugale          #+#    #+#             */
/*   Updated: 2022/02/23 17:08:29 by emaugale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
int	main(void)
{
	ScavTrap test("Jack");
	std::cout << "\033[1;31mEnergy level of my claptrap : \033[m" << test.getEnergy() << std::endl;

}
