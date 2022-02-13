/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaugale <emaugale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 06:12:52 by emaugale          #+#    #+#             */
/*   Updated: 2022/02/13 19:22:38 by emaugale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "phonebook.hpp"

void	affList()
{
	std::cout << "--------------------------------------------" << std::endl;
	std::cout << "|     index";
	std::cout << "|first name";
	std::cout << "| last name";
	std::cout << "| nickname|" << std::endl;
	std::cout << "--------------------------------------------" << std::endl;

}

void	affContact(std::string action)
{
	std::cout  << "test aff" << std::endl;
}

void	addContact(std::string action)
{
	std::string res;

	std::cout << "First Name" << std::endl;
	std::cin >>	res;
	std::cout << "Last Name" << std::endl;
	std::cin >>	res;
	std::cout << "Nickname" << std::endl;
	std::cin >>	res;
	std::cout << "Phone Number" << std::endl;
	std::cin >>	res;
	std::cout << "Correctly added the contact." << std::endl;
}

//constructor
PhoneBook::PhoneBook(/* args */)
{
}
//destructor
PhoneBook::~PhoneBook()
{
}

int	main(void)
{
	std::string	action;
	std::cout << "Welcome to my PhoneBook, different usages : ADD, SEARCH EXIT" << std::endl;
	while (42)
	{
		if (!std::getline(std::cin, action))
		{
			std::cout << "Exited the PhoneBook with an EOF" << std::endl;
			exit(1);
		}
		if (action == "EXIT")
			exit(0);
		else if (action == "ADD")
		{
			addContact(action);
			if (!std::getline(std::cin, action))
				exit (1);
		}
		else if (action == "SEARCH")
		{
			std::cout << "Which contact do you want to see?" << std::endl;
			affList();
			while (42)
			{
				if (!std::getline(std::cin, action))
					exit (1);
				if (action == "EXIT")
					break ;
				affContact(action);
				break ;
			}
		}
		else
			std::cout << "Please enter a valid command" << std::endl;
	}
}
