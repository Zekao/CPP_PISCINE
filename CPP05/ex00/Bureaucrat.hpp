/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaugale <emaugale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 00:19:13 by emaugale          #+#    #+#             */
/*   Updated: 2022/03/14 02:58:36 by emaugale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>

class Bureaucrat
{
	private:
		std::string _name;
		int	_grade;
		class GradeTooHighException : public std::exception
		{
			public :
			 
			virtual const char *what() const throw()
			{
				return ("grade is too high");
			}
		};
		class GradeTooLowException : public std::exception
		{
			public :
			
			virtual const char *what() const throw()
			{
				return ("grade is too low");
			}
		};

	public:
		Bureaucrat(/* args */);
		Bureaucrat(std::string name);
		Bureaucrat(Bureaucrat &copy);
		~Bureaucrat();
		Bureaucrat & operator = ( Bureaucrat const & value );
		std::string getName(void) const;
		int	getGrade(void) const;
		void setGrade(int size);
		void	incrementGrade(void);
		void	decrementGrade(void);
};

std::ostream & operator<<(std::ostream & out, Bureaucrat const & value);

#endif