/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaugale <emaugale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 13:34:01 by emaugale          #+#    #+#             */
/*   Updated: 2022/03/13 21:30:35 by emaugale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Dog : public Animal
{
	private:
		Brain *_brain;
	public:
		Dog();
		Dog(std::string name);
		Dog(Dog &copy);
		~Dog();
		void makeSound(void) const;
		Dog & operator = ( Dog const & value );
        Brain *getBrain(void) const;
};


#endif