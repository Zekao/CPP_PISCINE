/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaugale <emaugale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 00:52:20 by emaugale          #+#    #+#             */
/*   Updated: 2022/03/15 00:54:21 by emaugale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Form.hpp"

int main(void)
{
	std::cout << "=================================" << std::endl;
	std::cout << "\033[1;32m Creating a Bureaucrat\033[m" << std::endl;
	std::cout << "=================================" << std::endl;
	Bureaucrat Br("Smith");
	RobotomyRequestForm test("Blender");
	ShrubberyCreationForm test2("TrivialPursuit");
	PresidentialPardonForm test3("Michel");
	try
	{
		Br.setGrade(2);
		std::cout << "=================================" << std::endl;
		std::cout << "\033[1;33m Trying to sign form\033[m" << std::endl;
		std::cout << "=================================" << std::endl;

		Br.signForm(&test);
		Br.signForm(&test2);
		Br.signForm(&test3);
		
		std::cout << "=================================" << std::endl;
		std::cout << "\033[1;33m Trying to execute Robotomy\033[m" << std::endl;
		std::cout << "=================================" << std::endl;
		
		test.execute(Br);
		std::cout << "=================================" << std::endl;
		std::cout << "\033[1;33m Trying to execute Shrubbery\033[m" << std::endl;
		std::cout << "=================================" << std::endl;
		test2.execute(Br);
		std::cout << "=================================" << std::endl;
		std::cout << "\033[1;33m Trying to execute Presidential \033[m" << std::endl;
		std::cout << "=================================" << std::endl;
		
		test3.execute(Br);
	}
	catch (std::exception const &e)
	{
		std::cout << "=================================" << std::endl;
		std::cout << "\033[1;31m EXCEPTION CATCHED\033[m" << std::endl;
		std::cout << "=================================" << std::endl;
		std::cout << Br.getName();
		std::cerr << e.what() << std::endl;
	}
}