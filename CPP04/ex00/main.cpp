/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaugale <emaugale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 13:19:30 by emaugale          #+#    #+#             */
/*   Updated: 2022/03/11 23:57:26 by emaugale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main(void)
{
    std::cout << "====================" << std::endl;
    std::cout << "Creating : " << std::endl;
    std::cout << "====================" << std::endl;
    std::cout << "An animal" << std::endl;
    const Animal* meta = new Animal("Fox");
    std::cout << "A cat" << std::endl;
    const Animal* i = new Cat();
    std::cout << "A dog" << std::endl;
    const Animal* j = new Dog();
    std::cout << "A weird animal" << std::endl;
    const WrongAnimal* k = new WrongCat();
    std::cout << "\033[1;33m====================" << std::endl;
    std::cout << "Type of all animals : " << std::endl;
    std::cout << "====================\033[m" << std::endl;
    
    std::cout << meta->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    std::cout << j->getType() << " " << std::endl;
    std::cout << k->getType() << " " << std::endl;
    
    std::cout << "\033[1;32m====================" << std::endl;
    std::cout << "Sounds of all animals : " << std::endl;
    std::cout << "====================\033[m" << std::endl;
    
    i->makeSound(); // CAT
    j->makeSound(); // DOG
    meta->makeSound(); // ANIMAL -> FOX -> no specified sound asked
    k->makeSound(); // WRONG 
    
    std::cout << "\033[1;31m====================" << std::endl;
    std::cout << "Deleting all animals : " << std::endl;
    std::cout << "====================\033[m" << std::endl;
    
    delete i;
    delete j;
    delete k;
    delete meta;
}