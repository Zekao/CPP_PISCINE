/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaugale <emaugale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 13:34:01 by emaugale          #+#    #+#             */
/*   Updated: 2022/03/11 22:56:23 by emaugale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"

class Dog : public Animal
{
	private:
		/* data */
	public:
		Dog();
		Dog(std::string name);
		Dog(Dog &copy);
		~Dog();
		void makeSound(void) const;
		Dog & operator = ( Dog const & value );

};


#endif