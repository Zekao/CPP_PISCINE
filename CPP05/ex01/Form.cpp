/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaugale <emaugale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 03:10:13 by emaugale          #+#    #+#             */
/*   Updated: 2022/03/15 20:50:38 by emaugale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(std::string name) : _name(name), _gradeSign(0), _gradeExec(0)
{
	std::cout << "Default Form constructor called" << std::endl;
	this->_isSigned = false;
}

Form::Form(std::string name, bool isSigned, int gradeSign, int gradeExec) : _name(name), _gradeSign(gradeSign),  _gradeExec(gradeExec)
{
	std::cout << "Default form constructor called" << std::endl;
	this->_isSigned = isSigned;
}

Form & Form::operator=( Form const & value )
{
	std::cout << "Copy assignement operator called" << std::endl;
	this->_isSigned = value.getSignStatus();
	return (*this);
}

Form::Form(Form &copy) : _gradeSign(0), _gradeExec(0)
{
	*this = copy;
	std::cout << "Copy constructor called" << std::endl;
}

Form::~Form()
{
	std::cout << "Form Destructor called " << std::endl;
}

void Form::setSigned(bool i)
{
	this->_isSigned = i;
}

std::string Form::getName(void) const
{
	return (this->_name);
}

int Form::getGradeExec(void) const
{
   return (this->_gradeExec);     
}

int Form::getGradeSign(void) const
{
   return (this->_gradeSign);     
}

bool Form::getSignStatus(void) const
{
	return (this->_isSigned);
}

void Form::beSigned(Bureaucrat Bur)
{
	if  (Bur.getGrade() < this->_gradeSign && this->_gradeSign > 1 && this->_gradeSign < 150)
	{
		this->_isSigned = true;
		std::cout << Bur.getName() << " signed " << this->_name << std::endl;
	}
	else
	{
		throw Form::GradeTooLowException();
	}
		
}

std::ostream & operator<<( std::ostream & out, Form const & Form)
{
	out << "Form " << Form.getName() << " | execution grade " << Form.getGradeExec() << " | signed grade" << Form.getGradeSign() << " | is signed?";
	if (Form.getSignStatus() == true)
		out << " yes" << std::endl;
	else
		out << " no" << std::endl;
	return (out);
}
