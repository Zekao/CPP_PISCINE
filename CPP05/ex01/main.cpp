/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaugale <emaugale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 00:52:20 by emaugale          #+#    #+#             */
/*   Updated: 2022/03/15 20:52:31 by emaugale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main(void)
{
	std::cout << "=================================" << std::endl;
	std::cout << "\033[1;31m Creating a Bureaucrat\033[m" << std::endl;
	std::cout << "=================================" << std::endl;
	Bureaucrat Br("Smith");
	Form test("Petition", false, 42, 48);
	
	std::cout << "=================================" << std::endl;
	std::cout << "\033[1;32m Changing his grade\033[m" << std::endl;
	std::cout << "=================================" << std::endl;
	try
	{
		std::cout << Br << std::endl;
		Br.setGrade(41);
		std::cout << test << std::endl;
		Br.signForm(test);
		std::cout << test << std::endl;
		Br.setGrade(145);
		std::cout << Br << std::endl;
		Br.setGrade(2);
		std::cout << Br << std::endl;
		test.setSigned(false);
		Br.signForm(test);
		Br.setGrade(65);
		std::cout << Br << std::endl;
		
		std::cout << "=================================" << std::endl;
		std::cout << "\033[1;33m incrementing his grade\033[m" << std::endl;
		std::cout << "=================================" << std::endl;
		Br.incrementGrade();
		
		std::cout << Br << std::endl;
		std::cout << "=================================" << std::endl;
		std::cout << "\033[1;34m incrementing his grade\033[m" << std::endl;
		std::cout << "=================================" << std::endl;
		
		Br.decrementGrade();
		std::cout << Br << std::endl;
		std::cout << "=================================" << std::endl;
		std::cout << "\033[1;35m Trying to sign with inssufisent grade\033[m" << std::endl;
		std::cout << "=================================" << std::endl;
		
		Br.setGrade(82);
		test.setSigned(false);
		Br.signForm(test); // <- exception because grade is insuffisent
	}
	catch (std::exception const &e)
	{
		std::cout << "=================================" << std::endl;
		std::cout << "\033[1;31m EXCEPTION CATCHED\033[m" << std::endl;
		std::cout << "=================================" << std::endl;
		std::cout << Br.getName() << " ";
		std::cerr << e.what() << std::endl;
		std::cout << "=================================" << std::endl;
		std::cout << "\033[1;31m EXCEPTION CATCHED\033[m" << std::endl;
		std::cout << "=================================" << std::endl;
	}
}