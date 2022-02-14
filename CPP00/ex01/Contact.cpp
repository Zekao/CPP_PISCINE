/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaugale <emaugale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 09:55:18 by emaugale          #+#    #+#             */
/*   Updated: 2022/02/14 20:10:53 by emaugale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"


bool	checkVal(std::string str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if(isdigit(str[i]) == 0)
			return (false);
		i++;
	}
	return (true);
}

void	Contact::list(void) const
{
	if (this->_firstName.compare("") == 0)
		return ;
	std::cout<< "|";
	for (int i = 0; i < 9; i++)
		std::cout << " ";
	std::cout << static_cast<int16_t>(_Index) << "|";
	if (_firstName.size() < 10)
	{
		for(int i = 0 + _firstName.size(); i < 10; i++)
			std::cout << " ";
		std::cout << this->_firstName << "|";
	}
	else
		std::cout << this->_firstName.substr(0, 9) << ".|";
	if (_lastName.size() < 10)
	{
		for(int i = 0 + _lastName.size(); i < 10; i++)
			std::cout << " ";
		std::cout << this->_lastName << "|";
	}
	else
		std::cout << this->_lastName.substr(0, 9) << ".|";
	if (_nickName.size() < 10)
	{
		for(int i = 0 + _nickName.size(); i < 10; i++)
			std::cout << " ";
		std::cout << this->_nickName << "|";
	}
	else
		std::cout << this->_nickName.substr(0, 9) << ".|";
	std::cout << std::endl;
	std::cout << "--------------------------------------------" << std::endl;
}

bool	Contact::isEmpty(void)
{
	if (this->_firstName.compare("") == 0)
		return (true);
	return (false);
}

Contact::Contact()
{
	this->_firstName = "";
	this->_lastName = "";
	this->_nickName = "";
	this->_phoneNumber = "";
	this->_darkestSecret = "";
}

Contact::~Contact()
{

};


void	Contact::affContact(void)
{
	std::cout << "--------------------------------------------" << std::endl;
	std::cout << "Differents informations of the contact :" << std::endl;
	std::cout << "--------------------------------------------" << std::endl;
	std::cout << "First Name : ";
	std::cout << this->_firstName << std::endl;
	std::cout << "Last Name : ";
	std::cout << this->_lastName << std::endl;
	std::cout << "Nickname : ";
	std::cout << this->_nickName << std::endl;
	std::cout << "Phone Number : ";
	std::cout << this->_phoneNumber << std::endl;
	std::cout << "Darkest Secret : ";
	std::cout << this->_darkestSecret << std::endl;
}

void	Contact::clearContact(void)
{
	_firstName = "";
	_lastName = "";
	_nickName = "";
	_phoneNumber = "";
	_darkestSecret = "";
}

void	Contact::addContact(int i)
{

	this->_Index = i;
	while (this->_firstName == "")
	{
		std::cout << "First Name: ";
		if (!(std::getline(std::cin, this->_firstName)))
			exit (0);
		if (this->_firstName == "")
			std::cout << "Please enter a valid input" << std::endl;
	}
	while (this->_lastName == "")
	{
		std::cout << "Last Name: ";
		if (!(std::getline(std::cin, this->_lastName)))
			exit (0);
		if (this->_lastName == "")
			std::cout << "Please enter a valid input" << std::endl;
	}
	while (this->_nickName == "")
	{
		std::cout << "Nickname: ";
		if (!(std::getline(std::cin, this->_nickName)))
			exit (0);
		if (this->_nickName == "")
			std::cout << "Please enter a valid input" << std::endl;
	}
	while (this->_phoneNumber == "" || checkVal(_phoneNumber) == false)
	{
		std::cout << "Phone Number: ";
		if (!(std::getline(std::cin, this->_phoneNumber)))
			exit (0);
		if (this->_phoneNumber == "" || checkVal(_phoneNumber) == false)
			std::cout << "Please enter a valid input" << std::endl;
	}
	while (this->_darkestSecret == "")
	{
		std::cout << "Darkest Secret: ";
		if (!(std::getline(std::cin, this->_darkestSecret)))
			exit (0);
		if (this->_darkestSecret == "")
			std::cout << "Please enter a valid input" << std::endl;
	}
	std::cout << "Correctly added the contact." << std::endl;
}
