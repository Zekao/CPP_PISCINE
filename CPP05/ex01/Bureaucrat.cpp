/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaugale <emaugale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 00:19:46 by emaugale          #+#    #+#             */
/*   Updated: 2022/03/15 20:50:17 by emaugale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat()
{
	std::cout << "Bureaucrat default constructor called" << std::endl;
	this->_grade = 0;
}

Bureaucrat::Bureaucrat(std::string name)
{
	std::cout << "Bureaucrat default constructor called" << std::endl;
	this->_name = name;
	this->_grade = 0;
}

Bureaucrat::Bureaucrat(Bureaucrat &copy)
{
	std::cout << "Bureaucrat copy constructor called" << std::endl;
	*this = copy;
}

Bureaucrat::~Bureaucrat()
{
	std::cout << "Default destructor called" << std::endl;
}

int Bureaucrat::getGrade(void) const
{
	return (this->_grade);
}

std::string Bureaucrat::getName(void) const
{
	return(this->_name);
}

Bureaucrat & Bureaucrat::operator=( Bureaucrat const & value )
{
	std::cout << "Copy assignement operator called" << std::endl;
	this->_grade = value.getGrade();
	this->_name = value.getName();
	return (*this);
}


void Bureaucrat::setGrade(int grade)
{
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	else
		this->_grade = grade;	
}

void	Bureaucrat::incrementGrade(void)
{
	this->_grade -= 1;
	if (_grade < 1)
	{
		_grade++;
		throw Bureaucrat::GradeTooHighException();
	}
}

void	Bureaucrat::decrementGrade(void)
{
	this->_grade += 1;
	if (_grade > 150)
	{
		_grade--;
		throw Bureaucrat::GradeTooLowException();
	}
}


void Bureaucrat::signForm(Form & Form)
{
	if (Form.getGradeExec() < 1 || Form.getGradeExec() > 150)
		throw SignException();
	else if (Form.getGradeSign() < 1 || Form.getGradeSign() > 150)
		throw SignException();
	else if (Form.getSignStatus() == true)
		std::cout << this->_name << " signed " << Form.getName() << std::endl;
	else if (Form.getGradeSign() > this->_grade)
	{
		Form.setSigned(true);
		std::cout << this->_name << " signed " << Form.getName() << std::endl;
	}
	else
	{
		std::cout << "Grade : " << Form.getGradeSign() << std::endl;
		throw SignException();
	}
}

std::ostream & operator<<( std::ostream & out, Bureaucrat const & Bureaucrat)
{
	out << Bureaucrat.getName() << ", bureaucrat grade " << Bureaucrat.getGrade();
	return (out);
}