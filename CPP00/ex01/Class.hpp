/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Class.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaugale <emaugale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 03:49:06 by emaugale          #+#    #+#             */
/*   Updated: 2022/02/14 03:49:52 by emaugale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLASS_HPP
# define CLASS_HPP
# include <iostream>
# include <stdlib.h>
# include <cstring>
# include <stdbool.h>

class Contact
{
	private:
		int _Index;
		std::string _firstName;
		std::string _lastName;
		std::string _nickName;
		std::string _phoneNumber;
		std::string _darkestSecret;
	public:
		Contact();
		~Contact();
		void	list( void ) const;
		void	addContact(int i);
		void	affContact(void);
		void	clearContact(void);
		bool	isEmpty(void);
};

#endif
