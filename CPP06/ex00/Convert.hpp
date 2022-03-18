/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaugale <emaugale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 23:10:40 by emaugale          #+#    #+#             */
/*   Updated: 2022/03/16 23:10:40 by emaugale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERT_HPP
# define CONVERT_HPP

# include <iostream>
# include <cstring>
# include <cstdlib>
# include <limits.h>

bool		checkChar(std::string str);
bool		checkInt(std::string str);
bool		checkFloat(std::string str);
bool		checkDouble(std::string str);
bool		checkException(std::string str);

void	isChar(std::string const str);
void	isInt(std::string const str);
void	isFloat(std::string const str);
void	isDouble(std::string const str);
void	isExcept(std::string const str);

#endif