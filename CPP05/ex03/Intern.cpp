/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaugale <emaugale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 00:59:48 by emaugale          #+#    #+#             */
/*   Updated: 2022/03/15 02:06:37 by emaugale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern()
{
    std::cout << "Intern Default constructor called" << std::endl;
}

Intern::Intern(Intern &copy)
{
    std::cout << "Intern Copy constructor called" << std::endl;
    *this = copy;
}

Intern::~Intern()
{
    std::cout << "Intern destructor called" << std::endl;
}

Intern & Intern::operator=( Intern const & value )
{
	std::cout << "Copy assignement operator called" << std::endl;
	(void)value;
    return (*this);
}

static Form *new_Robotomy(std::string target)
{
    Form *Robotomy = new RobotomyRequestForm(target);
    return (Robotomy);
}

static Form *new_President(std::string target)
{
    Form *President = new PresidentialPardonForm(target);
    return (President);
}

static Form *new_Shrub(std::string target)
{
    Form *Shrub = new ShrubberyCreationForm(target);
    return (Shrub);
}

Form *Intern::makeForm(const std::string form, const std::string target)
{
	Form	*(*fct[3])(std::string target) = { new_Robotomy, new_President, new_Shrub};
	std::string Names[3] = {
		"shrubbery creation",
		"robotomy request",
		"presidential pardon"
	};
	Form	*ret = NULL;
	for (int i = 0; i < 3; i++)
	{
		if (Names[i] == form)
		{
			ret = fct[i](target);
		}
	}
	if (ret)
	{
		std::cout << "Intern creates" << target << std::endl;
		std::cout << "Stats of the class : Execution grade : " << ret->getGradeExec() << " Sign grade : " << ret->getGradeSign() << std::endl; 
	}
	else if (!ret)
	{
		throw InvalidFormException();
	}
	return (ret);
}