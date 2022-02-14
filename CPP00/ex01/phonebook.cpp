/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaugale <emaugale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 06:12:52 by emaugale          #+#    #+#             */
/*   Updated: 2022/02/14 03:48:11 by emaugale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "phonebook.hpp"

void	affList()
{
	std::cout << "--------------------------------------------" << std::endl;
	std::cout << "|     index";
	std::cout << "|first name";
	std::cout << "| last name";
	std::cout << "|  nickname|" << std::endl;
	std::cout << "--------------------------------------------" << std::endl;

}

void	PhoneBook::Search()
{
	for (int i = 0; i < 8; i++)
	{
		this->_contact[i].list();
	}
}

void	PhoneBook::Add()
{
	for (int i = 0; i % 8 < 8; i++)
	{
		if (this->_contact[i].isEmpty())
		{
			this->_contact[i].addContact(i);
			return ;
		}
		else if (i >= 8)
		{
			std::cout << "Contact list is full, oldest will be replaced by this new one." << std::endl;
			this->_contact[i % 8].clearContact();
			this->_contact[i % 8].addContact(i % 8);
			return ;
		}
	}
}

void	PhoneBook::Aff(int i)
{
	if (this->_contact[i].isEmpty())
	{
		std::cout << "This contact is empty." << std::endl;
		return ;
	}
	this->_contact[i].affContact();
	return ;
}
PhoneBook::PhoneBook()
{
}
PhoneBook::~PhoneBook()
{
}
