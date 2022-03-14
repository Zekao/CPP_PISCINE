/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaugale <emaugale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 03:00:27 by emaugale          #+#    #+#             */
/*   Updated: 2022/03/14 03:27:26 by emaugale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
class Form
{
	private:
		const std::string  	_name;
		bool				_isSigned;		
		const int					_gradeSign;
		const int					_gradeExec;
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
		Form(std::string name, bool isSigned, int gradeSign, int gradeExec);
		~Form();
		void beSigned(void);
		/* GETTERS */
		
		std::string getName(void) const;
		bool getSigned(void) const;
		int getGradeSign(void) const;
		int getGradeExec(void) const;

		/* SETTERS */
		void	setSigned(bool i);
};


#endif