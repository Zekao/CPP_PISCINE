/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaugale <emaugale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 00:52:20 by emaugale          #+#    #+#             */
/*   Updated: 2022/03/15 20:24:00 by emaugale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Form.hpp"
#include "Intern.hpp"

int main(void)
{
	
	
	std::cout << "=================================" << std::endl;
	std::cout << "\033[1;32m creating an intern\033[m" << std::endl;
	std::cout << "=================================" << std::endl;
	Intern		intrn;
	Bureaucrat	test("test");
	Form		*form;

	std::cout << "=================================" << std::endl;
	std::cout << "\033[1;33m creating different forms\033[m" << std::endl;
	std::cout << "=================================" << std::endl;
	try
	{
		form = intrn.makeForm("robotomy request", " Terry");
		if (form)
			delete form;
		form = intrn.makeForm("presidential pardon", " Jack");
		if (form)
			delete form;
		form = intrn.makeForm("shrubbery creation", " Clap");
		if (form)
			delete form;
		form = intrn.makeForm("sajkdhajk sdhkjdhas jkdakjd ", " jsp");
		if (form)
			delete form;
	}
	catch (std::exception const &e)
	{
		std::cout << "=================================" << std::endl;
		std::cout << "\033[1;31m EXCEPTION CATCHED\033[m" << std::endl;
		std::cout << "=================================" << std::endl;
		std::cerr << e.what() << std::endl;
	}
}