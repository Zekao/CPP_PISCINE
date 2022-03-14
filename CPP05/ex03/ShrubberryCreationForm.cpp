/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberryCreationForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaugale <emaugale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 20:39:49 by emaugale          #+#    #+#             */
/*   Updated: 2022/03/15 00:54:30 by emaugale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include "Bureaucrat.hpp"
#include "Form.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : Form("", false, 145, 137)
{
	this->_target = "";
	std::cout << "Shrubbery default constructor called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string name) : Form("", false, 145, 137)
{
	this->_target = name;
	std::cout << "Shrubbery default constructor called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm &copy) : Form("", false, 145, 137)
{
	*this = copy;
	std::cout << "Copy constructor called" << std::endl;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	std::cout << "SHrubbery destructor called" << std::endl;
}

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
	if (executor.getGrade() < 137 && executor.getGrade() > 1 && this->getSignStatus() == true)
	{
		draw_tree(this->_target);	
	}
	else
		throw ExecException();
}

std::string ShrubberyCreationForm::getTarget(void) const
{
	return (this->_target);
}



void ShrubberyCreationForm::draw_tree(std::string target) const
{
	std::string name;

	name = target;
	name += "_shrubbery";
	std::ofstream output(name.c_str());
	output << "               ,@@@@@@@, " << std::endl;
	output << "       ,,,.   ,@@@@@@/@@,  .oo8888o. " << std::endl;
	output << "    ,&%%&%&&%,@@@@@/@@@@@@,8888\\88/8o " << std::endl;
	output << "   ,%&\%&&%&&%,@@@\\@@@/@@@88\\88888/88' " << std::endl;
	output << "   %&&%&%&/%&&%@\\@@/ /@@@88888\\88888'" << std::endl;
	output << "    %&&%/ %&%%&&@@\\ V /@@' `88\\8 `/88' " << std::endl;
	output << "    `&%\\ ` /%&'    |.|        \\ '|8' " << std::endl;
	output << "        |o|        | |         | | " << std::endl;
	output << "        |.|        | |         | | " << std::endl;
	output << "     \\/ ._\\//_/__/  ,\\_//__\\/.  \\_//__/_" << std::endl;
	output.close();
	std::cout << "Shrubberysation finished" << std::endl;
}

void ShrubberyCreationForm::setGrade(int i)
{
	this->_grade = i;
}


ShrubberyCreationForm & ShrubberyCreationForm::operator=( ShrubberyCreationForm const & value )
{
	std::cout << "Copy assignement operator called" << std::endl;
	this->_grade= value.getGradeExec();
	return (*this);
}