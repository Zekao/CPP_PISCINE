/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaugale <emaugale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 13:19:30 by emaugale          #+#    #+#             */
/*   Updated: 2022/03/13 21:40:11 by emaugale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

#define NUM_ANIMALS 10

int main(void)
{
    Animal  *animals[NUM_ANIMALS];
    Brain    *brain;

    for (int i = 0; i < NUM_ANIMALS; i++)
    {
        if (i < NUM_ANIMALS / 2)
            animals[i] = new Dog;
        else
            animals[i] = new Cat;
        std::cout << "\033[1;33m" << animals[i]->getType() << "\033[0m" << std::endl;
    }
    for (int i = 0; i < NUM_ANIMALS; i++)
    {
        brain = animals[i]->getBrain();
        brain->setIdeas("I will eat human", 0);
        brain->setIdeas("I think I'm kindding", 1);
        brain->setIdeas("I'm not really sure", 2);
    }
    for (int i = 0; i < NUM_ANIMALS; i++)
    {
        brain = animals[i]->getBrain();
        std::cout << brain->getIdeas(0) << std::endl;
    }
    for (int i = 0; i < NUM_ANIMALS; i++)
        delete animals[i];
    return 0;
}