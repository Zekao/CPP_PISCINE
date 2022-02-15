/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaugale <emaugale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 06:30:50 by emaugale          #+#    #+#             */
/*   Updated: 2022/02/15 08:43:05 by emaugale         ###   ########.fr       */
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
		Zombie();
		~Zombie();
		void	announce (void);
		void	setName(std::string name);
		std::string getName(void);

};

Zombie* zombieHorde( int N, std::string name );
#endif
