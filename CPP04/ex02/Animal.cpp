/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaugale <emaugale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 00:43:10 by emaugale          #+#    #+#             */
/*   Updated: 2022/03/13 21:25:06 by emaugale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
	this->_type = "no type";
	std::cout << "Animal default constructor called" << std::endl;	
}

Animal::Animal(std::string name)
{
	this->_type = name;
	std::cout << "Animal default constructor called" << std::endl;	
}

Animal::Animal(Animal &copy)
{
	std::cout << "Animal copy constructor called" << std::endl;	
	*this = copy;
}


Animal & Animal::operator=( Animal const & value )
{
		std::cout << "Copy assignement operator called" << std::endl;
		this->_type = value.getType();
		return (*this);
}

Animal::~Animal()
{
	std::cout << "Animal destructor called" << std::endl;
}

void Animal::makeSound(void) const
{
	std::cout << "What does the " << _type << " says?" << std::endl;
}

std::string Animal::getType(void) const
{
	return (this->_type);
}

void	Animal::setType(std::string type)
{
	this->_type = type;
}
