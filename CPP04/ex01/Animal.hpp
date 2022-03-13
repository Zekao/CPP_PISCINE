/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaugale <emaugale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 00:43:00 by emaugale          #+#    #+#             */
/*   Updated: 2022/03/13 21:31:30 by emaugale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>
# include "Brain.hpp"

class Animal
{
	protected:
		std::string _type;
	public:
		Animal();
		Animal(std::string name);
		Animal(Animal &copy);
		virtual ~Animal();
		Animal & operator = ( Animal const & value );
		std::string getType() const;
		void		setType(std::string type);
		virtual	void makeSound() const;
		virtual Brain *getBrain(void) const = 0;
};
#endif