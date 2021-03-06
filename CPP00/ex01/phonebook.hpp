/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaugale <emaugale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 17:22:27 by emaugale          #+#    #+#             */
/*   Updated: 2022/02/14 03:50:05 by emaugale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP
# include "Class.hpp"
# include <iostream>
# include <stdlib.h>
# include <cstring>
# include <stdbool.h>


void	affList();
bool	checkVal(std::string str);



class PhoneBook
{
	private:
		Contact _contact[8];
	public:
		PhoneBook(/* args */);
		~PhoneBook();
		void	Search(void);
		void	Add(void);
		void	Aff(int i);

};


#endif
