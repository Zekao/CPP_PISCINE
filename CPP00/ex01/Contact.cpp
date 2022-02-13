/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaugale <emaugale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 09:55:18 by emaugale          #+#    #+#             */
/*   Updated: 2022/02/13 19:21:20 by emaugale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

void	Contact::list(void) const
{
	std::cout << this->firstName << std::endl;
	std::cout << this->lastName << std::endl;
	std::cout << this->nickName << std::endl;
	std::cout << this->phoneNumber << std::endl;
}

Contact::Contact(/* args */)
{
	std::string action;
	std::cout << "Test constructor" << std::endl;
	std::getline(std::cin, action);
}

Contact::~Contact()
{

};
