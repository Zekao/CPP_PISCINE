/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*    MutantStack.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaugale <emaugale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 07:20:48 by emaugale          #+#    #+#             */
/*   Updated: 2022/03/21 08:07:59 by emaugale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANSTACK_HPP
# define MUTANSTACK_HPP
# include <stack>
# include <vector>
# include <iostream>

template <typename T>
class  MutantStack : public std::stack <T> 
{
	private:
		/* data */
	public:
		typedef typename std::stack<T>::container_type container_type;
		typedef typename container_type::iterator iterator;
		
		iterator	begin(void) {return(this->c.begin());}
		iterator	end(void) {return(this->c.end());}
		
		MutantStack() {};
		MutantStack(MutantStack &copy) : std::stack<T>(copy){};
		MutantStack & operator = ( MutantStack const & value ) {(this->c = value->c());}
		
		virtual ~ MutantStack() {};
	
};

#endif