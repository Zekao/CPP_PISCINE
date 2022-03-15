/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaugale <emaugale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 00:57:01 by emaugale          #+#    #+#             */
/*   Updated: 2022/03/15 01:48:37 by emaugale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

# include "Form.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"
# include "ShrubberyCreationForm.hpp"

class Intern
{
private:
    /* data */
public:
    Intern(/* args */);
    Intern(Intern & copy);
    ~Intern();
	Intern & operator = ( Intern const & value );
    Form *makeForm(const std::string name, const std::string target);

    class InvalidFormException : public std::exception
	{
	public:
		const char* what() const throw()
		{
			return ("invalid form type");
		}
	};
};

#endif