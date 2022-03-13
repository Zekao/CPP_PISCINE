/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaugale <emaugale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 13:06:40 by emaugale          #+#    #+#             */
/*   Updated: 2022/03/13 22:10:02 by emaugale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Cat : public Animal
{
	private:
		Brain *_brain;
		/* data */
	public:
		Cat();
		Cat(std::string name);
		Cat(Cat &copy);
		~Cat();
        Brain *getBrain(void) const;
		void virtual makeSound(void) const;
};


#endif