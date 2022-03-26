/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaugale <emaugale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 05:10:02 by emaugale          #+#    #+#             */
/*   Updated: 2022/03/21 08:00:54 by emaugale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <vector>
# include <iostream>
# include <algorithm>

class Span
{
	private:
		unsigned int 		_N;
		unsigned int		_size;
		std::vector <int> 	_array;
	public:
		Span(void);
		Span(Span const & copy);
		Span(unsigned int nbr);
		~Span();
		Span & operator = ( Span const & value );
		void	addNumber(unsigned int nbr);
		void	addNumber(std::vector<int>::const_iterator t1, std::vector<int>::const_iterator t2);
		unsigned int		getSize(void) const;
		unsigned int		getMax(void) const;
		unsigned int shortestSpan(void) ;
		unsigned int longestSpan(void) ;
};

#endif