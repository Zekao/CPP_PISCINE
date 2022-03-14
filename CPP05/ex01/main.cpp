/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaugale <emaugale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 00:52:20 by emaugale          #+#    #+#             */
/*   Updated: 2022/03/14 17:25:13 by emaugale         ###   ########.fr       */
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
		Br.setGrade(43);
		std::cout << test << std::endl;
		test.beSigned(Br);
		std::cout << test << std::endl;
		Br.setGrade(41);
		test.beSigned(Br); 
		Br.setGrade(145);
		std::cout << Br << std::endl;
		Br.setGrade(45);
		std::cout << Br << std::endl;
		Br.setGrade(42);
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
		std::cout << "\033[1;35m decrementing his grade\033[m" << std::endl;
		std::cout << "=================================" << std::endl;
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