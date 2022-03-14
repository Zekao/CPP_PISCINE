/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaugale <emaugale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 20:39:49 by emaugale          #+#    #+#             */
/*   Updated: 2022/03/15 00:47:57 by emaugale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"
#include "Bureaucrat.hpp"
#include "Form.hpp"

PresidentialPardonForm::PresidentialPardonForm() : Form("", false, 25, 5)
{
	this->_target = "";
    std::cout << "Robotomy default constructor called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(std::string name) : Form(name, false, 25, 5)
{
	this->_target = name;
	std::cout << "Robotomy default constructor called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm &copy) : Form("", false, 25, 5)
{
	*this = copy;
	std::cout << "Copy constructor called" << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
	std::cout << "Robotomy destructor called" << std::endl;
}

void PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
	if (executor.getGrade() < 5 && executor.getGrade() > 1 && this->getSignStatus() == true)
	{
        apologize();
	}
	else
		throw ExecException();
}

std::string PresidentialPardonForm::getTarget(void) const
{
	return (this->_target);
}

void PresidentialPardonForm::apologize(void) const
{
	std::cout << this->_target << " has been appoligized by Zaphod Beeblebrox." << std::endl;
}

void PresidentialPardonForm::setGrade(int i)
{
	this->_grade = i;
}

PresidentialPardonForm & PresidentialPardonForm::operator=( PresidentialPardonForm const & value )
{
	std::cout << "Copy assignement operator called" << std::endl;
	this->_grade= value.getGradeExec();
	return (*this);
}
