/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaugale <emaugale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 19:48:09 by emaugale          #+#    #+#             */
/*   Updated: 2022/02/14 20:05:30 by emaugale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

int	main(void)
{
	PhoneBook	Book;

	std::string	action;
	std::cout << "Welcome to my PhoneBook, different usages : ADD, SEARCH, EXIT" << std::endl;
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
			Book.Add();
		}
		else if (action == "SEARCH")
		{
			std::cout << "Which contact do you want to see?" << std::endl;
			affList();
			Book.Search();
			while (42)
			{
				if (!std::getline(std::cin, action))
					exit (1);
				if (action == "EXIT")
					break ;
				if (checkVal(action) == true && atoi(action.c_str()) < 9 && action != "")
					Book.Aff(atoi(action.c_str()));
				else
					std::cout << "Incorrect or empty index" << std::endl;
				break ;
			}
		}
		else
			std::cout << "Please enter a valid command (ADD, SEARCH, EXIT)" << std::endl;
	}
}
