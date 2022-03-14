/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaugale <emaugale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 22:20:03 by emaugale          #+#    #+#             */
/*   Updated: 2022/03/15 00:49:14 by emaugale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include <iostream>
# include <fstream>
# include <string>
# include <cstdlib>
# include <ctime>
# include "Form.hpp"
# include "Bureaucrat.hpp"

class RobotomyRequestForm : public Form
{
private:
	int			_grade;
	std::string _target;
		class GradeTooHighException : public std::exception
		{
				public :
				
				virtual const char *what() const throw()
				{
					return ("RobotomyRequestForm failed : Grade is too High");
				}
		};
		class ExecException : public std::exception
		{
				public :
				
				virtual const char *what() const throw()
				{
					return (" Execution failed");
				}
		};
		class GradeTooLowException : public std::exception
		{
				public :
				
				virtual const char *what() const throw()
				{
					return("RobotomyRequestForm failed : Grade is too Low");
				}
		};

public:
	RobotomyRequestForm();
	RobotomyRequestForm(std::string name);
	~RobotomyRequestForm();
	virtual void	execute(Bureaucrat const & executor) const;
	std::string getTarget(void) const;
	void	setGrade(int i);
	void	robotomize(void) const;
	RobotomyRequestForm(RobotomyRequestForm &copy);
	RobotomyRequestForm & operator = ( RobotomyRequestForm const & value );

	
};

int        random(int min, int max);
#endif