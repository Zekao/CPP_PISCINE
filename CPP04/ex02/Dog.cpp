/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaugale <emaugale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 13:22:11 by emaugale          #+#    #+#             */
/*   Updated: 2022/03/13 22:02:15 by emaugale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"

Dog::Dog()
{
    std::cout << "Default Dog constructor called" << std::endl;
    Animal::_type = "Dog";
    _brain = new Brain();
}

Dog::Dog(Dog &copy)
{
    std::cout << "Copy Dog constructor called" << std::endl;
	this->_type = copy.getType();
    _brain = new Brain();
}

Dog::~Dog()
{
    std::cout << "Dog destructor called" << std::endl;
    delete _brain;
}

Dog & Dog::operator=( Dog const & value )
{
		std::cout << "Copy assignement operator called" << std::endl;
		this->_type = value.getType();
		return (*this);
}

void Dog::makeSound(void) const
{
	std::cout << "wouf wouf" << std::endl;
}

Brain *Dog::getBrain(void)const
{
    return (this->_brain);
}