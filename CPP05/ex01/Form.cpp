/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaugale <emaugale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 03:10:13 by emaugale          #+#    #+#             */
/*   Updated: 2022/03/14 03:29:05 by emaugale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

// Form::Form()
// {
//     std::cout << "Default constructor called" << std::endl;
// }

Form::Form(std::string name, bool isSigned, int gradeSign, int gradeExec) : _name(name), _gradeSign(gradeSign),  _gradeExec(gradeExec)
{
    std::cout << "Default constructor called" << std::endl;
    this->_isSigned = isSigned;
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
