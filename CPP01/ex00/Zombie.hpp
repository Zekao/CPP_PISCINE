/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaugale <emaugale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 06:30:50 by emaugale          #+#    #+#             */
/*   Updated: 2022/02/15 07:33:16 by emaugale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>

class Zombie
{
	private:
			std::string _name;
	public:
		Zombie(std::string name);
		void	announce (void);
		~Zombie();
};

Zombie*	newZombie( std::string name);
void randomChump( std::string name );

#endif
