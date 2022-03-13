/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaugale <emaugale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 13:22:11 by emaugale          #+#    #+#             */
/*   Updated: 2022/03/13 21:28:02 by emaugale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"

Cat::Cat()
{
    std::cout << "Default cat constructor called" << std::endl;
    Animal::_type = "Cat";
    _brain = new Brain();
}

Cat::Cat(Cat &copy)
{
    std::cout << "Cat copy constructor called" << std::endl;
    *this = copy;
    _brain = new Brain();
}

Cat::~Cat()
{
    std::cout << "Cat destructor called" << std::endl;
    delete _brain;
}

void Cat::makeSound(void) const
{
	std::cout << "miaou" << std::endl;
}

Brain *Cat::getBrain(void)const
{
    return (this->_brain);
}