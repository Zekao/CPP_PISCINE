/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaugale <emaugale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 17:22:27 by emaugale          #+#    #+#             */
/*   Updated: 2022/02/13 19:22:10 by emaugale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP
# include <iostream>
# include <stdlib.h>
# include <cstring>

void	addContact(std::string action);
void	affContact(std::string action);

class PhoneBook
{
	private:
		std::string _contact[8];
	public:
		PhoneBook(/* args */);
		~PhoneBook();
};



class Contact
{
	private:
		/* data */
		std::string firstName;
		std::string lastName;
		std::string nickName;
		std::string phoneNumber;
		std::string darkestSecret;
	public:
		Contact();
		~Contact();
		void	list( void ) const;
};




#endif
