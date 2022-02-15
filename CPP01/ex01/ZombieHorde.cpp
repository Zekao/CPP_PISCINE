/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaugale <emaugale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 07:32:41 by emaugale          #+#    #+#             */
/*   Updated: 2022/02/15 08:51:54 by emaugale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
	if (N <= 0 )
		return (NULL);
	Zombie *zombieHorde = new Zombie[N];
	int	i;

	i = 0;
	while (i < N)
	{
		zombieHorde[i].setName(name);
		i++;
	}
	return (zombieHorde);

}
